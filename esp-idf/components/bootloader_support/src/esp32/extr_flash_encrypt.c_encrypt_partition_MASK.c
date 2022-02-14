
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
 int FUNC_1 (int ,char*,int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static esp_err_t FUNC_4(int VAR_8, const esp_partition_info_t *VAR_9)
{
    esp_err_t VAR_10;
    bool VAR_11 = (VAR_9->flags & VAR_2);

    if (VAR_9->type == VAR_5) {

      esp_image_metadata_t VAR_12;
      VAR_10 = FUNC_3(VAR_0,
                           &VAR_9->pos,
                           &VAR_12);
      VAR_11 = (VAR_10 == VAR_1);
    } else if ((VAR_9->type == VAR_6 && VAR_9->subtype == VAR_4)
                || (VAR_9->type == VAR_6 && VAR_9->subtype == VAR_3)) {

        VAR_11 = 1;
    }

    if (!VAR_11) {
        return VAR_1;
    }
    else {

        FUNC_1(VAR_7, "Encrypting partition %d at offset 0x%x...", VAR_8, VAR_9->pos.offset);

        VAR_10 = FUNC_2(VAR_9->pos.offset, VAR_9->pos.size);
        if (VAR_10 != VAR_1) {
            FUNC_0(VAR_7, "Failed to encrypt partition %d", VAR_8);
        }
        return VAR_10;
    }
}
