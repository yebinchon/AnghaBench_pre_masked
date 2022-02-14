
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priority_group {scalar_t__ bypassed; struct multipath* m; } ;
struct pgpath {struct priority_group* pg; } ;
struct multipath {unsigned int pg_init_delay_retry; int lock; int pg_init_wait; int process_queued_ios; scalar_t__ queue_io; int pg_init_required; scalar_t__ pg_init_in_progress; int * current_pg; struct pgpath* current_pgpath; int hw_handler_name; } ;


 int FUNC_0 (char*,int,...) ;






 int FUNC_1 (struct multipath*,struct priority_group*,int) ;
 int FUNC_2 (struct pgpath*) ;
 int VAR_0 ;
 int FUNC_3 (struct multipath*,struct pgpath*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_1, int VAR_2)
{
 struct pgpath *VAR_3 = VAR_1;
 struct priority_group *VAR_4 = VAR_3->pg;
 struct multipath *VAR_5 = VAR_4->m;
 unsigned long VAR_6;
 unsigned VAR_7 = 0;


 switch (VAR_2) {
 case 130:
  break;
 case 131:
  if (!VAR_5->hw_handler_name) {
   VAR_2 = 0;
   break;
  }
  FUNC_0("Could not failover the device: Handler scsi_dh_%s "
        "Error %d.", VAR_5->hw_handler_name, VAR_2);



  FUNC_2(VAR_3);
  break;
 case 133:




  FUNC_1(VAR_5, VAR_4, 1);
  break;
 case 128:

  VAR_7 = 1;
 case 132:
 case 129:
  if (FUNC_3(VAR_5, VAR_3))
   FUNC_2(VAR_3);
  VAR_2 = 0;
  break;
 default:





  FUNC_2(VAR_3);
 }

 FUNC_5(&VAR_5->lock, VAR_6);
 if (VAR_2) {
  if (VAR_3 == VAR_5->current_pgpath) {
   FUNC_0("Could not failover device. Error %d.", VAR_2);
   VAR_5->current_pgpath = ((void*)0);
   VAR_5->current_pg = ((void*)0);
  }
 } else if (!VAR_5->pg_init_required)
  VAR_4->bypassed = 0;

 if (--VAR_5->pg_init_in_progress)

  goto out;

 if (!VAR_5->pg_init_required)
  VAR_5->queue_io = 0;

 VAR_5->pg_init_delay_retry = VAR_7;
 FUNC_4(VAR_0, &VAR_5->process_queued_ios);




 FUNC_7(&VAR_5->pg_init_wait);

out:
 FUNC_6(&VAR_5->lock, VAR_6);
}
