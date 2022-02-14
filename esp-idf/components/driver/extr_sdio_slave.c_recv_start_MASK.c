
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int esp_err_t ;
typedef int buf_desc_t ;
struct TYPE_7__ {int tx_done; } ;
struct TYPE_6__ {int start; scalar_t__ addr; } ;
struct TYPE_5__ {int slc0_tx_rst; } ;
struct TYPE_8__ {TYPE_3__ slc0_int_ena; TYPE_2__ slc0_tx_link; TYPE_1__ conf0; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 () ;

__attribute__((used)) static esp_err_t FUNC_4(void)
{
    VAR_1.conf0.slc0_tx_rst = 1;
    VAR_1.conf0.slc0_tx_rst = 0;

    FUNC_1();
    buf_desc_t *VAR_3 = FUNC_3();
    if (!VAR_3) {
        FUNC_0(VAR_2, "recv: restart without desc");
        FUNC_2();
        return VAR_0;
    }

    VAR_1.slc0_tx_link.addr = (uint32_t)VAR_3;
    VAR_1.slc0_tx_link.start = 1;
    FUNC_2();

    VAR_1.slc0_int_ena.tx_done = 1;
    return VAR_0;
}
