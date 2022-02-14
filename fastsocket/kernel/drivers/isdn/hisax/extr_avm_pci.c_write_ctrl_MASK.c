
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cmd; int xml; int mode; } ;
struct TYPE_9__ {TYPE_1__ sr; int ctrl; } ;
struct TYPE_10__ {TYPE_2__ ctrl; } ;
struct TYPE_11__ {TYPE_3__ hdlc; } ;
struct BCState {TYPE_4__ hw; scalar_t__ channel; TYPE_5__* cs; } ;
struct TYPE_12__ {int debug; scalar_t__ subtyp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_5__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (TYPE_5__*,char*,scalar_t__,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct BCState *VAR_3, int VAR_4) {

 if (VAR_3->cs->debug & VAR_2)
  FUNC_2(VAR_3->cs, "hdlc %c wr%x ctrl %x",
   'A' + VAR_3->channel, VAR_4, VAR_3->hw.hdlc.ctrl.ctrl);
 if (VAR_3->cs->subtyp == VAR_0) {
  FUNC_0(VAR_3->cs, VAR_3->channel, VAR_1, VAR_3->hw.hdlc.ctrl.ctrl);
 } else {
  if (VAR_4 & 4)
   FUNC_1(VAR_3->cs, VAR_3->channel, VAR_1 + 2,
    VAR_3->hw.hdlc.ctrl.sr.mode);
  if (VAR_4 & 2)
   FUNC_1(VAR_3->cs, VAR_3->channel, VAR_1 + 1,
    VAR_3->hw.hdlc.ctrl.sr.xml);
  if (VAR_4 & 1)
   FUNC_1(VAR_3->cs, VAR_3->channel, VAR_1,
    VAR_3->hw.hdlc.ctrl.sr.cmd);
 }
}
