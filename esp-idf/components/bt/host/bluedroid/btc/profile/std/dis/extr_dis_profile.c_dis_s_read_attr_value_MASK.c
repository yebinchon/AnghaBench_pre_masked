
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_16__ {scalar_t__ len; scalar_t__* value; } ;
typedef TYPE_4__ tGATT_VALUE ;
typedef int tGATT_STATUS ;
struct TYPE_17__ {TYPE_4__ attr_value; } ;
typedef TYPE_5__ tGATTS_RSP ;
struct TYPE_13__ {scalar_t__ offset; scalar_t__ handle; int is_long; } ;
struct TYPE_18__ {TYPE_1__ read_req; } ;
typedef TYPE_6__ tGATTS_DATA ;
struct TYPE_19__ {scalar_t__ handle; int uuid; } ;
typedef TYPE_7__ tDIS_DB_ENTRY ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_14__ {int product_version; int product_id; int vendor_id; int vendor_id_src; } ;
struct TYPE_15__ {TYPE_2__ pnp_id; int system_id; scalar_t__** data_string; } ;
struct TYPE_12__ {TYPE_3__ dis_value; TYPE_7__* dis_attr; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*,int ) ;
 TYPE_11__ VAR_8 ;
 int FUNC_5 (scalar_t__,int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_6 (char*) ;

void FUNC_7 (tGATTS_DATA *VAR_9, tGATT_VALUE *VAR_10, UINT32 VAR_11, UINT16 VAR_12)
{
    tDIS_DB_ENTRY *VAR_13 = VAR_8.dis_attr;
    UINT8 *VAR_14 = VAR_10->value, VAR_15, *VAR_16;
    UINT16 VAR_17 = VAR_9->read_req.offset;
    tGATT_STATUS VAR_18 = VAR_4;
    UINT16 VAR_19 = VAR_9->read_req.handle;
    bool VAR_20 = VAR_9->read_req.is_long;

    for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15 ++, VAR_13 ++) {
        if (VAR_19 == VAR_13->handle) {
            if ((VAR_13->uuid == 131 || VAR_13->uuid == 128) &&
                    VAR_20 == VAR_7) {
                VAR_18 = VAR_5;
                break;
            }
            VAR_18 = VAR_4;

            switch (VAR_13->uuid) {
            case 133:
            case 132:
            case 130:
            case 136:
            case 135:
            case 129:
            case 134:
                VAR_16 = VAR_8.dis_value.data_string[VAR_13->uuid - 132];
                if (VAR_16 != ((void*)0)) {
                    if (FUNC_6 ((char *)VAR_16) > VAR_6) {
                        VAR_10->len = VAR_6;
                    } else {
                        VAR_10->len = (UINT16)FUNC_6 ((char *)VAR_16);
                    }
                } else {
                    VAR_10->len = 0;
                }

                if (VAR_17 > VAR_10->len) {
                    VAR_18 = VAR_3;
                    break;
                } else {
                    VAR_10->len -= VAR_17;
                    VAR_16 += VAR_17;
                    FUNC_0(VAR_14, VAR_16, VAR_10->len);
                    FUNC_1("GATT_UUID_MANU_NAME len=0x%04x", VAR_10->len);
                }
                break;


            case 128:
                FUNC_3(VAR_14, VAR_8.dis_value.system_id);
                VAR_10->len = VAR_2;
                break;

            case 131:
                FUNC_4(VAR_14, VAR_8.dis_value.pnp_id.vendor_id_src);
                FUNC_2(VAR_14, VAR_8.dis_value.pnp_id.vendor_id);
                FUNC_2(VAR_14, VAR_8.dis_value.pnp_id.product_id);
                FUNC_2(VAR_14, VAR_8.dis_value.pnp_id.product_version);
                VAR_10->len = VAR_1;
                break;

            }
            break;
        }
    }
    tGATTS_RSP VAR_21;
    VAR_21.attr_value = *VAR_10;
    FUNC_5(VAR_12, VAR_11, VAR_18, &VAR_21);

}
