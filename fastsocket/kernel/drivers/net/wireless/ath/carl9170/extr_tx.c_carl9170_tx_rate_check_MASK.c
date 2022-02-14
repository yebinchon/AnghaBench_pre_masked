
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ar9170 {int dummy; } ;
struct TYPE_2__ {scalar_t__ phy_control; } ;
struct _carl9170_tx_superframe {TYPE_1__ f; } ;



__attribute__((used)) static bool FUNC_0(struct ar9170 *VAR_0, struct sk_buff *VAR_1,
       struct sk_buff *VAR_2)
{
 struct _carl9170_tx_superframe *VAR_3, *VAR_4;

 VAR_3 = (void *) VAR_1->data;
 VAR_4 = (void *) VAR_2->data;
 return (VAR_3->f.phy_control == VAR_4->f.phy_control);
}
