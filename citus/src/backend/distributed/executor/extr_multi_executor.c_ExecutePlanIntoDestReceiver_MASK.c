
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int visible; } ;
typedef TYPE_1__* Portal ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;
typedef int DestReceiver ;


 TYPE_1__* FUNC_0 () ;
 long VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int *,char*,char*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,long,int,int,int *,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(PlannedStmt *VAR_1, ParamListInfo VAR_2,
       DestReceiver *VAR_3)
{
 Portal VAR_4 = ((void*)0);
 int VAR_5 = 0;
 long VAR_6 = VAR_0;


 VAR_4 = FUNC_0();


 VAR_4->visible = 0;

 FUNC_2(VAR_4,
       ((void*)0),
       "",
       "SELECT",
       FUNC_6(VAR_1),
       ((void*)0));

 FUNC_5(VAR_4, VAR_2, VAR_5, FUNC_1());
 FUNC_4(VAR_4, VAR_6, 0, 1, VAR_3, VAR_3, ((void*)0));
 FUNC_3(VAR_4, 0);
}
