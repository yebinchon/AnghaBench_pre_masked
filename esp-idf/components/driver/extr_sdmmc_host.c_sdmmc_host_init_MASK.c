
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sdmmc_event_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_9__ {scalar_t__ busy_clr_int_en; } ;
struct TYPE_8__ {int int_enable; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_10__ {TYPE_4__ cardthrctl; TYPE_3__ ctrl; TYPE_2__ intmask; TYPE_1__ rintsts; int hcon; int verid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 () ;
 int VAR_23 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int) ;
 int * FUNC_12 () ;

esp_err_t FUNC_13(void)
{
    if (VAR_21) {
        return VAR_0;
    }

    FUNC_4(VAR_4);
    FUNC_3(VAR_4);


    FUNC_7(2);


    FUNC_6();
    FUNC_0(VAR_19, "peripheral version %x, hardware config %08x", VAR_5.verid, VAR_5.hcon);


    VAR_5.rintsts.val = 0xffffffff;
    VAR_5.intmask.val = 0;
    VAR_5.ctrl.int_enable = 0;


    VAR_20 = FUNC_11(VAR_6, sizeof(sdmmc_event_t));
    if (!VAR_20) {
        return VAR_1;
    }
    VAR_22 = FUNC_12();
    if (!VAR_22) {
        FUNC_9(VAR_20);
        VAR_20 = ((void*)0);
        return VAR_1;
    }

    esp_err_t VAR_24 = FUNC_1(VAR_3, 0, &VAR_23, VAR_20, &VAR_21);
    if (VAR_24 != VAR_2) {
        FUNC_9(VAR_20);
        VAR_20 = ((void*)0);
        FUNC_10(VAR_22);
        VAR_22 = ((void*)0);
        return VAR_24;
    }

    VAR_5.intmask.val =
            VAR_7 |
            VAR_8 |
            VAR_9 |
            VAR_15 | VAR_10 |
            VAR_17 | VAR_11 | VAR_14 |
            VAR_18 | VAR_12 |
            VAR_16 | VAR_13;
    VAR_5.ctrl.int_enable = 1;


    VAR_5.cardthrctl.busy_clr_int_en = 0;


    FUNC_5();


    VAR_24 = FUNC_8();
    if (VAR_24 != VAR_2) {
        FUNC_9(VAR_20);
        VAR_20 = ((void*)0);
        FUNC_10(VAR_22);
        VAR_22 = ((void*)0);
        FUNC_2(VAR_21);
        VAR_21 = ((void*)0);
        return VAR_24;
    }

    return VAR_2;
}
