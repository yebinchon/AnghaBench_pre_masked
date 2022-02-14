
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7()
{
 int VAR_3;

 if (!(VAR_1 > 0 && VAR_0 - VAR_2 >

  VAR_1))
 {
  return FUNC_1();
 }

 FUNC_0("start compress trunk binlog ...");
 if ((VAR_3=FUNC_3()) != 0)
 {
  return VAR_3;
 }

 if ((VAR_3=FUNC_1()) != 0)
 {
  FUNC_5();
  return VAR_3;
 }

 if ((VAR_3=FUNC_4()) != 0)
 {
  FUNC_5();
  return VAR_3;
 }

 VAR_2 = VAR_0;
 FUNC_2();

 FUNC_0("compress trunk binlog done.");
 return FUNC_6();
}
