
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct TYPE_5__ {int timer_active; TYPE_3__ timer; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;

__inline__ void
FUNC_2(scsi_qla_host_t *VAR_2, void *VAR_3, unsigned long VAR_4)
{
 FUNC_1(&VAR_2->timer);
 VAR_2->timer.expires = VAR_1 + VAR_4 * VAR_0;
 VAR_2->timer.data = (unsigned long)VAR_2;
 VAR_2->timer.function = (void (*)(unsigned long))VAR_3;
 FUNC_0(&VAR_2->timer);
 VAR_2->timer_active = 1;
}
