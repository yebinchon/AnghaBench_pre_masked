
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int * cb; } ;
struct nes_rskb_cb {scalar_t__ busaddr; int maplen; } ;
struct nes_device {int pcidev; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nes_device *VAR_0, struct sk_buff *VAR_1, u32 VAR_2)
{
 struct nes_rskb_cb *VAR_3;

 VAR_3 = (struct nes_rskb_cb *)&VAR_1->cb[0];
 FUNC_1(VAR_0->pcidev, VAR_3->busaddr, VAR_3->maplen, VAR_2);
 VAR_3->busaddr = 0;
 FUNC_0(VAR_1);
}
