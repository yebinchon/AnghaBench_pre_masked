
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_state; } ;
struct request {int cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;

 int FUNC_0 (int ,struct scsi_device*,char*) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct scsi_device *VAR_6, struct request *VAR_7)
{
 int VAR_8 = VAR_2;





 if (FUNC_1(VAR_6->sdev_state != VAR_5)) {
  switch (VAR_6->sdev_state) {
  case 130:
  case 128:





   FUNC_0(VAR_3, VAR_6,
        "rejecting I/O to offline device\n");
   VAR_8 = VAR_1;
   break;
  case 131:




   FUNC_0(VAR_3, VAR_6,
        "rejecting I/O to dead device\n");
   VAR_8 = VAR_1;
   break;
  case 129:
  case 133:
  case 132:



   if (!(VAR_7->cmd_flags & VAR_4))
    VAR_8 = VAR_0;
   break;
  default:





   if (!(VAR_7->cmd_flags & VAR_4))
    VAR_8 = VAR_1;
   break;
  }
 }
 return VAR_8;
}
