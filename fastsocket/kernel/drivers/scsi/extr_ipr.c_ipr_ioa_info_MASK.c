
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {int type; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static const char * FUNC_3(struct Scsi_Host *VAR_0)
{
 static char VAR_1[512];
 struct ipr_ioa_cfg *VAR_2;
 unsigned long VAR_3 = 0;

 VAR_2 = (struct ipr_ioa_cfg *) VAR_0->hostdata;

 FUNC_0(VAR_0->host_lock, VAR_3);
 FUNC_2(VAR_1, "IBM %X Storage Adapter", VAR_2->type);
 FUNC_1(VAR_0->host_lock, VAR_3);

 return VAR_1;
}
