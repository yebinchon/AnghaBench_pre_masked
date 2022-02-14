
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int address; } ;
struct TYPE_6__ {int pin_code; int pin_code_len; int accept; TYPE_1__ bda; } ;
struct TYPE_7__ {TYPE_2__ pin_reply; } ;
typedef TYPE_3__ btc_gap_bt_args_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(btc_gap_bt_args_t *VAR_0){
    FUNC_0(VAR_0->pin_reply.bda.address, VAR_0->pin_reply.accept, VAR_0->pin_reply.pin_code_len, VAR_0->pin_reply.pin_code);
}
