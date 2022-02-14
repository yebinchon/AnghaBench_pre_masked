
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (unsigned int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(unsigned int *VAR_4)
{
 u8 VAR_5, VAR_6;
 bool VAR_7;

 switch (VAR_3) {
 case 128:

  if (FUNC_4(!FUNC_2()))
   return -VAR_0;
  VAR_7 = !FUNC_0(VAR_2, &VAR_6) ||
        !FUNC_0(VAR_2 + 1, &VAR_5);
  FUNC_1();
  if (VAR_7)
   return -VAR_0;

  if (FUNC_3(VAR_4))
   *VAR_4 = (VAR_5 << 8) | VAR_6;

  break;

 default:
  return -VAR_1;
 }

 return 0;
}
