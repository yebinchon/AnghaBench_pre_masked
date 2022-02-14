
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint32_t ;
struct TYPE_18__ {int os_func_data; TYPE_5__* os_func; } ;
typedef TYPE_6__ esp_flash_t ;
struct TYPE_19__ {int cs_io_num; size_t host_id; size_t cs_id; } ;
typedef TYPE_7__ esp_flash_spi_device_config_t ;
struct TYPE_20__ {int spics_in; int* spics_out; } ;
struct TYPE_17__ {int (* end ) (int ) ;int (* start ) (int ) ;} ;
struct TYPE_16__ {scalar_t__ pad_driver; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_14__ {int oen_inv_sel; scalar_t__ oen_sel; } ;
struct TYPE_13__ {scalar_t__ sig_in_sel; } ;
struct TYPE_12__ {int enable_w1ts; TYPE_4__* pin; TYPE_3__ enable1_w1ts; TYPE_2__* func_out_sel_cfg; TYPE_1__* func_in_sel_cfg; } ;


 TYPE_11__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 TYPE_8__* VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(esp_flash_t *VAR_4, const esp_flash_spi_device_config_t *VAR_5, bool VAR_6)
{



    int VAR_7 = VAR_5->cs_io_num;
    int VAR_8 = VAR_3[VAR_5->host_id].spics_in;
    int VAR_9 = VAR_3[VAR_5->host_id].spics_out[VAR_5->cs_id];
    uint32_t VAR_10 = VAR_1[VAR_7];



    VAR_4->os_func->start(VAR_4->os_func_data);
    if (VAR_6) {
        VAR_0.func_in_sel_cfg[VAR_8].sig_in_sel = 0;
        FUNC_1(VAR_10);
        VAR_0.func_out_sel_cfg[VAR_9].oen_sel = 0;
        VAR_0.func_out_sel_cfg[VAR_9].oen_inv_sel = 0;
        FUNC_0(VAR_10, 1);
    } else {
        FUNC_1(VAR_10);
        if (VAR_7 < 32) {
            VAR_0.enable_w1ts = (0x1 << VAR_7);
        } else {
            VAR_0.enable1_w1ts.data = (0x1 << (VAR_7 - 32));
        }
        VAR_0.pin[VAR_7].pad_driver = 0;
        FUNC_3(VAR_7, VAR_9, 0, 0);
        if (VAR_5->cs_id == 0) {
            FUNC_2(VAR_7, VAR_8, 0);
        }
        FUNC_0(VAR_10, VAR_2);
    }
    VAR_4->os_func->end(VAR_4->os_func_data);
}
