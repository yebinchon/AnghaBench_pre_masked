
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int allowed; TYPE_1__* device; scalar_t__ jiffies_at_alloc; scalar_t__ result; scalar_t__ serial_number; int eh_entry; } ;
struct request {int timeout; struct scsi_cmnd* special; } ;
struct TYPE_2__ {int ioerr_cnt; int iodone_cnt; } ;



 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int) ;
 int FUNC_6 (struct scsi_cmnd*,int ) ;
 int FUNC_7 (int ,TYPE_1__*,char*,unsigned long) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_5)
{
 struct scsi_cmnd *VAR_6 = VAR_5->special;
 unsigned long VAR_7 = (VAR_6->allowed + 1) * VAR_5->timeout;
 int VAR_8;

 FUNC_0(&VAR_6->eh_entry);




 VAR_6->serial_number = 0;

 FUNC_1(&VAR_6->device->iodone_cnt);
 if (VAR_6->result)
  FUNC_1(&VAR_6->device->ioerr_cnt);

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 != 128 &&
     FUNC_8(VAR_6->jiffies_at_alloc + VAR_7, VAR_4)) {
  FUNC_7(VAR_1, VAR_6->device,
       "timing out command, waited %lus\n",
       VAR_7/VAR_0);
  VAR_8 = 128;
 }

 FUNC_5(VAR_6, VAR_8);

 switch (VAR_8) {
  case 128:
   FUNC_4(VAR_6);
   break;
  case 129:
   FUNC_6(VAR_6, VAR_3);
   break;
  case 130:
   FUNC_6(VAR_6, VAR_2);
   break;
  default:
   if (!FUNC_3(VAR_6, 0))
    FUNC_4(VAR_6);
 }
}
