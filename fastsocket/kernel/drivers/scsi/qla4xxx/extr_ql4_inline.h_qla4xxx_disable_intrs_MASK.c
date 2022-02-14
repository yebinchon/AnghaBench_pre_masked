
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int hardware_lock; } ;


 int FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_3(struct scsi_qla_host *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->hardware_lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->hardware_lock, VAR_1);
}
