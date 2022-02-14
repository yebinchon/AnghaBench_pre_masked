
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int transcnt; int transp; int IER; scalar_t__ transbuf; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_3, u_char *VAR_4, int VAR_5) {
 int VAR_6, VAR_7;
 u_char *VAR_8 = VAR_4;

 if (!VAR_5)
  return;
 if (VAR_5 > (VAR_0 - VAR_3->hw.elsa.transcnt)) {
  return;
 }
 VAR_7 = VAR_3->hw.elsa.transcnt + VAR_3->hw.elsa.transp;
 VAR_7 &= (VAR_0 -1);
 VAR_6 = VAR_5;
 if (VAR_6 > VAR_0 - VAR_7) {
  VAR_6 = VAR_0 - VAR_7;
  FUNC_0(VAR_3->hw.elsa.transbuf + VAR_7, VAR_8, VAR_6);
  VAR_3->hw.elsa.transcnt += VAR_6;
  VAR_8 += VAR_6;
  VAR_6 = VAR_5 - VAR_6;
  VAR_7 = 0;
 }
 FUNC_0(VAR_3->hw.elsa.transbuf + VAR_7, VAR_8, VAR_6);
 VAR_3->hw.elsa.transcnt += VAR_6;
 if (VAR_3->hw.elsa.transcnt &&
     !(VAR_3->hw.elsa.IER & VAR_2)) {
  VAR_3->hw.elsa.IER |= VAR_2;
  FUNC_1(VAR_3, VAR_1, VAR_3->hw.elsa.IER);
 }
}
