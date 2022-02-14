
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ host_busy; scalar_t__ host_failed; int ehandler; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct Scsi_Host *VAR_0)
{
 if (VAR_0->host_busy == VAR_0->host_failed) {
  FUNC_2(VAR_0);
  FUNC_3(VAR_0->ehandler);
  FUNC_0(5,
    FUNC_1("Waking error handler thread\n"));
 }
}
