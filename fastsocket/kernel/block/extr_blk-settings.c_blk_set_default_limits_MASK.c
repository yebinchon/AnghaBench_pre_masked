
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {int logical_block_size; int physical_block_size; int io_min; unsigned long bounce_pfn; scalar_t__ no_cluster; scalar_t__ misaligned; scalar_t__ io_opt; scalar_t__ alignment_offset; scalar_t__ discard_zeroes_data; scalar_t__ discard_misaligned; scalar_t__ discard_alignment; scalar_t__ discard_granularity; scalar_t__ max_discard_sectors; int max_hw_sectors; int max_sectors; int max_segment_size; int seg_boundary_mask; int max_segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct queue_limits *VAR_6)
{
 VAR_6->max_segments = VAR_1;
 VAR_6->seg_boundary_mask = VAR_4;
 VAR_6->max_segment_size = VAR_2;
 VAR_6->max_sectors = VAR_6->max_hw_sectors = VAR_3;
 VAR_6->max_discard_sectors = 0;
 VAR_6->discard_granularity = 0;
 VAR_6->discard_alignment = 0;
 VAR_6->discard_misaligned = 0;
 VAR_6->discard_zeroes_data = 0;
 VAR_6->logical_block_size = VAR_6->physical_block_size = VAR_6->io_min = 512;
 VAR_6->bounce_pfn = (unsigned long)(VAR_0 >> VAR_5);
 VAR_6->alignment_offset = 0;
 VAR_6->io_opt = 0;
 VAR_6->misaligned = 0;
 VAR_6->no_cluster = 0;
}
