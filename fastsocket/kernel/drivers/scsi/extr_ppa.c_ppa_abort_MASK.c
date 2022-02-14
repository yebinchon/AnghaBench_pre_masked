
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int phase; } ;
struct scsi_cmnd {TYPE_2__ SCp; TYPE_1__* device; } ;
struct TYPE_7__ {int * cur_cmd; } ;
typedef TYPE_3__ ppa_struct ;
struct TYPE_5__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_2)
{
 ppa_struct *VAR_3 = FUNC_0(VAR_2->device->host);





 switch (VAR_2->SCp.phase) {
 case 0:
 case 1:
  VAR_3->cur_cmd = ((void*)0);
  return VAR_1;
  break;
 default:
  return VAR_0;
  break;
 }
}
