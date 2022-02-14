
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int offset; } ;
struct TYPE_4__ {int flags; scalar_t__ type; scalar_t__ subtype; TYPE_2__ pos; } ;
typedef TYPE_1__ esp_partition_info_t ;
typedef int esp_image_metadata_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static esp_err_t FUNC_4(int VAR_7, const esp_partition_info_t *VAR_8)
{
    esp_err_t VAR_9;
    bool VAR_10 = (VAR_8->flags & VAR_2);

    if (VAR_8->type == VAR_4) {

      esp_image_metadata_t VAR_11;
      VAR_9 = FUNC_3(VAR_0,
                           &VAR_8->pos,
                           &VAR_11);
      VAR_10 = (VAR_9 == VAR_1);
    } else if (VAR_8->type == VAR_5 && VAR_8->subtype == VAR_3) {

        VAR_10 = 1;
    }

    if (!VAR_10) {
        return VAR_1;
    }
    else {

        FUNC_1(VAR_6, "Encrypting partition %d at offset 0x%x (length 0x%x)...", VAR_7, VAR_8->pos.offset, VAR_8->pos.size);

        VAR_9 = FUNC_2(VAR_8->pos.offset, VAR_8->pos.size);
        FUNC_1(VAR_6, "Done encrypting");
        if (VAR_9 != VAR_1) {
            FUNC_0(VAR_6, "Failed to encrypt partition %d", VAR_7);
        }
        return VAR_9;
    }
}
