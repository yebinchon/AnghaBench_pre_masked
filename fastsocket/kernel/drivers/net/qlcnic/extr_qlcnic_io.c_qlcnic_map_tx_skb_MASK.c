
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_frag_struct {int dummy; } ;
struct sk_buff {int data; } ;
struct qlcnic_skb_frag {void* dma; int length; } ;
struct qlcnic_cmd_buffer {struct qlcnic_skb_frag* frag_array; } ;
struct pci_dev {int dev; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,void*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,void*) ;
 void* FUNC_2 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*,void*,int ,int ) ;
 int FUNC_4 (struct pci_dev*,void*,int ,int ) ;
 void* FUNC_5 (int *,struct skb_frag_struct*,int ,int ,int ) ;
 int FUNC_6 (struct skb_frag_struct*) ;
 int FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_3, struct sk_buff *VAR_4,
        struct qlcnic_cmd_buffer *VAR_5)
{
 struct qlcnic_skb_frag *VAR_6;
 struct skb_frag_struct *VAR_7;
 int VAR_8, VAR_9;
 dma_addr_t VAR_10;

 VAR_9 = FUNC_8(VAR_4)->nr_frags;
 VAR_6 = &VAR_5->frag_array[0];

 VAR_10 = FUNC_2(VAR_3, VAR_4->data, FUNC_7(VAR_4),
        VAR_2);
 if (FUNC_1(VAR_3, VAR_10))
  goto out_err;

 VAR_6->dma = VAR_10;
 VAR_6->length = FUNC_7(VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_7 = &FUNC_8(VAR_4)->frags[VAR_8];
  VAR_6 = &VAR_5->frag_array[VAR_8+1];
  VAR_10 = FUNC_5(&VAR_3->dev, VAR_7, 0, FUNC_6(VAR_7),
           VAR_0);
  if (FUNC_0(&VAR_3->dev, VAR_10))
   goto unwind;

  VAR_6->dma = VAR_10;
  VAR_6->length = FUNC_6(VAR_7);
 }

 return 0;

unwind:
 while (--VAR_8 >= 0) {
  VAR_6 = &VAR_5->frag_array[VAR_8+1];
  FUNC_3(VAR_3, VAR_6->dma, VAR_6->length, VAR_2);
 }

 VAR_6 = &VAR_5->frag_array[0];
 FUNC_4(VAR_3, VAR_6->dma, FUNC_7(VAR_4), VAR_2);

out_err:
 return -VAR_1;
}
