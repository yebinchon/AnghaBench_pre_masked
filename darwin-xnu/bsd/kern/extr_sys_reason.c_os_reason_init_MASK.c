
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_reason {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int,int,int,char*) ;

void
FUNC_7()
{
 int VAR_6 = 0;




 VAR_4 = FUNC_3();
 VAR_3 = FUNC_2("os_reason_lock", VAR_4);
 VAR_2 = FUNC_1();




 VAR_5 = FUNC_6(sizeof(struct os_reason), VAR_0 * sizeof(struct os_reason),
    VAR_0, "os reasons");
 if (VAR_5 == ((void*)0)) {
  FUNC_4("failed to initialize os_reason_zone");
 }







 VAR_6 = FUNC_5(VAR_5, VAR_1);
 FUNC_0(VAR_6 > 0);
}
