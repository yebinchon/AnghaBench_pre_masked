
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct TYPE_3__ {int ipac; int isac; } ;
struct TYPE_4__ {TYPE_1__ gazel; } ;
struct IsdnCardState {int subtyp; TYPE_2__ hw; } ;






 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_char
FUNC_2(struct IsdnCardState *VAR_0, u_char VAR_1)
{
 u_short VAR_2 = VAR_1;

 switch (VAR_0->subtyp) {
  case 131:
   VAR_2 = ((VAR_2 << 8 & 0xf000) | (VAR_2 & 0xf));
  case 130:
   return (FUNC_0(VAR_0->hw.gazel.isac, VAR_2));
  case 128:
  case 129:
   return (FUNC_1(VAR_0->hw.gazel.ipac, 0x80 + VAR_2));
 }
 return 0;
}
