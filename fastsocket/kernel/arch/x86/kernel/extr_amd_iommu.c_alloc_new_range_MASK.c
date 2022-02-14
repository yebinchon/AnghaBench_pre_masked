
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct dma_ops_domain {int aperture_size; TYPE_1__** aperture; int domain; } ;
struct aperture_range {int dummy; } ;
struct amd_iommu {unsigned long exclusion_start; int exclusion_length; } ;
typedef int gfp_t ;
struct TYPE_3__ {int offset; void* bitmap; int ** pte_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_1 (int *,unsigned long,int ,int **,int ) ;
 int FUNC_2 (struct dma_ops_domain*,unsigned long,int) ;
 int * FUNC_3 (int *,unsigned long,int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned long,int,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct amd_iommu *VAR_9,
      struct dma_ops_domain *VAR_10,
      bool VAR_11, gfp_t VAR_12)
{
 int VAR_13 = VAR_10->aperture_size >> VAR_2;
 unsigned long VAR_14, VAR_15;





 if (VAR_13 >= VAR_0)
  return -VAR_4;

 VAR_10->aperture[VAR_13] = FUNC_8(sizeof(struct aperture_range), VAR_12);
 if (!VAR_10->aperture[VAR_13])
  return -VAR_4;

 VAR_10->aperture[VAR_13]->bitmap = (void *)FUNC_5(VAR_12);
 if (!VAR_10->aperture[VAR_13]->bitmap)
  goto out_free;

 VAR_10->aperture[VAR_13]->offset = VAR_10->aperture_size;

 if (VAR_11) {
  unsigned long VAR_16 = VAR_10->aperture_size;
  int VAR_17, VAR_18 = VAR_1 / 512;
  u64 *VAR_19, *VAR_20;

  for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17) {
   VAR_19 = FUNC_1(&VAR_10->domain, VAR_16, VAR_8,
     &VAR_20, VAR_12);
   if (!VAR_19)
    goto out_free;

   VAR_10->aperture[VAR_13]->pte_pages[VAR_17] = VAR_20;

   VAR_16 += VAR_3 / 64;
  }
 }

 VAR_15 = VAR_10->aperture_size;
 VAR_10->aperture_size += VAR_3;


 if (VAR_15 < VAR_5 &&
     VAR_10->aperture_size > VAR_5) {
  unsigned long VAR_21;
  int VAR_22;

  VAR_22 = FUNC_6(VAR_5, 0x10000, VAR_7);
  VAR_21 = VAR_5 >> VAR_6;

  FUNC_2(VAR_10, VAR_21, VAR_22);
 }


 if (VAR_9->exclusion_start &&
     VAR_9->exclusion_start >= VAR_10->aperture[VAR_13]->offset &&
     VAR_9->exclusion_start < VAR_10->aperture_size) {
  unsigned long VAR_23 = VAR_9->exclusion_start >> VAR_6;
  int VAR_24 = FUNC_6(VAR_9->exclusion_start,
         VAR_9->exclusion_length,
         VAR_7);
  FUNC_2(VAR_10, VAR_23, VAR_24);
 }







 for (VAR_14 = VAR_10->aperture[VAR_13]->offset;
      VAR_14 < VAR_10->aperture_size;
      VAR_14 += VAR_7) {
  u64 *VAR_25 = FUNC_3(&VAR_10->domain, VAR_14, VAR_8);
  if (!VAR_25 || !FUNC_0(*VAR_25))
   continue;

  FUNC_2(VAR_10, VAR_14 >> VAR_6, 1);
 }

 FUNC_9(&VAR_10->domain);

 return 0;

out_free:
 FUNC_9(&VAR_10->domain);

 FUNC_4((unsigned long)VAR_10->aperture[VAR_13]->bitmap);

 FUNC_7(VAR_10->aperture[VAR_13]);
 VAR_10->aperture[VAR_13] = ((void*)0);

 return -VAR_4;
}
