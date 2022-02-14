
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
typedef int tBTA_IO_CAP ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {void* pin_length; struct TYPE_6__* features; struct TYPE_6__* bd_name; int dc; void* dc_known; int link_key; void* key_type; void* link_key_known; int io_cap; int is_trusted; int tm; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_ADD_DEVICE ;
typedef void* UINT8 ;
typedef int LINK_KEY ;
typedef int DEV_CLASS ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(BD_ADDR VAR_5, DEV_CLASS VAR_6, LINK_KEY VAR_7,
                     tBTA_SERVICE_MASK VAR_8, BOOLEAN VAR_9,
                     UINT8 VAR_10, tBTA_IO_CAP VAR_11, UINT8 VAR_12)
{

    tBTA_DM_API_ADD_DEVICE *VAR_13;

    if ((VAR_13 = (tBTA_DM_API_ADD_DEVICE *) FUNC_4(sizeof(tBTA_DM_API_ADD_DEVICE))) != ((void*)0)) {
        FUNC_3 (VAR_13, 0, sizeof(tBTA_DM_API_ADD_DEVICE));

        VAR_13->hdr.event = VAR_1;
        FUNC_0(VAR_13->bd_addr, VAR_5);
        VAR_13->tm = VAR_8;
        VAR_13->is_trusted = VAR_9;
        VAR_13->io_cap = VAR_11;

        if (VAR_7) {
            VAR_13->link_key_known = VAR_4;
            VAR_13->key_type = VAR_10;
            FUNC_2(VAR_13->link_key, VAR_7, VAR_3);
        }


        if (VAR_6) {
            VAR_13->dc_known = VAR_4;
            FUNC_2 (VAR_13->dc, VAR_6, VAR_2);
        }

        FUNC_3 (VAR_13->bd_name, 0, VAR_0 + 1);
        FUNC_3 (VAR_13->features, 0, sizeof (VAR_13->features));
        VAR_13->pin_length = VAR_12;

        FUNC_1(VAR_13);
    }
}
