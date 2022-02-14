
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ sdio_slave_buf_handle_t ;
typedef scalar_t__ portBASE_TYPE ;
typedef int esp_err_t ;
typedef int buf_stailq_t ;
struct TYPE_5__ {scalar_t__ owner; size_t length; int * buf; } ;
typedef TYPE_1__ buf_desc_t ;
typedef int TickType_t ;
struct TYPE_6__ {int recv_reg_list; int recv_link_list; int recv_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 TYPE_1__* FUNC_1 (int * const) ;
 int FUNC_2 (int * const,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ) ;

esp_err_t FUNC_8(sdio_slave_buf_handle_t* VAR_7, uint8_t **VAR_8, size_t *VAR_9, TickType_t VAR_10)
{
    FUNC_0(VAR_7 != ((void*)0), "handle address cannot be 0", VAR_0);
    portBASE_TYPE VAR_11 = FUNC_7(VAR_3.recv_event, VAR_10);
    if (VAR_11 == VAR_4) return VAR_1;

    buf_stailq_t *const VAR_12 = &VAR_3.recv_link_list;

    FUNC_5();

    buf_desc_t *VAR_13 = FUNC_1(VAR_12);
    FUNC_2(VAR_12, VAR_5);
    FUNC_3(&VAR_3.recv_reg_list, VAR_13, VAR_6);
    FUNC_6();

    FUNC_4(VAR_13 != ((void*)0) && VAR_13->owner == 0);
    *VAR_7 = (sdio_slave_buf_handle_t)VAR_13;
    if (VAR_8) *VAR_8 = VAR_13->buf;
    if (VAR_9) *VAR_9 = VAR_13->length;
    return VAR_2;
}
