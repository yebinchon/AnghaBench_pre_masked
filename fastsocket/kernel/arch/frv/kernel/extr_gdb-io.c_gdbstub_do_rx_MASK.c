
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int* VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

void FUNC_3(void)
{
 unsigned VAR_6, VAR_7;

 VAR_6 = VAR_4;

 while (FUNC_0(VAR_0) & VAR_2) {
  VAR_7 = (VAR_6 + 2) & 0xfff;
  if (VAR_7 == VAR_5)
   break;

  VAR_3[VAR_6++] = FUNC_0(VAR_0);
  VAR_3[VAR_6++] = FUNC_0(VAR_1);
  VAR_6 = VAR_7;
 }

 VAR_4 = VAR_6;

 FUNC_2(15);
 FUNC_1();

}
