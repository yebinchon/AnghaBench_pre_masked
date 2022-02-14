
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* command; int * complete_future; int opcode; } ;
typedef TYPE_1__ waiting_command_t ;
typedef int uint8_t ;
typedef int future_t ;
struct TYPE_9__ {int command_queue; } ;
struct TYPE_8__ {int offset; int event; int * data; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int * FUNC_3 () ;
 TYPE_5__ VAR_3 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static future_t *FUNC_6(BT_HDR *VAR_4)
{
    waiting_command_t *VAR_5 = FUNC_5(sizeof(waiting_command_t));
    FUNC_1(VAR_5 != ((void*)0));

    future_t *VAR_6 = FUNC_3();

    uint8_t *VAR_7 = VAR_4->data + VAR_4->offset;
    FUNC_0(VAR_5->opcode, VAR_7);
    VAR_5->complete_future = VAR_6;
    VAR_5->command = VAR_4;



    VAR_4->event = VAR_1;

    FUNC_2(VAR_3.command_queue, VAR_5, VAR_0);
    FUNC_4(VAR_2);
    return VAR_6;
}
