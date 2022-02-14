
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_slb {unsigned long esid; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct spu_slb *VAR_1, int VAR_2,
  void *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (!((VAR_1[VAR_5].esid ^ VAR_4) & VAR_0))
   return 1;

 return 0;
}
