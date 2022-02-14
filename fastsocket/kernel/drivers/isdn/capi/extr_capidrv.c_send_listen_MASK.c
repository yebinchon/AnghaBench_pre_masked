
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cipmask2; int cipmask; int contrnr; int msgid; } ;
typedef TYPE_2__ capidrv_contr ;
struct TYPE_7__ {int applid; } ;
struct TYPE_9__ {TYPE_1__ ap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int,int ,int ,int *,int *) ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_3(capidrv_contr *VAR_3)
{
 FUNC_0(&VAR_1, VAR_2.ap.applid,
        VAR_3->msgid++,
        VAR_3->contrnr,
        1 << 6,
        VAR_3->cipmask,
        VAR_3->cipmask2,
        ((void*)0), ((void*)0));
 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, &VAR_1);
}
