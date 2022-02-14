
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int bd_name; } ;
struct TYPE_6__ {int dev_class; } ;
struct TYPE_10__ {TYPE_2__ cfg; TYPE_1__ devcb; } ;
struct TYPE_9__ {TYPE_3__* (* get_address ) () ;} ;
struct TYPE_8__ {int address; } ;
typedef int BT_OCTET16 ;


 int FUNC_0 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 TYPE_5__ VAR_9 ;
 TYPE_4__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 () ;

UINT16 FUNC_7(UINT8 *VAR_10, UINT16 VAR_11, BT_OCTET16 VAR_12,
                        BT_OCTET16 VAR_13, UINT8 VAR_14)
{
    UINT8 *VAR_15 = VAR_10;
    UINT16 VAR_16 = 0;





    if (VAR_10 && VAR_11 >= VAR_7) {

        FUNC_3(VAR_15, VAR_16);
        FUNC_1(VAR_15, FUNC_4()->get_address()->address);

        VAR_16 = VAR_7;
        VAR_11 -= VAR_16;




        UINT16 VAR_17 = VAR_6 + 2;
        if (VAR_11 >= VAR_17) {
            *VAR_15++ = VAR_6 + 1;
            *VAR_15++ = VAR_2;
            FUNC_0(VAR_15, VAR_12, VAR_6);
            VAR_16 += VAR_17;
            VAR_11 -= VAR_17;
        }


        VAR_17 = VAR_8 + 2;
        if (VAR_11 >= VAR_17) {
            *VAR_15++ = VAR_8 + 1;
            *VAR_15++ = VAR_3;
            FUNC_0(VAR_15, VAR_13, VAR_8);
            VAR_16 += VAR_17;
            VAR_11 -= VAR_17;
        }


        VAR_17 = VAR_5 + 2;
        if (VAR_11 >= VAR_17) {
            *VAR_15++ = VAR_5 + 1;
            *VAR_15++ = VAR_1;
            FUNC_2(VAR_15, VAR_9.devcb.dev_class);
            VAR_16 += VAR_17;
            VAR_11 -= VAR_17;
        }
        VAR_15 = VAR_10;
        FUNC_3(VAR_15, VAR_16);
    }
    return VAR_16;
}
