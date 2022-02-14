
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {void* context; TYPE_2__* command; int status; int callback; } ;
typedef TYPE_1__ command_status_hack_t ;
struct TYPE_7__ {int event; int * data; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint8_t VAR_4, BT_HDR *VAR_5, void *VAR_6)
{
    BT_HDR *VAR_7 = FUNC_1(sizeof(BT_HDR) + sizeof(command_status_hack_t));
    command_status_hack_t *VAR_8 = (command_status_hack_t *)&VAR_7->data[0];

    VAR_8->callback = VAR_3;
    VAR_8->status = VAR_4;
    VAR_8->command = VAR_5;
    VAR_8->context = VAR_6;

    VAR_7->event = VAR_0;

    FUNC_0(VAR_2, VAR_7, VAR_1);
}
