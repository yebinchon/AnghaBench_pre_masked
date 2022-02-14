
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; scalar_t__ subtype; int size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_10__ {int secure_version; } ;
typedef TYPE_2__ esp_app_desc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int ,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*,int ) ;

esp_err_t FUNC_7(const esp_partition_t *VAR_11)
{
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_6(VAR_11, VAR_4) != VAR_5) {
        return VAR_3;
    }


    if (VAR_11->type == VAR_8) {
        if (VAR_11->subtype == VAR_6) {
            const esp_partition_t *VAR_12 = FUNC_4(VAR_9, VAR_7, ((void*)0));
            if (VAR_12 != ((void*)0)) {
                return FUNC_3(VAR_12, 0, VAR_12->size);
            } else {
                return VAR_1;
            }
        } else {
            return FUNC_5(VAR_11->subtype);
        }
    } else {
        return VAR_0;
    }
}
