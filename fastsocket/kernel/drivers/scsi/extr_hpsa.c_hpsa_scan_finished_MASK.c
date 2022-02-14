
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int scan_finished; int scan_lock; } ;
struct Scsi_Host {int dummy; } ;


 struct ctlr_info* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_0,
 unsigned long VAR_1)
{
 struct ctlr_info *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->scan_lock, VAR_3);
 VAR_4 = VAR_2->scan_finished;
 FUNC_2(&VAR_2->scan_lock, VAR_3);
 return VAR_4;
}
