
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cycx_hw {int dpmbase; } ;


 int FUNC_0 (int,void*,int) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct cycx_hw *VAR_0, u32 VAR_1, void *VAR_2, u32 VAR_3)
{
 if (VAR_3 == 1)
  FUNC_1(*(u8*)VAR_2, VAR_0->dpmbase + VAR_1);
 else
  FUNC_0(VAR_0->dpmbase + VAR_1, VAR_2, VAR_3);

 return 0;
}
