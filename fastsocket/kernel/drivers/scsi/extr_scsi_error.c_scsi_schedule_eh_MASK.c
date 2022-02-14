
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_lock; int host_eh_scheduled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ FUNC_1 (struct Scsi_Host*,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

void FUNC_4(struct Scsi_Host *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(VAR_2->host_lock, VAR_3);

 if (FUNC_1(VAR_2, VAR_1) == 0 ||
     FUNC_1(VAR_2, VAR_0) == 0) {
  VAR_2->host_eh_scheduled++;
  FUNC_0(VAR_2);
 }

 FUNC_3(VAR_2->host_lock, VAR_3);
}
