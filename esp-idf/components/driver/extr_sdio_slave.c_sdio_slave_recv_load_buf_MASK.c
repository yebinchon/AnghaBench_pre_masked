
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ sdio_slave_buf_handle_t ;
typedef int esp_err_t ;
typedef int buf_stailq_t ;
struct TYPE_10__ {int owner; scalar_t__ not_receiving; } ;
typedef TYPE_2__ buf_desc_t ;
struct TYPE_9__ {int start; int restart; scalar_t__ addr; } ;
struct TYPE_12__ {TYPE_1__ slc0_tx_link; } ;
struct TYPE_11__ {TYPE_2__* recv_cur_ret; int recv_reg_list; int recv_link_list; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_2 (int * const,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int * const,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_5 ;
 int FUNC_8 () ;
 int VAR_6 ;

esp_err_t FUNC_9(sdio_slave_buf_handle_t VAR_7)
{
    buf_desc_t *VAR_8 = (buf_desc_t*)VAR_7;
    FUNC_0(VAR_8);

    buf_stailq_t *const VAR_9 = &VAR_4.recv_link_list;

    FUNC_6();
    FUNC_5(VAR_8->not_receiving);
    FUNC_4(&VAR_4.recv_reg_list, VAR_8, VAR_6);
    VAR_8->owner = 1;
    VAR_8->not_receiving = 0;

    buf_desc_t *const VAR_10 = FUNC_3(VAR_9, VAR_3, VAR_5);

    FUNC_2(VAR_9, VAR_8, VAR_5);
    if (VAR_4.recv_cur_ret == ((void*)0)) {
        VAR_4.recv_cur_ret = VAR_8;
    }

    if (VAR_10 == ((void*)0)) {

        VAR_1.slc0_tx_link.addr = (uint32_t)VAR_8;
        VAR_1.slc0_tx_link.start = 1;
        FUNC_1(VAR_2, "recv_load_buf: start new");
    } else {

        VAR_1.slc0_tx_link.restart = 1;
        FUNC_1(VAR_2, "recv_load_buf: restart");
    }
    FUNC_7();
    FUNC_8();

    return VAR_0;
}
