
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {scalar_t__ host_failed; scalar_t__ host_eh_scheduled; scalar_t__ host_busy; int * ehandler; int host_no; TYPE_1__* transportt; } ;
struct TYPE_2__ {int (* eh_strategy_handler ) (struct Scsi_Host*) ;} ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct Scsi_Host*) ;

int FUNC_9(void *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2;







 while (!FUNC_2()) {
  FUNC_7(VAR_0);
  if ((VAR_3->host_failed == 0 && VAR_3->host_eh_scheduled == 0) ||
      VAR_3->host_failed != VAR_3->host_busy) {
   FUNC_0(1,
    FUNC_3("scsi_eh_%d: sleeping\n",
     VAR_3->host_no));
   FUNC_4();
   continue;
  }

  FUNC_1(VAR_1);
  FUNC_0(1,
   FUNC_3("scsi_eh_%d: waking up %d/%d/%d\n",
          VAR_3->host_no, VAR_3->host_eh_scheduled,
          VAR_3->host_failed, VAR_3->host_busy));






  if (VAR_3->transportt->eh_strategy_handler)
   VAR_3->transportt->eh_strategy_handler(VAR_3);
  else
   FUNC_6(VAR_3);
  FUNC_5(VAR_3);
 }
 FUNC_1(VAR_1);

 FUNC_0(1,
  FUNC_3("Error handler scsi_eh_%d exiting\n", VAR_3->host_no));
 VAR_3->ehandler = ((void*)0);
 return 0;
}
