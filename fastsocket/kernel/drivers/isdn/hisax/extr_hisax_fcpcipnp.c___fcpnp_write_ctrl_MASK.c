
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char mode; unsigned char xml; unsigned char cmd; } ;
struct TYPE_4__ {TYPE_1__ sr; int ctrl; } ;
struct fritz_bcs {TYPE_2__ ctrl; scalar_t__ channel; struct fritz_adapter* adapter; } ;
struct fritz_adapter {scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__,int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fritz_bcs *VAR_5, int VAR_6)
{
 struct fritz_adapter *VAR_7 = VAR_5->adapter;
 unsigned char VAR_8 = VAR_5->channel ? VAR_2 : VAR_1;

 FUNC_0(0x40, "hdlc %c wr%x ctrl %x",
     'A' + VAR_5->channel, VAR_6, VAR_5->ctrl.ctrl);

 FUNC_1(VAR_8, VAR_7->io + VAR_3);
 if (VAR_6 & 4)
  FUNC_1(VAR_5->ctrl.sr.mode,
       VAR_7->io + VAR_0 + VAR_4 + 2);
 if (VAR_6 & 2)
  FUNC_1(VAR_5->ctrl.sr.xml,
       VAR_7->io + VAR_0 + VAR_4 + 1);
 if (VAR_6 & 1)
  FUNC_1(VAR_5->ctrl.sr.cmd,
       VAR_7->io + VAR_0 + VAR_4 + 0);
}
