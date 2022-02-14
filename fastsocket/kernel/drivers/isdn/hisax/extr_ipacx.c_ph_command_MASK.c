
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ph_state; } ;
struct TYPE_4__ {TYPE_1__ isac; } ;
struct IsdnCardState {int debug; int (* writeisac ) (struct IsdnCardState*,int ,unsigned int) ;TYPE_2__ dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct IsdnCardState*,char*,unsigned int,int ) ;
 int FUNC_1 (struct IsdnCardState*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->debug &VAR_1)
  FUNC_0(VAR_2, "ph_command (%#x) in (%#x)", VAR_3,
   VAR_2->dc.isac.ph_state);



 VAR_2->writeisac(VAR_2, VAR_0, (VAR_3 << 4) | 0x0E);
}
