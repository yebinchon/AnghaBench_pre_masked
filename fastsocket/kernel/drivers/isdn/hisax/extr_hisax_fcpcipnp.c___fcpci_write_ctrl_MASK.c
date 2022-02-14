
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct fritz_bcs {TYPE_1__ ctrl; scalar_t__ channel; struct fritz_adapter* adapter; } ;
struct fritz_adapter {scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fritz_bcs *VAR_5, int VAR_6)
{
 struct fritz_adapter *VAR_7 = VAR_5->adapter;
 int VAR_8 = VAR_5->channel ? VAR_2 : VAR_1;

 FUNC_0(0x40, "hdlc %c wr%x ctrl %x",
     'A' + VAR_5->channel, VAR_6, VAR_5->ctrl.ctrl);

 FUNC_1(VAR_8, VAR_7->io + VAR_3);
 FUNC_1(VAR_5->ctrl.ctrl, VAR_7->io + VAR_0 + VAR_4);
}
