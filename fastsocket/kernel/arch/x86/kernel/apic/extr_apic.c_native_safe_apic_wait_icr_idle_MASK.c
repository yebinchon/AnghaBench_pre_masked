
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

u32 FUNC_2(void)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = 0;
 do {
  VAR_2 = FUNC_0(VAR_0) & VAR_1;
  if (!VAR_2)
   break;
  FUNC_1(100);
 } while (VAR_3++ < 1000);

 return VAR_2;
}
