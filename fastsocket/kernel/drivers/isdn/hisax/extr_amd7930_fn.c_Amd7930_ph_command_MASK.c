
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int lmr1; } ;
struct TYPE_4__ {TYPE_1__ amd7930; } ;
struct IsdnCardState {int debug; TYPE_2__ dc; } ;


 int VAR_0 ;
 int FUNC_0 (struct IsdnCardState*,char*,char*,int ) ;
 int FUNC_1 (struct IsdnCardState*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_1, u_char VAR_2, char *VAR_3)
{
 if (VAR_1->debug & VAR_0)
  FUNC_0(VAR_1, "AMD7930: %s: ph_command 0x%02X", VAR_3, VAR_2);

        VAR_1->dc.amd7930.lmr1 = VAR_2;
        FUNC_1(VAR_1, 0xA3, VAR_2);
}
