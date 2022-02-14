
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * FUNC_4 (int,int,int,char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 FUNC_0(VAR_5 == ((void*)0));

 VAR_3 = FUNC_3();
 VAR_2 = FUNC_2("rethrottle", VAR_3);
 VAR_1 = FUNC_1();

 VAR_5 = FUNC_4(sizeof(struct uthread),
                      VAR_4 * sizeof(struct uthread),
                      VAR_0 * sizeof(struct uthread),
                      "uthreads");
}
