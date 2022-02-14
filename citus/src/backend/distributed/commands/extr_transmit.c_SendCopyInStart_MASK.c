
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_3; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ StringInfoData ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char const) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 StringInfoData VAR_1 = { ((void*)0), 0, 0, 0 };
 const char VAR_2 = 1;
 int VAR_3 = 0;

 FUNC_2(&VAR_1, 'G');
 FUNC_5(&VAR_1, VAR_2);
 FUNC_6(&VAR_1, 0, 2);
 FUNC_3(&VAR_1);


 VAR_3 = FUNC_4();
 if (VAR_3 != 0)
 {
  FUNC_0(VAR_0, (FUNC_1("could not flush copy start data")));
 }
}
