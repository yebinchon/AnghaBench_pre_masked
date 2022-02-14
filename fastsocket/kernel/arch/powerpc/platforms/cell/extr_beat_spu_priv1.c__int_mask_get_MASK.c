
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct spu {int * shadow_int_mask_RW; } ;



__attribute__((used)) static inline u64 FUNC_0(struct spu *VAR_0, int VAR_1)
{
 return VAR_0->shadow_int_mask_RW[VAR_1];
}
