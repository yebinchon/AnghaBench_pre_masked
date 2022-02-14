
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_host {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct orc_host*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_0, void *VAR_1)
{
 struct Scsi_Host *VAR_2 = (struct Scsi_Host *)VAR_1;
 struct orc_host *VAR_3 = (struct orc_host *)VAR_2->hostdata;
 unsigned long VAR_4;
 irqreturn_t VAR_5;

 FUNC_1(VAR_2->host_lock, VAR_4);
 VAR_5 = FUNC_0(VAR_3);
 FUNC_2(VAR_2->host_lock, VAR_4);

 return VAR_5;
}
