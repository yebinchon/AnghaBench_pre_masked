
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*,int *,char*) ;
 int FUNC_2 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(u8 *VAR_5)
{
 u8 VAR_6;




 switch (VAR_2) {
 case 129:


  if (FUNC_4(!FUNC_1(VAR_4, &VAR_6, ((void*)0), "d")))
   return -VAR_0;

  if (FUNC_3(VAR_5))
   *VAR_5 = VAR_6 & 0x07;

  break;

 case 128:

  if (FUNC_4(!FUNC_0(VAR_3, &VAR_6)))
   return -VAR_0;

  if (FUNC_3(VAR_5)) {
   *VAR_5 = VAR_6;
   FUNC_2(VAR_5);
  }

  break;

 default:
  return -VAR_1;
 }

 return 0;
}
