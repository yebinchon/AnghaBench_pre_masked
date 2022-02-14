
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct adb_request*,int *,int,int ,...) ;
 int FUNC_3 (struct adb_request*) ;
 int * VAR_7 ;

void
FUNC_4(void)
{
 struct adb_request VAR_8;

 if (VAR_7 == ((void*)0))
  return;

 FUNC_0();

 VAR_5 = 1;

 if (VAR_6 != VAR_2) {
  FUNC_2(&VAR_8, ((void*)0), 2, VAR_4, VAR_0 |
      VAR_1 );
  while(!VAR_8.complete)
   FUNC_1();
 }

 FUNC_2(&VAR_8, ((void*)0), 1, VAR_3);
 FUNC_3(&VAR_8);
 for (;;)
  ;
}
