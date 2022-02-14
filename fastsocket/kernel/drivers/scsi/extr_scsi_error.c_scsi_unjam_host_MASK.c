
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_lock; scalar_t__ last_reset; scalar_t__ eh_deadline; int eh_cmd_q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct Scsi_Host*,int *) ;
 int FUNC_7 (struct Scsi_Host*,int *,int *) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct Scsi_Host *VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(VAR_1);
 FUNC_0(VAR_0);

 FUNC_8(VAR_2->host_lock, VAR_3);
 FUNC_2(&VAR_2->eh_cmd_q, &VAR_1);
 FUNC_9(VAR_2->host_lock, VAR_3);

 FUNC_1(1, FUNC_6(VAR_2, &VAR_1));

 if (!FUNC_5(&VAR_1, &VAR_0))
  if (!FUNC_3(&VAR_1, &VAR_0))
   FUNC_7(VAR_2, &VAR_1, &VAR_0);

 FUNC_8(VAR_2->host_lock, VAR_3);
 if (VAR_2->eh_deadline)
  VAR_2->last_reset = 0;
 FUNC_9(VAR_2->host_lock, VAR_3);
 FUNC_4(&VAR_0);
}
