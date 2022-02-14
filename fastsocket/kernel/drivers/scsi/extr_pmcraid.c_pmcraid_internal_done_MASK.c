
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmcraid_cmd {scalar_t__ release; int wait_for_completion; scalar_t__ completion_req; TYPE_3__* ioa_cb; } ;
struct TYPE_5__ {int ioasc; } ;
struct TYPE_4__ {int * cdb; } ;
struct TYPE_6__ {TYPE_2__ ioasa; TYPE_1__ ioarcb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct pmcraid_cmd*) ;

__attribute__((used)) static void FUNC_4(struct pmcraid_cmd *VAR_0)
{
 FUNC_2("response internal cmd CDB[0] = %x ioasc = %x\n",
       VAR_0->ioa_cb->ioarcb.cdb[0],
       FUNC_1(VAR_0->ioa_cb->ioasa.ioasc));






 if (VAR_0->completion_req) {
  VAR_0->completion_req = 0;
  FUNC_0(&VAR_0->wait_for_completion);
 }





 if (VAR_0->release) {
  VAR_0->release = 0;
  FUNC_3(VAR_0);
 }
}
