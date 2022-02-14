
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct nouveau_vma {int access; } ;


 int VAR_0 ;

__attribute__((used)) static inline u64
FUNC_0(struct nouveau_vma *VAR_1, u64 VAR_2, u32 VAR_3, u32 VAR_4)
{
 VAR_2 >>= 8;

 VAR_2 |= 0x00000001;
 if (VAR_1->access & VAR_0)
  VAR_2 |= 0x00000002;

 VAR_2 |= ((u64)VAR_4 << 32);
 VAR_2 |= ((u64)VAR_3 << 36);

 return VAR_2;
}
