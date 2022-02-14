
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;

void FUNC_4(struct Scsi_Host *VAR_2)
{
 FAS216_Info *VAR_3 = (FAS216_Info *)VAR_2->hostdata;

 FUNC_0(VAR_3);
 FUNC_3(VAR_2);

 FUNC_1(VAR_3, VAR_1, VAR_0);
 FUNC_2(VAR_2);
}
