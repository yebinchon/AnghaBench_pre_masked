
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tDIS_STATUS ;
typedef int tDIS_ATTR_BIT ;
struct TYPE_11__ {int len; int p_data; } ;
struct TYPE_9__ {int product_version; int product_id; int vendor_id_src; int vendor_id; } ;
struct TYPE_12__ {TYPE_4__ data_str; TYPE_2__ pnp_id; int system_id; } ;
typedef TYPE_5__ tDIS_ATTR ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_8__ {int product_version; int product_id; int vendor_id_src; int vendor_id; } ;
struct TYPE_10__ {int** data_string; TYPE_1__ pnp_id; int system_id; } ;
struct TYPE_13__ {TYPE_3__ dis_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;

tDIS_STATUS FUNC_3(tDIS_ATTR_BIT VAR_7, tDIS_ATTR *VAR_8)
{
    UINT8 VAR_9 = 1;
    tDIS_STATUS VAR_10 = VAR_5;

    if (VAR_7 & VAR_1) {
        VAR_6.dis_value.system_id = VAR_8->system_id;
    } else if (VAR_7 & VAR_0) {
        VAR_6.dis_value.pnp_id.vendor_id = VAR_8->pnp_id.vendor_id;
        VAR_6.dis_value.pnp_id.vendor_id_src = VAR_8->pnp_id.vendor_id_src;
        VAR_6.dis_value.pnp_id.product_id = VAR_8->pnp_id.product_id;
        VAR_6.dis_value.pnp_id.product_version = VAR_8->pnp_id.product_version;
    } else {
        VAR_10 = VAR_2;

        while (VAR_7 && VAR_9 < (VAR_3 - 1 )) {
            if (VAR_7 & (UINT16)(1 << VAR_9)) {
                if (VAR_6.dis_value.data_string[VAR_9 - 1] != ((void*)0)) {
                    FUNC_1(VAR_6.dis_value.data_string[VAR_9 - 1]);
                }




                if ((VAR_6.dis_value.data_string[VAR_9 - 1] = (UINT8 *)FUNC_2((UINT16)(VAR_8->data_str.len + 1))) != ((void*)0)) {

                    FUNC_0(VAR_6.dis_value.data_string[VAR_9 - 1], VAR_8->data_str.p_data, VAR_8->data_str.len);
                    VAR_6.dis_value.data_string[VAR_9 - 1][VAR_8->data_str.len] = 0;
                    VAR_10 = VAR_5;
                } else {
                    VAR_10 = VAR_4;
                }

                break;
            }
            VAR_9 ++;
        }
    }
    return VAR_10;
}
