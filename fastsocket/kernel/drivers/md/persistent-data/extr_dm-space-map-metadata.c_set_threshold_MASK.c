
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold {int threshold_set; void* context; int fn; int threshold; } ;
typedef int dm_sm_threshold_fn ;
typedef int dm_block_t ;



__attribute__((used)) static void FUNC_0(struct threshold *VAR_0, dm_block_t VAR_1,
     dm_sm_threshold_fn VAR_2, void *VAR_3)
{
 VAR_0->threshold_set = 1;
 VAR_0->threshold = VAR_1;
 VAR_0->fn = VAR_2;
 VAR_0->context = VAR_3;
}
