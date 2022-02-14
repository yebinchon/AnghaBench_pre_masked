
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SERVER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 double FUNC_1 (double,double) ;
 int VAR_1 ;

UINT FUNC_2(SERVER *VAR_2, UINT VAR_3, UINT VAR_4)
{
 UINT VAR_5 = VAR_1;
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (VAR_4 == 0)
 {
  VAR_4 = 100;
 }

 VAR_5 = FUNC_0(VAR_2, "i_max_sessions");

 if (VAR_5 == 0)
 {

  VAR_5 = 1;
 }

 return (UINT)(((double)VAR_5 -
  FUNC_1((double)VAR_3 * 100.0 / (double)VAR_4, (double)VAR_5))
  * (double)VAR_0 / (double)VAR_5);
}
