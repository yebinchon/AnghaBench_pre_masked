
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ phase; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct TYPE_5__ {struct scsi_cmnd** srb; } ;
typedef TYPE_2__ TW_Device_Extension ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(TW_Device_Extension *VAR_1, int VAR_2)
{
 struct scsi_cmnd *VAR_3 = VAR_1->srb[VAR_2];

 if (VAR_3->SCp.phase == VAR_0)
  FUNC_0(VAR_3);
}
