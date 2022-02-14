
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_5;
 unsigned long VAR_6;

 if (!VAR_3)
  return;
 if (!(VAR_4 & VAR_0)) {
  FUNC_4(VAR_6);
  FUNC_0();
  VAR_4 |= VAR_0;
  FUNC_3(VAR_6);
  return;
 }
 if (!(VAR_3[2] & 1))
  return;

 FUNC_4(VAR_6);


 VAR_5 = FUNC_2(VAR_2);
 if ((VAR_5&VAR_1) != 0) {
  FUNC_3(VAR_6);
  return;
 }



 FUNC_1();
 FUNC_3(VAR_6);
}
