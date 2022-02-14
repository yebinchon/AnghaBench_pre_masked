
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {int misaligned; unsigned int alignment_offset; unsigned int physical_block_size; unsigned int io_min; int logical_block_size; int io_opt; int discard_granularity; unsigned int discard_alignment; int discard_misaligned; void* max_discard_sectors; int discard_zeroes_data; int no_cluster; void* max_segment_size; void* max_segments; void* seg_boundary_mask; void* bounce_pfn; void* max_hw_sectors; void* max_sectors; } ;
typedef int sector_t ;


 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 void* FUNC_3 (void*,void*) ;
 unsigned int FUNC_4 (struct queue_limits*,int ) ;
 unsigned int FUNC_5 (struct queue_limits*,int ) ;

int FUNC_6(struct queue_limits *VAR_0, struct queue_limits *VAR_1,
       sector_t VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6 = 0;

 VAR_0->max_sectors = FUNC_3(VAR_0->max_sectors, VAR_1->max_sectors);
 VAR_0->max_hw_sectors = FUNC_3(VAR_0->max_hw_sectors, VAR_1->max_hw_sectors);
 VAR_0->bounce_pfn = FUNC_3(VAR_0->bounce_pfn, VAR_1->bounce_pfn);

 VAR_0->seg_boundary_mask = FUNC_3(VAR_0->seg_boundary_mask,
         VAR_1->seg_boundary_mask);

 VAR_0->max_segments = FUNC_3(VAR_0->max_segments, VAR_1->max_segments);

 VAR_0->max_segment_size = FUNC_3(VAR_0->max_segment_size,
        VAR_1->max_segment_size);

 VAR_0->misaligned |= VAR_1->misaligned;

 VAR_5 = FUNC_4(VAR_1, VAR_2);




 if (VAR_0->alignment_offset != VAR_5) {

  VAR_3 = FUNC_1(VAR_0->physical_block_size, VAR_0->io_min)
   + VAR_0->alignment_offset;
  VAR_4 = FUNC_1(VAR_1->physical_block_size, VAR_1->io_min) + VAR_5;


  if (FUNC_1(VAR_3, VAR_4) & (FUNC_2(VAR_3, VAR_4) - 1)) {
   VAR_0->misaligned = 1;
   VAR_6 = -1;
  }
 }

 VAR_0->logical_block_size = FUNC_1(VAR_0->logical_block_size,
        VAR_1->logical_block_size);

 VAR_0->physical_block_size = FUNC_1(VAR_0->physical_block_size,
         VAR_1->physical_block_size);

 VAR_0->io_min = FUNC_1(VAR_0->io_min, VAR_1->io_min);
 VAR_0->io_opt = FUNC_0(VAR_0->io_opt, VAR_1->io_opt);

 VAR_0->no_cluster |= VAR_1->no_cluster;
 VAR_0->discard_zeroes_data &= VAR_1->discard_zeroes_data;


 if (VAR_0->physical_block_size & (VAR_0->logical_block_size - 1)) {
  VAR_0->physical_block_size = VAR_0->logical_block_size;
  VAR_0->misaligned = 1;
  VAR_6 = -1;
 }


 if (VAR_0->io_min & (VAR_0->physical_block_size - 1)) {
  VAR_0->io_min = VAR_0->physical_block_size;
  VAR_0->misaligned = 1;
  VAR_6 = -1;
 }


 if (VAR_0->io_opt & (VAR_0->physical_block_size - 1)) {
  VAR_0->io_opt = 0;
  VAR_0->misaligned = 1;
  VAR_6 = -1;
 }


 VAR_0->alignment_offset = FUNC_0(VAR_0->alignment_offset, VAR_5)
  & (FUNC_1(VAR_0->physical_block_size, VAR_0->io_min) - 1);


 if (VAR_0->alignment_offset & (VAR_0->logical_block_size - 1)) {
  VAR_0->misaligned = 1;
  VAR_6 = -1;
 }


 if (VAR_1->discard_granularity) {
  VAR_5 = FUNC_5(VAR_1, VAR_2);

  if (VAR_0->discard_granularity != 0 &&
      VAR_0->discard_alignment != VAR_5) {
   VAR_3 = VAR_0->discard_granularity + VAR_0->discard_alignment;
   VAR_4 = VAR_1->discard_granularity + VAR_5;


   if ((FUNC_1(VAR_3, VAR_4) % FUNC_2(VAR_3, VAR_4)) != 0)
    VAR_0->discard_misaligned = 1;
  }

  VAR_0->max_discard_sectors = FUNC_3(VAR_0->max_discard_sectors,
            VAR_1->max_discard_sectors);
  VAR_0->discard_granularity = FUNC_1(VAR_0->discard_granularity,
          VAR_1->discard_granularity);
  VAR_0->discard_alignment = FUNC_0(VAR_0->discard_alignment, VAR_5) %
   VAR_0->discard_granularity;
 }

 return VAR_6;
}
