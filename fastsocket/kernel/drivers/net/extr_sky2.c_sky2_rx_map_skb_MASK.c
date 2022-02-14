
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct rx_ring_info {int * frag_addr; int data_addr; struct sk_buff* skb; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; } ;
struct TYPE_3__ {int size; int page_offset; int page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int ,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int ,unsigned int,int ) ;
 int FUNC_3 (struct rx_ring_info*,int ,unsigned int) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3, struct rx_ring_info *VAR_4,
       unsigned VAR_5)
{
 struct sk_buff *VAR_6 = VAR_4->skb;
 int VAR_7;

 VAR_4->data_addr = FUNC_2(VAR_3, VAR_6->data, VAR_5, VAR_1);
 if (FUNC_5(FUNC_0(VAR_3, VAR_4->data_addr)))
  return -VAR_0;

 FUNC_3(VAR_4, VAR_2, VAR_5);

 for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_6)->nr_frags; VAR_7++)
  VAR_4->frag_addr[VAR_7] = FUNC_1(VAR_3,
      FUNC_4(VAR_6)->frags[VAR_7].page,
      FUNC_4(VAR_6)->frags[VAR_7].page_offset,
      FUNC_4(VAR_6)->frags[VAR_7].size,
      VAR_1);
 return 0;
}
