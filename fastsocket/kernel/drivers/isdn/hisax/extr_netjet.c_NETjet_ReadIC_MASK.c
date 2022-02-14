
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int auxd; scalar_t__ isac; int auxa; } ;
struct TYPE_3__ {TYPE_2__ njet; } ;
struct IsdnCardState {TYPE_1__ hw; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;

u_char
FUNC_2(struct IsdnCardState *VAR_0, u_char VAR_1)
{
 u_char VAR_2;

 VAR_0->hw.njet.auxd &= 0xfc;
 VAR_0->hw.njet.auxd |= (VAR_1>>4) & 3;
 FUNC_1(VAR_0->hw.njet.auxa, VAR_0->hw.njet.auxd);
 VAR_2 = FUNC_0(VAR_0->hw.njet.isac + ((VAR_1 & 0xf)<<2));
 return(VAR_2);
}
