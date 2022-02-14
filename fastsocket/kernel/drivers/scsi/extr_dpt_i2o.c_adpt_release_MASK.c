
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int adpt_hba ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_0)
{
 adpt_hba* VAR_1 = (adpt_hba*) VAR_0->hostdata[0];

 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
 return 0;
}
