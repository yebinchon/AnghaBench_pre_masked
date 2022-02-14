
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int is_a_peripheral; } ;
struct musb {int port1_status; TYPE_3__* xceiv; scalar_t__ is_active; TYPE_2__ g; } ;
struct TYPE_6__ {int state; TYPE_1__* host; } ;
struct TYPE_4__ {int b_hnp_enable; } ;


 int FUNC_0 (int,char*,int ) ;

 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct musb*) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct musb *VAR_5)
{
 VAR_5->port1_status = (1 << VAR_4)
   | (1 << VAR_3);

 FUNC_4(FUNC_2(VAR_5));
 VAR_5->is_active = 0;

 switch (VAR_5->xceiv->state) {
 case 129:
 case 130:
  VAR_5->xceiv->state = VAR_1;
  VAR_5->is_active = 0;
  break;
 case 128:
  VAR_5->xceiv->state = VAR_2;
  break;
 default:
  FUNC_0(1, "host disconnect (%s)\n", FUNC_3(VAR_5));
 }
}
