
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rtable; } ;
typedef TYPE_1__ Query ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(Query *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_2->rtable);
 if (VAR_3 > 1)
 {
  FUNC_0(VAR_1, (FUNC_1(VAR_0),
      FUNC_3("cannot delete from distributed table"),
      FUNC_2("Delete on multiple tables is not supported")));
 }
}
