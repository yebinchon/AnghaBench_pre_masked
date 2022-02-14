
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int postponed_rq; int dsc_poll_freq; } ;
typedef TYPE_3__ idetape_tape_t ;
struct TYPE_10__ {TYPE_2__* hwif; TYPE_3__* driver_data; } ;
typedef TYPE_4__ ide_drive_t ;
struct TYPE_8__ {TYPE_1__* rq; } ;
struct TYPE_7__ {int * cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_1)
{
 idetape_tape_t *VAR_2 = VAR_1->driver_data;

 FUNC_0(VAR_0, "cmd: 0x%x, dsc_poll_freq: %lu",
        VAR_1->hwif->rq->cmd[0], VAR_2->dsc_poll_freq);

 VAR_2->postponed_rq = 1;

 FUNC_1(VAR_1, VAR_2->dsc_poll_freq);
}
