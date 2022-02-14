
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct fritz_bcs {TYPE_1__ ctrl; scalar_t__ channel; struct fritz_adapter* adapter; } ;
struct fritz_adapter {scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__,int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fritz_bcs *VAR_2, int VAR_3)
{
 struct fritz_adapter *VAR_4 = VAR_2->adapter;
 int VAR_5 = VAR_2->channel ? VAR_1 : VAR_0;

 FUNC_0(0x40, "hdlc %c wr%x ctrl %x",
     'A' + VAR_2->channel, VAR_3, VAR_2->ctrl.ctrl);

 FUNC_1(VAR_2->ctrl.ctrl, VAR_4->io + VAR_5);
}
