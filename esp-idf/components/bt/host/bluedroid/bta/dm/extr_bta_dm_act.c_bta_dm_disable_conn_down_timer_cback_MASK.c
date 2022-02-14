
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int hw_module; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_SYS_HW_MSG ;
struct TYPE_7__ {int disabling; } ;
typedef int TIMER_LIST_ENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (TIMER_LIST_ENT *VAR_5)
{
    FUNC_0(VAR_5);
    tBTA_SYS_HW_MSG *VAR_6;



    FUNC_1();



    FUNC_2( VAR_1, VAR_4 );


    if ((VAR_6 = (tBTA_SYS_HW_MSG *) FUNC_4(sizeof(tBTA_SYS_HW_MSG))) != ((void*)0)) {
        VAR_6->hdr.event = VAR_0;
        VAR_6->hw_module = VAR_1;
        FUNC_3(VAR_6);
    }

    VAR_3.disabling = VAR_2;

}
