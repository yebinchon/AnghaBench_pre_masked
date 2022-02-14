
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int otadata ;
typedef int esp_partition_pos_t ;
struct TYPE_10__ {int ota_seq; int crc; int ota_state; } ;
typedef TYPE_2__ esp_ota_select_entry_t ;
struct TYPE_9__ {scalar_t__ offset; } ;
struct TYPE_11__ {int * ota; TYPE_1__ ota_info; } ;
typedef TYPE_3__ bootloader_state_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__ const*,int) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(const bootloader_state_t *VAR_5, int VAR_6)
{
    if (VAR_6 > VAR_1 && VAR_4 == 1) {
        esp_ota_select_entry_t VAR_7;
        FUNC_5(&VAR_7, 0xFF, sizeof(VAR_7));
        VAR_7.ota_seq = VAR_6 + 1;
        VAR_7.ota_state = VAR_0;
        VAR_7.crc = FUNC_1(&VAR_7);

        bool VAR_8 = FUNC_3();
        FUNC_7(&VAR_7, VAR_5->ota_info.offset + VAR_2 * 0, VAR_8);
        FUNC_0(VAR_3, "Set actual ota_seq=%d in otadata[0]", VAR_7.ota_seq);



    }




}
