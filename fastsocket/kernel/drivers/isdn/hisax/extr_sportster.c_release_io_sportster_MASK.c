
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ spt; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(VAR_1->hw.spt.cfg_reg + VAR_0, 0);
 for (VAR_2=0; VAR_2<64; VAR_2++) {
  VAR_3 = VAR_1->hw.spt.cfg_reg + VAR_2 *1024;
  FUNC_1(VAR_3, 8);
 }
}
