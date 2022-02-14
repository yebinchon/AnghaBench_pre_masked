
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct p54_trap {int frequency; int event; } ;
struct p54_hdr {scalar_t__ data; } ;
struct p54_common {TYPE_1__* hw; int vif; } ;
struct TYPE_2__ {int wiphy; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct p54_common *VAR_0, struct sk_buff *VAR_1)
{
 struct p54_hdr *VAR_2 = (struct p54_hdr *) VAR_1->data;
 struct p54_trap *VAR_3 = (struct p54_trap *) VAR_2->data;
 u16 VAR_4 = FUNC_1(VAR_3->event);
 u16 VAR_5 = FUNC_1(VAR_3->frequency);

 switch (VAR_4) {
 case 135:
  break;
 case 131:
  FUNC_2(VAR_0->hw->wiphy, "radar (freq:%d MHz)\n", VAR_5);
  break;
 case 132:
  if (VAR_0->vif)
   FUNC_0(VAR_0->vif);
  break;
 case 130:
  break;
 case 129:
  break;
 case 128:
  break;
 case 134:
  FUNC_3(VAR_0->hw->wiphy, 1);
  break;
 case 133:
  FUNC_3(VAR_0->hw->wiphy, 0);
  break;
 default:
  FUNC_2(VAR_0->hw->wiphy, "received event:%x freq:%d\n",
      VAR_4, VAR_5);
  break;
 }
}
