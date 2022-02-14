
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct p54_hdr {int type; } ;
struct p54_common {TYPE_1__* hw; } ;
struct TYPE_2__ {int wiphy; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (struct p54_common*,struct sk_buff*) ;
 int FUNC_2 (struct p54_common*,struct sk_buff*) ;
 int FUNC_3 (struct p54_common*,struct sk_buff*) ;
 int FUNC_4 (struct p54_common*,struct sk_buff*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct p54_common *VAR_0, struct sk_buff *VAR_1)
{
 struct p54_hdr *VAR_2 = (struct p54_hdr *) VAR_1->data;

 switch (FUNC_0(VAR_2->type)) {
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_4(VAR_0, VAR_1);
  break;
 case 132:
  break;
 case 130:
  FUNC_3(VAR_0, VAR_1);
  break;
 case 131:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  FUNC_5(VAR_0->hw->wiphy,
       "not handling 0x%02x type control frame\n",
       FUNC_0(VAR_2->type));
  break;
 }
 return 0;
}
