
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_char ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (long) ;

u_short FUNC_3(volatile u_char * VAR_1, u_char VAR_2)
{
 unsigned long VAR_3;
 volatile int VAR_4;

 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  if (VAR_1[VAR_0] == 0) {
   break;
  }
  FUNC_2(10L);
 }


 if (VAR_4 == 10) {
  FUNC_0(VAR_3);
  return (-1);
 }


 VAR_1[VAR_0] = VAR_2;
 FUNC_0(VAR_3);
 return (0);
}
