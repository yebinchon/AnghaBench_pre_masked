
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int mode; int lpt_addr; int cur_ctrl; } ;
typedef TYPE_1__ Interface ;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(Interface *VAR_1, u8 VAR_2)
{
 switch(VAR_1->mode)
 {
  case 128 :
  case 129 :
  case 133 :
  case 134 :
  {
   FUNC_0(VAR_2, VAR_1->lpt_addr);

   VAR_1->cur_ctrl ^= VAR_0;

   FUNC_0(VAR_1->cur_ctrl, VAR_1->lpt_addr + 2);

   break;
  }

  case 132 :
  case 130 :
  case 131 :
  {
   FUNC_0(VAR_2, VAR_1->lpt_addr + 3);

   break;
  }
 }
}
