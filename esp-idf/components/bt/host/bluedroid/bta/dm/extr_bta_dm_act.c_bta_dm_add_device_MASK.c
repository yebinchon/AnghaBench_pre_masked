
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int trusted_services_mask ;
struct TYPE_5__ {int tm; int* bd_addr; int pin_length; int io_cap; int key_type; int features; int bd_name; scalar_t__ is_trusted; scalar_t__ link_key; scalar_t__ link_key_known; scalar_t__ dc; scalar_t__ dc_known; } ;
struct TYPE_4__ {TYPE_2__ add_dev; } ;
typedef TYPE_1__ tBTA_DM_MSG ;
typedef TYPE_2__ tBTA_DM_API_ADD_DEVICE ;
typedef int UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,int ,int ,int*,int*,int ,int ,int ) ;
 int* VAR_3 ;
 int FUNC_2 (int*,int ,int) ;

void FUNC_3 (tBTA_DM_MSG *VAR_4)
{
    tBTA_DM_API_ADD_DEVICE *VAR_5 = &VAR_4->add_dev;
    UINT8 *VAR_6 = ((void*)0);
    UINT8 *VAR_7 = ((void*)0);
    UINT32 VAR_8[VAR_2];
    UINT8 VAR_9 = 0;
    UINT8 VAR_10 = 0;

    FUNC_2 (VAR_8, 0, sizeof(VAR_8));


    if (VAR_5->dc_known) {
        VAR_6 = (UINT8 *)VAR_5->dc;
    }

    if (VAR_5->link_key_known) {
        VAR_7 = (UINT8 *)VAR_5->link_key;
    }

    if (VAR_5->is_trusted) {

        while (VAR_5->tm && (VAR_9 < VAR_0)) {
            if (VAR_5->tm & (UINT32)(1 << VAR_9)) {

                VAR_10 = VAR_3[VAR_9] / VAR_1;
                VAR_8[VAR_10] |= (UINT32)(1 << (VAR_3[VAR_9] - (UINT32)(VAR_10 * 32)));

                VAR_5->tm &= (UINT32)(~(1 << VAR_9));

            }
            VAR_9++;
        }
    }

    if (!FUNC_1 (VAR_5->bd_addr, VAR_6, VAR_5->bd_name, VAR_5->features,
                           VAR_8, VAR_7, VAR_5->key_type, VAR_5->io_cap,
                           VAR_5->pin_length)) {
        FUNC_0 ("BTA_DM: Error adding device %08x%04x",
                          (VAR_5->bd_addr[0] << 24) + (VAR_5->bd_addr[1] << 16) + (VAR_5->bd_addr[2] << 8) + VAR_5->bd_addr[3],
                          (VAR_5->bd_addr[4] << 8) + VAR_5->bd_addr[5]);
    }
}
