
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int (* transmit_downward ) (scalar_t__,TYPE_1__*) ;} ;
struct TYPE_6__ {scalar_t__ event; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;

void FUNC_2 (BT_HDR *VAR_4, UINT16 VAR_5)
{
    UINT16 VAR_6 = VAR_5 & VAR_0;

    VAR_4->event = VAR_5;




    if ((VAR_6 == VAR_2) || (VAR_6 == VAR_1)) {

        VAR_3->transmit_downward(VAR_5, VAR_4);
    } else {

        FUNC_0(VAR_4);
    }
}
