
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int card_num; int update_clk_reg; int wait_complete; } ;
typedef TYPE_3__ sdmmc_hw_cmd_t ;
struct TYPE_7__ {scalar_t__ start_command; } ;
struct TYPE_6__ {int hle; } ;
struct TYPE_9__ {TYPE_2__ cmd; TYPE_1__ rintsts; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int,TYPE_3__,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{

    sdmmc_hw_cmd_t VAR_2 = {
        .card_num = VAR_1,
        .update_clk_reg = 1,
        .wait_complete = 1
    };
    bool VAR_3 = 1;
    while(VAR_3) {
        FUNC_0(VAR_1, VAR_2, 0);
        while (1) {


            if (VAR_0.rintsts.hle) {
                VAR_0.rintsts.hle = 1;
                VAR_3 = 1;
                break;
            }


            if (VAR_0.cmd.start_command == 0) {
                VAR_3 = 0;
                break;
            }
        }
    }
}
