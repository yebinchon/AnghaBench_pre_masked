
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct IsdnCardState*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline u_char
FUNC_3(struct IsdnCardState *VAR_1, int VAR_2, u_char VAR_3)
{
 register u_char VAR_4;

 if (VAR_2) {
  if (VAR_1->hw.hfcD.cip != VAR_3) {
   VAR_1->hw.hfcD.cip = VAR_3;
   FUNC_1(VAR_1->hw.hfcD.addr | 1, VAR_3);
  }
  VAR_4 = FUNC_0(VAR_1->hw.hfcD.addr);




 } else
  VAR_4 = FUNC_0(VAR_1->hw.hfcD.addr | 1);
 return (VAR_4);
}
