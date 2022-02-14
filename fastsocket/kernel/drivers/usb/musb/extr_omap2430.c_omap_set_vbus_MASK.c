
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct musb {int is_active; int mregs; TYPE_1__* xceiv; } ;
struct TYPE_2__ {int default_a; int state; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct musb*) ;
 int FUNC_2 (struct musb*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct musb*) ;

__attribute__((used)) static void FUNC_6(struct musb *VAR_4, int VAR_5)
{
 u8 VAR_6;





 VAR_6 = FUNC_3(VAR_4->mregs, VAR_0);

 if (VAR_5) {
  VAR_4->is_active = 1;
  VAR_4->xceiv->default_a = 1;
  VAR_4->xceiv->state = VAR_2;
  VAR_6 |= VAR_1;

  FUNC_2(VAR_4);
 } else {
  VAR_4->is_active = 0;





  VAR_4->xceiv->default_a = 0;
  VAR_4->xceiv->state = VAR_3;
  VAR_6 &= ~VAR_1;

  FUNC_1(VAR_4);
 }
 FUNC_4(VAR_4->mregs, VAR_0, VAR_6);

 FUNC_0(1, "VBUS %s, devctl %02x "
                                    "\n",
  FUNC_5(VAR_4),
  FUNC_3(VAR_4->mregs, VAR_0));
}
