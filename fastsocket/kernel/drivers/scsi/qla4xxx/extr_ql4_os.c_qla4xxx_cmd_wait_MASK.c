
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {TYPE_1__* host; int hardware_lock; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_2__ {scalar_t__ can_queue; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,char*,unsigned long) ;
 struct scsi_cmnd* FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct scsi_qla_host *VAR_6)
{
 uint32_t VAR_7 = 0;
 unsigned long VAR_8;
 struct scsi_cmnd *VAR_9;

 unsigned long VAR_10 = VAR_5 + (VAR_4 * VAR_0);

 FUNC_1(FUNC_3(VAR_1, VAR_6, "Wait up to %d seconds for cmds to "
     "complete\n", VAR_4));

 while (!FUNC_7(VAR_5, VAR_10)) {
  FUNC_5(&VAR_6->hardware_lock, VAR_8);

  for (VAR_7 = 0; VAR_7 < VAR_6->host->can_queue; VAR_7++) {
   VAR_9 = FUNC_4(VAR_6->host, VAR_7);






   if (VAR_9 != ((void*)0) && FUNC_0(VAR_9))
    break;
  }
  FUNC_6(&VAR_6->hardware_lock, VAR_8);


  if (VAR_7 == VAR_6->host->can_queue)
   return VAR_3;

  FUNC_2(1000);
 }


 return VAR_2;
}
