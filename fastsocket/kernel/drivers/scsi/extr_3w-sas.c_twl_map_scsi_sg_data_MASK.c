
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int have_data_in; int phase; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct TYPE_5__ {int host; struct scsi_cmnd** srb; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(TW_Device_Extension *VAR_2, int VAR_3)
{
 int VAR_4;
 struct scsi_cmnd *VAR_5 = VAR_2->srb[VAR_3];

 VAR_4 = FUNC_1(VAR_5);
 if (!VAR_4)
  return 0;
 else if (VAR_4 < 0) {
  FUNC_0(VAR_2->host, VAR_0, 0x1, "Failed to map scatter gather list");
  return 0;
 }

 VAR_5->SCp.phase = VAR_1;
 VAR_5->SCp.have_data_in = VAR_4;

 return VAR_4;
}
