
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int addr; int cip; } ;
struct TYPE_4__ {TYPE_1__ hfc; } ;
struct IsdnCardState {int debug; TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct IsdnCardState*,char*,char,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_1, int VAR_2, u_char VAR_3, u_char VAR_4)
{
 FUNC_0(VAR_1->hw.hfc.addr | 1, VAR_3);
 VAR_1->hw.hfc.cip = VAR_3;
 if (VAR_2)
  FUNC_0(VAR_1->hw.hfc.addr, VAR_4);
 if (VAR_1->debug & VAR_0 && (VAR_2 != 2))
  FUNC_1(VAR_1, "hfc W%c %02x %02x", VAR_2 ? 'D' : 'C', VAR_3, VAR_4);
}
