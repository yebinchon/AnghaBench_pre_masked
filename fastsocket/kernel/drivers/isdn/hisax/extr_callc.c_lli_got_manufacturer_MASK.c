
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ MFlag; } ;
struct TYPE_6__ {TYPE_1__ elsa; } ;
struct IsdnCardState {scalar_t__ typ; int (* cardmsg ) (struct IsdnCardState*,int ,int ) ;TYPE_2__ hw; } ;
struct Channel {int dummy; } ;
struct TYPE_7__ {int para; } ;
typedef TYPE_3__ capi_msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct IsdnCardState*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct Channel *VAR_4, struct IsdnCardState *VAR_5, capi_msg *VAR_6) {
 if ((VAR_5->typ == VAR_1) || (VAR_5->typ == VAR_3) ||
  (VAR_5->typ == VAR_2)) {
  if (VAR_5->hw.elsa.MFlag) {
   VAR_5->cardmsg(VAR_5, VAR_0, VAR_6->para);
  }
 }
}
