
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sdio_slave_buf_handle_t ;
typedef int esp_err_t ;
typedef int buf_desc_t ;
struct TYPE_2__ {int recv_reg_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

esp_err_t FUNC_5(sdio_slave_buf_handle_t VAR_3)
{
    buf_desc_t *VAR_4 = (buf_desc_t*)VAR_3;
    FUNC_0(VAR_4);

    FUNC_2();
    FUNC_1(&VAR_1.recv_reg_list, VAR_4, VAR_2);
    FUNC_3();
    FUNC_4(VAR_4);
    return VAR_0;
}
