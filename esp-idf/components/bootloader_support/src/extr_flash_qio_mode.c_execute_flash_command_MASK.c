
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct TYPE_15__ {void* val; } ;
struct TYPE_14__ {int usr; } ;
struct TYPE_13__ {scalar_t__ usr_dummy_cyclelen; } ;
struct TYPE_12__ {int usr_dummy; int usr_command; int usr_miso; int usr_mosi; scalar_t__ usr_addr; } ;
struct TYPE_11__ {scalar_t__ usr_mosi_bit_len; scalar_t__ usr_mosi_dbitlen; } ;
struct TYPE_10__ {scalar_t__ usr_miso_bit_len; scalar_t__ usr_miso_dbitlen; } ;
struct TYPE_9__ {int usr_command_bitlen; scalar_t__ usr_command_value; } ;
struct TYPE_16__ {void** data_buf; TYPE_7__ ctrl; TYPE_6__ cmd; TYPE_5__ user1; TYPE_4__ user; TYPE_3__ mosi_dlen; TYPE_2__ miso_dlen; TYPE_1__ user2; } ;


 TYPE_8__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(uint8_t VAR_4, uint32_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
    uint32_t VAR_8 = VAR_0.ctrl.val;





    VAR_0.user.usr_dummy = 0;
    VAR_0.user.usr_addr = 0;
    VAR_0.user.usr_command = 1;
    VAR_0.user2.usr_command_bitlen = 7;

    VAR_0.user2.usr_command_value = VAR_4;
    VAR_0.user.usr_miso = VAR_7 > 0;





    VAR_0.user.usr_mosi = VAR_6 > 0;





    VAR_0.data_buf[0] = VAR_5;

    if (VAR_3[1]) {

        if (VAR_7 > 0) {
            VAR_0.user.usr_dummy = 1;
            VAR_0.user1.usr_dummy_cyclelen = VAR_3[1] - 1;
        } else {
            VAR_0.user.usr_dummy = 0;
            VAR_0.user1.usr_dummy_cyclelen = 0;
        }
    }

    VAR_0.cmd.usr = 1;
    while (VAR_0.cmd.usr != 0) {
    }

    VAR_0.ctrl.val = VAR_8;
    return VAR_0.data_buf[0];
}
