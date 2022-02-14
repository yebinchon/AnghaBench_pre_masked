
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int b_hnp_enable; int a_hnp_support; int a_alt_hnp_support; } ;
struct omap_udc {TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct omap_udc *VAR_9)
{
 u16 VAR_10;

 if (!FUNC_0(&VAR_9->gadget))
  return;

 if (FUNC_1(VAR_2) & VAR_3)
  VAR_10 = FUNC_2(VAR_8);
 else
  VAR_10 = 0;

 VAR_9->gadget.b_hnp_enable = !!(VAR_10 & VAR_7);
 VAR_9->gadget.a_hnp_support = !!(VAR_10 & VAR_6);
 VAR_9->gadget.a_alt_hnp_support = !!(VAR_10 & VAR_5);




 if (VAR_9->gadget.b_hnp_enable) {
  u32 VAR_11;

  VAR_11 = FUNC_1(VAR_2);
  VAR_11 |= VAR_1 | VAR_0;
  VAR_11 &= ~VAR_4;
  FUNC_3(VAR_11, VAR_2);
 }
}
