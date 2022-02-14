
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {scalar_t__ timer_active; int timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct scsi_qla_host *VAR_0)
{
 FUNC_0(&VAR_0->timer);
 VAR_0->timer_active = 0;
}
