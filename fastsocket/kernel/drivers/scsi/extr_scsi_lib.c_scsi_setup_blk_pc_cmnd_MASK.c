
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cmnd {int transfersize; int allowed; int sc_data_direction; int cmd_len; int sdb; } ;
struct request {int retries; int cmd_len; int * buffer; int nr_phys_segments; scalar_t__ bio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (struct request*) ;
 struct scsi_cmnd* FUNC_4 (struct scsi_device*,struct request*) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;
 int FUNC_6 (struct scsi_device*,struct request*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct scsi_device *VAR_7, struct request *VAR_8)
{
 struct scsi_cmnd *VAR_9;
 int VAR_10 = FUNC_6(VAR_7, VAR_8);

 if (VAR_10 != VAR_1)
  return VAR_10;

 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (FUNC_7(!VAR_9))
  return VAR_0;







 if (VAR_8->bio) {
  int VAR_11;

  FUNC_0(!VAR_8->nr_phys_segments);

  VAR_11 = FUNC_5(VAR_9, VAR_5);
  if (FUNC_7(VAR_11))
   return VAR_11;
 } else {
  FUNC_0(FUNC_1(VAR_8));

  FUNC_2(&VAR_9->sdb, 0, sizeof(VAR_9->sdb));
  VAR_8->buffer = ((void*)0);
 }

 VAR_9->cmd_len = VAR_8->cmd_len;
 if (!FUNC_1(VAR_8))
  VAR_9->sc_data_direction = VAR_3;
 else if (FUNC_3(VAR_8) == VAR_6)
  VAR_9->sc_data_direction = VAR_4;
 else
  VAR_9->sc_data_direction = VAR_2;

 VAR_9->transfersize = FUNC_1(VAR_8);
 VAR_9->allowed = VAR_8->retries;
 return VAR_1;
}
