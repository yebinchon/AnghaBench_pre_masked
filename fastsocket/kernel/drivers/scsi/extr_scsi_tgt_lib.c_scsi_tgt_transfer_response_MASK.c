
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int request; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {int (* transfer_response ) (struct scsi_cmnd*,int ) ;} ;


 int VAR_0 ;


 int FUNC_0 (char*,struct scsi_cmnd*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_0("cmd %p %u\n", VAR_2, FUNC_1(VAR_2->request));

 VAR_4 = VAR_3->hostt->transfer_response(VAR_2, VAR_1);
 switch (VAR_4) {
 case 128:
 case 129:
  return -VAR_0;
 }
 return 0;
}
