
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ priv; } ;
typedef TYPE_1__ wlandevice_t ;
struct sk_buff {int data; } ;
struct TYPE_5__ {int link_bh; int authq; } ;
typedef TYPE_2__ hfa384x_t ;
typedef int hfa384x_InfFrame_t ;


 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(wlandevice_t *VAR_0,
      hfa384x_InfFrame_t *VAR_1)
{
 hfa384x_t *VAR_2 = (hfa384x_t *) VAR_0->priv;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_1));
 if (VAR_3) {
  FUNC_3(VAR_3, sizeof(*VAR_1));
  FUNC_1(VAR_3->data, VAR_1, sizeof(*VAR_1));
  FUNC_4(&VAR_2->authq, VAR_3);
  FUNC_2(&VAR_2->link_bh);
 }
}
