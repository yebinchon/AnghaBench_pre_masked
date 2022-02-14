
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

int FUNC_5(void)
{
 int VAR_3;





 if (FUNC_1())
  if (FUNC_4(0xfffec000 + 0x00) & (1 << 0))
   return 1;


 if (FUNC_2())
  if (FUNC_4(VAR_0) & VAR_1)
   return 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_3(FUNC_0(VAR_3)) & VAR_1)
   return 1;

 return 0;
}
