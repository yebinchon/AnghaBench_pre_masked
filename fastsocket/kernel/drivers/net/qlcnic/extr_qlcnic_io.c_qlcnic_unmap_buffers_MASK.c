
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qlcnic_skb_frag {int dma; int length; } ;
struct qlcnic_cmd_buffer {int * skb; struct qlcnic_skb_frag* frag_array; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1, struct sk_buff *VAR_2,
     struct qlcnic_cmd_buffer *VAR_3)
{
 struct qlcnic_skb_frag *VAR_4 = &VAR_3->frag_array[0];
 int VAR_5, VAR_6 = FUNC_3(VAR_2)->nr_frags;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = &VAR_3->frag_array[VAR_5+1];
  FUNC_0(VAR_1, VAR_4->dma, VAR_4->length, VAR_0);
 }

 VAR_4 = &VAR_3->frag_array[0];
 FUNC_1(VAR_1, VAR_4->dma, FUNC_2(VAR_2), VAR_0);
 VAR_3->skb = ((void*)0);
}
