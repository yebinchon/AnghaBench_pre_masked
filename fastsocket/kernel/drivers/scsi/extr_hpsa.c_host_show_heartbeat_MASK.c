
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int lock; TYPE_1__* cfgtable; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int HeartBeat; } ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 struct ctlr_info* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct ctlr_info *VAR_3;
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5;
 unsigned long VAR_6;

 VAR_3 = FUNC_2(VAR_4);
 FUNC_4(&VAR_3->lock, VAR_6);
 VAR_5 = FUNC_1(&VAR_3->cfgtable->HeartBeat);
 FUNC_5(&VAR_3->lock, VAR_6);
 return FUNC_3(VAR_2, 20, "0x%08x\n", VAR_5);
}
