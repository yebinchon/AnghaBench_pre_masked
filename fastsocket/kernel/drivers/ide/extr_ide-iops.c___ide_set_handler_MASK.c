
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ expires; } ;
struct TYPE_5__ {TYPE_3__ timer; int req_gen; int req_gen_timer; int * handler; } ;
typedef TYPE_1__ ide_hwif_t ;
typedef int ide_handler_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;

void FUNC_2(ide_drive_t *VAR_1, ide_handler_t *VAR_2,
         unsigned int VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_1->hwif;

 FUNC_0(VAR_4->handler);
 VAR_4->handler = VAR_2;
 VAR_4->timer.expires = VAR_0 + VAR_3;
 VAR_4->req_gen_timer = VAR_4->req_gen;
 FUNC_1(&VAR_4->timer);
}
