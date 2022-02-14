
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int addr; int cip; } ;
struct TYPE_3__ {TYPE_2__ hfc; } ;
struct IsdnCardState {int debug; TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct IsdnCardState*,char*,int ,int ) ;

__attribute__((used)) static u_char
FUNC_3(struct IsdnCardState *VAR_1, int VAR_2, u_char VAR_3)
{
 register u_char VAR_4;

 if (VAR_2) {
  VAR_1->hw.hfc.cip = VAR_3;
  FUNC_1(VAR_1->hw.hfc.addr | 1, VAR_3);
  VAR_4 = FUNC_0(VAR_1->hw.hfc.addr);
  if (VAR_1->debug & VAR_0 && (VAR_2 != 2))
   FUNC_2(VAR_1, "hfc RD %02x %02x", VAR_3, VAR_4);
 } else
  VAR_4 = FUNC_0(VAR_1->hw.hfc.addr | 1);
 return (VAR_4);
}
