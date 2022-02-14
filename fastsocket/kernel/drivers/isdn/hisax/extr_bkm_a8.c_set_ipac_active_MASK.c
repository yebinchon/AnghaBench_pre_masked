
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {int data_adr; int base; } ;
struct TYPE_4__ {TYPE_1__ ax; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_1, u_int VAR_2)
{

 FUNC_0(VAR_1->hw.ax.base, VAR_1->hw.ax.data_adr, VAR_0,
  VAR_2 ? 0xc0 : 0xff);
}
