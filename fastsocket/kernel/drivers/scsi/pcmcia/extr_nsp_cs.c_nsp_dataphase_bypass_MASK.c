
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ have_data_in; int phase; } ;
struct scsi_cmnd {TYPE_3__ SCp; TYPE_2__* device; } ;
struct TYPE_9__ {unsigned int FifoCount; } ;
typedef TYPE_4__ nsp_hw_data ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_4)
{
 nsp_hw_data *VAR_5 = (nsp_hw_data *)VAR_4->device->host->hostdata;
 unsigned int VAR_6;



 if (VAR_4->SCp.have_data_in != VAR_1) {
  return 0;
 }

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_5->FifoCount == VAR_6) {

  return 0;
 }





 FUNC_0(VAR_2, "use bypass quirk");
 VAR_4->SCp.phase = VAR_3;
 FUNC_2(VAR_4);
 FUNC_3(VAR_5, VAR_0);

 return 0;
}
