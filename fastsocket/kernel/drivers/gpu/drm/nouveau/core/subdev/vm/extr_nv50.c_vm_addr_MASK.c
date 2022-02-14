
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_vma {int access; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u64
FUNC_0(struct nouveau_vma *VAR_2, u64 VAR_3, u32 VAR_4, u32 VAR_5)
{
 VAR_3 |= 1;
 VAR_3 |= (u64)VAR_4 << 40;
 VAR_3 |= VAR_5 << 4;
 if (VAR_2->access & VAR_0)
  VAR_3 |= (1 << 6);
 if (!(VAR_2->access & VAR_1))
  VAR_3 |= (1 << 3);
 return VAR_3;
}
