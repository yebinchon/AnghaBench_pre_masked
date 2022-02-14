
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* spi_device_handle_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int spics_io_num; } ;
struct TYPE_9__ {TYPE_2__* host; int semphr_polling; int ret_queue; int trans_queue; TYPE_1__ cfg; } ;
struct TYPE_8__ {int cur_cs; int prev_cs; int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

esp_err_t FUNC_8(spi_device_handle_t VAR_4)
{
    int VAR_5;
    FUNC_0(VAR_4!=((void*)0), "invalid handle", VAR_0);


    FUNC_0(FUNC_5(VAR_4->trans_queue)==0, "Have unfinished transactions", VAR_1);
    FUNC_0(VAR_4->host->cur_cs == VAR_3 || FUNC_1(&VAR_4->host->device[VAR_4->host->cur_cs])!=VAR_4, "Have unfinished transactions", VAR_1);
    FUNC_0(FUNC_5(VAR_4->ret_queue)==0, "Have unfinished transactions", VAR_1);


    int VAR_6 = VAR_4->cfg.spics_io_num;
    if (VAR_6 >= 0) FUNC_4(VAR_6);


    FUNC_6(VAR_4->trans_queue);
    FUNC_6(VAR_4->ret_queue);
    FUNC_7(VAR_4->semphr_polling);

    for (VAR_5=0; VAR_5<VAR_3; VAR_5++) {
        if (FUNC_1(&VAR_4->host->device[VAR_5]) == VAR_4){
            FUNC_2(&VAR_4->host->device[VAR_5], ((void*)0));
            if (VAR_5 == VAR_4->host->prev_cs) VAR_4->host->prev_cs = VAR_3;
        }
    }
    FUNC_3(VAR_4);
    return VAR_2;
}
