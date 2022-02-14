
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct TYPE_3__ {int ipac; int * hscx; } ;
struct TYPE_4__ {TYPE_1__ gazel; } ;
struct IsdnCardState {int subtyp; TYPE_2__ hw; } ;






 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_0, int VAR_1, u_char VAR_2, u_char VAR_3)
{
 u_short VAR_4 = VAR_2;

 switch (VAR_0->subtyp) {
  case 131:
   VAR_4 = ((VAR_4 << 8 & 0xf000) | (VAR_4 & 0xf));
  case 130:
   FUNC_0(VAR_0->hw.gazel.hscx[VAR_1], VAR_4, VAR_3);
   break;
  case 128:
  case 129:
   FUNC_1(VAR_0->hw.gazel.ipac, VAR_1 * 0x40 + VAR_4, VAR_3);
   break;
 }
}
