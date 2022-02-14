
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ib_ucontext {int device; } ;
struct TYPE_3__ {int uar; int db_tab; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_5(struct ib_ucontext *VAR_0)
{
 FUNC_1(FUNC_3(VAR_0->device), &FUNC_4(VAR_0)->uar,
      FUNC_4(VAR_0)->db_tab);
 FUNC_2(FUNC_3(VAR_0->device), &FUNC_4(VAR_0)->uar);
 FUNC_0(FUNC_4(VAR_0));

 return 0;
}
