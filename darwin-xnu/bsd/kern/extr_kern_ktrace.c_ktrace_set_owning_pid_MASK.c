
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_3)
{
 FUNC_0();


 if (VAR_3 == -1) {
  FUNC_1();
  return 0;
 }


 if (VAR_3 == 0) {
  FUNC_1();
  return VAR_0;
 }

 proc_t VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4) {
  FUNC_1();
  return VAR_1;
 }

 VAR_2 = 1;
 FUNC_2(VAR_4);

 FUNC_4(VAR_4);
 return 0;
}
