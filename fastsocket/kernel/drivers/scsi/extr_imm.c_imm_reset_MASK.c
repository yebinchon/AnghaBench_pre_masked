
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ phase; } ;
struct scsi_cmnd {TYPE_2__ SCp; TYPE_1__* device; } ;
struct TYPE_9__ {int base; int * cur_cmd; } ;
typedef TYPE_3__ imm_struct ;
struct TYPE_7__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_2)
{
 imm_struct *VAR_3 = FUNC_1(VAR_2->device->host);

 if (VAR_2->SCp.phase)
  FUNC_2(VAR_3);
 VAR_3->cur_cmd = ((void*)0);

 FUNC_0(VAR_3, VAR_0);
 FUNC_3(VAR_3->base);
 FUNC_4(1);
 FUNC_2(VAR_3);
 FUNC_4(1);
 return VAR_1;
}
