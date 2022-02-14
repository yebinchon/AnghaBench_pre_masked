
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {int kmap; int * kptr; } ;


 int FUNC_0 (struct radeon_bo*,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct radeon_bo *VAR_0)
{
 if (VAR_0->kptr == ((void*)0))
  return;
 VAR_0->kptr = ((void*)0);
 FUNC_0(VAR_0, 0, 0);
 FUNC_1(&VAR_0->kmap);
}
