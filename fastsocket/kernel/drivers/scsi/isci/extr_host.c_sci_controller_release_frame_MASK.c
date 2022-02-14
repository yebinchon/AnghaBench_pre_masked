
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int get; } ;
struct isci_host {TYPE_2__* scu_registers; TYPE_3__ uf_control; } ;
struct TYPE_4__ {int unsolicited_frame_get_pointer; } ;
struct TYPE_5__ {TYPE_1__ sdma; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct isci_host *VAR_0, u32 VAR_1)
{
 if (FUNC_0(&VAR_0->uf_control, VAR_1))
  FUNC_1(VAR_0->uf_control.get,
   &VAR_0->scu_registers->sdma.unsolicited_frame_get_pointer);
}
