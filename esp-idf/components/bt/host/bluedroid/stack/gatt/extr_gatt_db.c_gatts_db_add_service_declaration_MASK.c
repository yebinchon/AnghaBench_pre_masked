
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tGATT_SVC_DB ;
struct TYPE_15__ {TYPE_4__* p_value; } ;
typedef TYPE_6__ tGATT_ATTR16 ;
struct TYPE_14__ {int uuid128; int uuid32; int uuid16; } ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_16__ {scalar_t__ member_0; scalar_t__ len; TYPE_5__ uu; TYPE_1__ member_1; } ;
typedef TYPE_7__ tBT_UUID ;
struct TYPE_11__ {int uuid128; int uuid16; } ;
struct TYPE_12__ {TYPE_2__ uu; void* len; } ;
struct TYPE_13__ {TYPE_3__ uuid; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int *,TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (int *,void**,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,void*) ;

__attribute__((used)) static BOOLEAN FUNC_5(tGATT_SVC_DB *VAR_8, tBT_UUID *VAR_9, BOOLEAN VAR_10)
{
    tGATT_ATTR16 *VAR_11;
    tBT_UUID VAR_12 = {VAR_5, 0};
    BOOLEAN VAR_13 = VAR_0;

    FUNC_0( "add_service_declaration");

    if (VAR_10) {
        VAR_12.uu.uuid16 = VAR_2;
    } else {
        VAR_12.uu.uuid16 = VAR_3;
    }


    if ((VAR_11 = (tGATT_ATTR16 *)(FUNC_1(VAR_8, &VAR_12, VAR_1))) != ((void*)0)) {
        if (FUNC_2 (VAR_8, (void **)&VAR_11->p_value, sizeof(tBT_UUID))) {
            if (VAR_9->len == VAR_5) {
                VAR_11->p_value->uuid.len = VAR_5;
                VAR_11->p_value->uuid.uu.uuid16 = VAR_9->uu.uuid16;
            } else if (VAR_9->len == VAR_6) {
                VAR_11->p_value->uuid.len = VAR_4;
                FUNC_3(VAR_11->p_value->uuid.uu.uuid128, VAR_9->uu.uuid32);
            } else {
                VAR_11->p_value->uuid.len = VAR_4;
                FUNC_4(VAR_11->p_value->uuid.uu.uuid128, VAR_9->uu.uuid128, VAR_4);
            }
            VAR_13 = VAR_7;
        }

    }
    return VAR_13;
}
