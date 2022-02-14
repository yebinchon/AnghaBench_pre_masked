
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int twdt_config_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int timeout; int panic; int intr_handle; int * list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int,int ) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;

esp_err_t FUNC_14(uint32_t VAR_11, bool VAR_12)
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
        FUNC_10(&VAR_5, 0);
        FUNC_8(&VAR_5);
        FUNC_11(&VAR_5, VAR_4);

        FUNC_13(&VAR_5, 0, VAR_6);
        FUNC_12(&VAR_5, 0, VAR_9->timeout*1000*1000/VAR_4);

        FUNC_13(&VAR_5, 1, VAR_7);
        FUNC_12(&VAR_5, 1, 2*VAR_9->timeout*1000*1000/VAR_4);
        FUNC_9(&VAR_5, 1);
        FUNC_7(&VAR_5);
        FUNC_10(&VAR_5, 1);
    } else {

        VAR_9->panic = VAR_12;
        VAR_9->timeout = VAR_11;


        FUNC_10(&VAR_5, 0);
        FUNC_9(&VAR_5, 0);

        FUNC_12(&VAR_5, 0, VAR_9->timeout*1000*1000/VAR_4);

        FUNC_12(&VAR_5, 1, 2*VAR_9->timeout*1000*1000/VAR_4);
        FUNC_9(&VAR_5, 1);
        FUNC_7(&VAR_5);
        FUNC_10(&VAR_5, 1);
    }
    FUNC_6(&VAR_10);
    return VAR_1;
}
