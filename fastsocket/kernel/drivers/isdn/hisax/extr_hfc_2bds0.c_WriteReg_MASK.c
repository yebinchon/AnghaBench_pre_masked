
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__ cip; int addr; } ;
struct TYPE_4__ {TYPE_1__ hfcD; } ;
struct IsdnCardState {int debug; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct IsdnCardState*,char*,char,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct IsdnCardState *VAR_2, int VAR_3, u_char VAR_4, u_char VAR_5)
{
 if (VAR_2->hw.hfcD.cip != VAR_4) {
  VAR_2->hw.hfcD.cip = VAR_4;
  FUNC_0(VAR_2->hw.hfcD.addr | 1, VAR_4);
 }
 if (VAR_3)
  FUNC_0(VAR_2->hw.hfcD.addr, VAR_5);




}
