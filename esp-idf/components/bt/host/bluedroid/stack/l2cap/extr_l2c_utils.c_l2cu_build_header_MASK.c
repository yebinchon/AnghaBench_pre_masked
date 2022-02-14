
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ transport; int handle; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_8__ {int non_flushable_pbf; } ;
struct TYPE_7__ {int offset; scalar_t__ len; } ;
typedef TYPE_2__ BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 TYPE_5__ VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;

BT_HDR *FUNC_3 (tL2C_LCB *VAR_12, UINT16 VAR_13, UINT8 VAR_14, UINT8 VAR_15)
{
    BT_HDR *VAR_16 = (BT_HDR *)FUNC_2(VAR_3);
    UINT8 *VAR_17;

    if (!VAR_16) {
        return (((void*)0));
    }

    VAR_16->offset = VAR_9;
    VAR_16->len = VAR_13 + VAR_1 + VAR_5 + VAR_4;
    VAR_17 = (UINT8 *)(VAR_16 + 1) + VAR_9;



    if (VAR_12->transport == VAR_0) {
        FUNC_0 (VAR_17, (VAR_12->handle | (VAR_7 << VAR_8)));
    } else

    {

        FUNC_0 (VAR_17, VAR_12->handle | VAR_11.non_flushable_pbf);



    }

    FUNC_0 (VAR_17, VAR_13 + VAR_5 + VAR_4);
    FUNC_0 (VAR_17, VAR_13 + VAR_4);


    if (VAR_12->transport == VAR_0) {



        FUNC_0 (VAR_17, VAR_2);
    } else

    {


        FUNC_0 (VAR_17, VAR_10);
    }


    FUNC_1 (VAR_17, VAR_14);
    FUNC_1 (VAR_17, VAR_15);
    FUNC_0 (VAR_17, VAR_13);

    return (VAR_16);
}
