
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sg_ent {void** len; void** addr; } ;
struct pci_dev {int dev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {unsigned int nr_frags; int * frags; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,unsigned char*,unsigned int,int ) ;
 int FUNC_3 (int *,int const*,int ,unsigned int,int ) ;
 unsigned int FUNC_4 (int const*) ;
 TYPE_1__* FUNC_5 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_6(const struct sk_buff *VAR_1,
        struct sg_ent *VAR_2, unsigned char *VAR_3,
        unsigned int VAR_4, struct pci_dev *VAR_5)
{
 dma_addr_t VAR_6;
 unsigned int VAR_7, VAR_8 = 0, VAR_9;

 if (VAR_4) {
  VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_4, VAR_0);
  VAR_2->len[0] = FUNC_0(VAR_4);
  VAR_2->addr[0] = FUNC_1(VAR_6);
  VAR_8 = 1;
 }

 VAR_9 = FUNC_5(VAR_1)->nr_frags;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  const skb_frag_t *VAR_10 = &FUNC_5(VAR_1)->frags[VAR_7];

  VAR_6 = FUNC_3(&VAR_5->dev, VAR_10, 0, FUNC_4(VAR_10),
        VAR_0);
  VAR_2->len[VAR_8] = FUNC_0(FUNC_4(VAR_10));
  VAR_2->addr[VAR_8] = FUNC_1(VAR_6);
  VAR_8 ^= 1;
  if (VAR_8 == 0)
   ++VAR_2;
 }
 if (VAR_8)
  VAR_2->len[VAR_8] = 0;
 return ((VAR_9 + (VAR_4 != 0)) * 3) / 2 + VAR_8;
}
