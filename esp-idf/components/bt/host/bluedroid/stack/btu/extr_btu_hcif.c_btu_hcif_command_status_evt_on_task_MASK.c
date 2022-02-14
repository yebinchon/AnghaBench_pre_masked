
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* command; int context; int status; } ;
typedef TYPE_1__ command_status_hack_t ;
typedef int command_opcode_t ;
struct TYPE_6__ {int offset; int * data; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(BT_HDR *VAR_0)
{
    command_status_hack_t *VAR_1 = (command_status_hack_t *)&VAR_0->data[0];

    command_opcode_t VAR_2;
    uint8_t *VAR_3 = VAR_1->command->data + VAR_1->command->offset;
    FUNC_0(VAR_2, VAR_3);

    FUNC_1(
        VAR_2,
        VAR_1->status,
        VAR_3,
        VAR_1->context);

    FUNC_2(VAR_1->command);
    FUNC_2(VAR_0);
}
