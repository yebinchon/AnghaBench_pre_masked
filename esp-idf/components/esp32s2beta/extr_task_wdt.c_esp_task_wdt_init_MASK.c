
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int twdt_config_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int sys_reset_length; int cpu_reset_length; int level_int_en; int en; int stg1; int stg0; } ;
struct TYPE_6__ {int clk_prescale; } ;
struct TYPE_9__ {int wdt_config2; int wdt_config3; int wdt_feed; void* wdt_wprotect; TYPE_2__ wdt_config0; TYPE_1__ wdt_config1; } ;
struct TYPE_8__ {int timeout; int panic; int intr_handle; int * list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;

esp_err_t FUNC_7(uint32_t VAR_11, bool VAR_12)
{
    FUNC_5(&VAR_10);
    if(VAR_9 == ((void*)0)){

        VAR_9 = FUNC_2(1, sizeof(twdt_config_t));
        FUNC_0((VAR_9 != ((void*)0)), VAR_0);

        VAR_9->list = ((void*)0);
        VAR_9->timeout = VAR_11;
        VAR_9->panic = VAR_12;


        FUNC_1(FUNC_3(VAR_2, 0, VAR_8, ((void*)0), &VAR_9->intr_handle));


        FUNC_4(VAR_3);
        VAR_4=VAR_7;
        VAR_4=7;
        VAR_4=7;
        VAR_4=1;
        VAR_4=VAR_5;
        VAR_4=VAR_6;
        VAR_4=80*500;
        VAR_4=VAR_9->timeout*2000;
        VAR_4=VAR_9->timeout*4000;
        VAR_4=1;
        VAR_4=1;
        VAR_4=0;

    }else{

        VAR_9->panic = VAR_12;
        VAR_9->timeout = VAR_11;


        VAR_4=VAR_7;
        VAR_4=0;
        VAR_4=VAR_9->timeout*2000;
        VAR_4=VAR_9->timeout*4000;
        VAR_4=1;
        VAR_4=1;
        VAR_4=0;
    }
    FUNC_6(&VAR_10);
    return VAR_1;
}
