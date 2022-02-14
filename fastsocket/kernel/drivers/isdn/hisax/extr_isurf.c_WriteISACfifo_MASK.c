
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int isac; } ;
struct TYPE_4__ {TYPE_1__ isurf; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_0, u_char * VAR_1, int VAR_2)
{
 register int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++){
  FUNC_1(VAR_1[VAR_3], VAR_0->hw.isurf.isac);FUNC_0();
 }
}
