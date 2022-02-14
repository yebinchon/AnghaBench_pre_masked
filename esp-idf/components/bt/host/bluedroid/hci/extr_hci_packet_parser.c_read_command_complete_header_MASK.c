
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ command_opcode_t ;
struct TYPE_3__ {int offset; scalar_t__* data; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint8_t *FUNC_4(
    BT_HDR *VAR_3,
    command_opcode_t VAR_4,
    size_t VAR_5)
{

    uint8_t *VAR_6 = VAR_3->data + VAR_3->offset;


    uint8_t VAR_7;
    uint8_t VAR_8;
    FUNC_2(VAR_7, VAR_6);
    FUNC_2(VAR_8, VAR_6);

    const size_t VAR_9 = 4;


    FUNC_3(VAR_7 == VAR_0);
    FUNC_3(VAR_8 >= (VAR_9 + VAR_5));


    command_opcode_t VAR_10;
    uint8_t VAR_11;
    FUNC_0(VAR_6);
    FUNC_1(VAR_10, VAR_6);


    if (VAR_4 != VAR_2) {
        FUNC_3(VAR_10 == VAR_4);
    }


    FUNC_2(VAR_11, VAR_6);

    if (VAR_11 != VAR_1) {
        return ((void*)0);
    }

    return VAR_6;
}
