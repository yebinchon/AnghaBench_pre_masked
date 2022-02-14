
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tGATT_STATUS ;
struct TYPE_10__ {TYPE_1__* p_db; } ;
typedef TYPE_2__ tGATT_SR_REG ;
struct TYPE_11__ {int uuid; } ;
typedef TYPE_3__ tGATT_ATTR32 ;
struct TYPE_12__ {scalar_t__ handle; scalar_t__ uuid_type; scalar_t__ uuid; scalar_t__ p_next; } ;
typedef TYPE_4__ tGATT_ATTR16 ;
struct TYPE_13__ {int uuid; } ;
typedef TYPE_5__ tGATT_ATTR128 ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_14__ {int len; int offset; } ;
struct TYPE_9__ {scalar_t__ p_attr_list; } ;
typedef TYPE_6__ BT_HDR ;


 int FUNC_0 (int*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int*,scalar_t__) ;
 int FUNC_3 (int*,int ) ;

__attribute__((used)) static tGATT_STATUS FUNC_4(tGATT_SR_REG *VAR_10, BT_HDR *VAR_11, UINT16 *VAR_12,
        UINT16 VAR_13, UINT16 VAR_14)
{
    tGATT_STATUS VAR_15 = VAR_5;
    UINT8 *VAR_16;
    UINT16 VAR_17 = *VAR_12;
    tGATT_ATTR16 *VAR_18 = ((void*)0);
    UINT8 VAR_19[2] = {4, 18};

    if (!VAR_10->p_db || !VAR_10->p_db->p_attr_list) {
        return VAR_15;
    }


    VAR_18 = (tGATT_ATTR16 *) VAR_10->p_db->p_attr_list;

    VAR_16 = (UINT8 *)(VAR_11 + 1) + VAR_8 + VAR_11->len;

    while (VAR_18) {
        if (VAR_18->handle > VAR_14) {
            break;
        }

        if (VAR_18->handle >= VAR_13) {
            if (VAR_11->offset == 0) {
                VAR_11->offset = (VAR_18->uuid_type == VAR_1) ? VAR_4 : VAR_3;
            }

            if (VAR_17 >= VAR_19[VAR_11->offset - 1]) {
                if (VAR_11->offset == VAR_4 && VAR_18->uuid_type == VAR_1) {
                    FUNC_2(VAR_16, VAR_18->handle);
                    FUNC_2(VAR_16, VAR_18->uuid);
                } else if (VAR_11->offset == VAR_3 && VAR_18->uuid_type == VAR_0 ) {
                    FUNC_2(VAR_16, VAR_18->handle);
                    FUNC_0 (VAR_16, ((tGATT_ATTR128 *) VAR_18)->uuid, VAR_9);
                } else if (VAR_11->offset == VAR_3 && VAR_18->uuid_type == VAR_2) {
                    FUNC_2(VAR_16, VAR_18->handle);
                    FUNC_3(VAR_16, ((tGATT_ATTR32 *) VAR_18)->uuid);
                    VAR_16 += VAR_9;
                } else {
                    FUNC_1("format mismatch");
                    VAR_15 = VAR_6;
                    break;

                }
                VAR_11->len += VAR_19[VAR_11->offset - 1];
                VAR_17 -= VAR_19[VAR_11->offset - 1];
                VAR_15 = VAR_7;

            } else {
                VAR_15 = VAR_6;
                break;
            }
        }
        VAR_18 = (tGATT_ATTR16 *)VAR_18->p_next;
    }

    *VAR_12 = VAR_17;
    return VAR_15;
}
