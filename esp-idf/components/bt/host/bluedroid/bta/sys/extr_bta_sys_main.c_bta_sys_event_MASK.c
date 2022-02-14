
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_8__ {TYPE_1__** reg; } ;
struct TYPE_7__ {int event; } ;
struct TYPE_6__ {scalar_t__ (* evt_hdlr ) (TYPE_2__*) ;} ;
typedef TYPE_2__ BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,size_t) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

void FUNC_4(void * VAR_3)
{
    BT_HDR *VAR_4 = (BT_HDR *)VAR_3;

    UINT8 VAR_5;
    BOOLEAN VAR_6 = VAR_1;

    FUNC_0("BTA got event 0x%x\n", VAR_4->event);


    VAR_5 = (UINT8) (VAR_4->event >> 8);


    if ((VAR_5 < VAR_0) && (VAR_2.reg[VAR_5] != ((void*)0))) {
        VAR_6 = (*VAR_2.reg[VAR_5]->evt_hdlr)(VAR_4);
    } else {
        FUNC_1("BTA got unregistered event id %d\n", VAR_5);
    }

    if (VAR_6) {
        FUNC_2(VAR_4);
    }

}
