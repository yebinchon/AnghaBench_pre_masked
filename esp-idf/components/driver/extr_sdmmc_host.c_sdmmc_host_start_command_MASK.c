
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int start_command; int card_num; scalar_t__ rw; scalar_t__ data_expected; } ;
typedef TYPE_3__ sdmmc_hw_cmd_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int cards; } ;
struct TYPE_7__ {int cards; } ;
struct TYPE_9__ {TYPE_3__ cmd; int cmdarg; TYPE_1__ wrtprt; TYPE_2__ cdetect; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;

esp_err_t FUNC_1(int VAR_5, sdmmc_hw_cmd_t VAR_6, uint32_t VAR_7) {
    if (!(VAR_5 == 0 || VAR_5 == 1)) {
        return VAR_0;
    }
    if ((VAR_4.cdetect.cards & FUNC_0(VAR_5)) != 0) {
        return VAR_2;
    }
    if (VAR_6.data_expected && VAR_6.rw && (VAR_4.wrtprt.cards & FUNC_0(VAR_5)) != 0) {
        return VAR_1;
    }
    while (VAR_4.cmd.start_command == 1) {
        ;
    }
    VAR_4.cmdarg = VAR_7;
    VAR_6.card_num = VAR_5;
    VAR_6.start_command = 1;
    VAR_4.cmd = VAR_6;
    return VAR_3;
}
