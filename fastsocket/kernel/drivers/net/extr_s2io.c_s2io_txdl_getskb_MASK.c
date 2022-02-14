
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct s2io_nic {int pdev; } ;
struct fifo_info {int max_txds; scalar_t__ ufo_in_band_v; struct s2io_nic* nic; } ;
struct TxD {scalar_t__ Host_Control; scalar_t__ Buffer_Pointer; } ;
struct TYPE_3__ {int size; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {size_t nr_frags; TYPE_1__* frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct TxD*,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct fifo_info *VAR_1,
     struct TxD *VAR_2, int VAR_3)
{
 struct s2io_nic *VAR_4 = VAR_1->nic;
 struct sk_buff *VAR_5;
 struct TxD *VAR_6;
 u16 VAR_7, VAR_8;

 VAR_6 = VAR_2;
 if (VAR_6->Host_Control == (u64)(long)VAR_1->ufo_in_band_v) {
  FUNC_2(VAR_4->pdev, (dma_addr_t)VAR_6->Buffer_Pointer,
     sizeof(u64), VAR_0);
  VAR_6++;
 }

 VAR_5 = (struct sk_buff *)((unsigned long)VAR_6->Host_Control);
 if (!VAR_5) {
  FUNC_0(VAR_2, 0, (sizeof(struct TxD) * VAR_1->max_txds));
  return ((void*)0);
 }
 FUNC_2(VAR_4->pdev, (dma_addr_t)VAR_6->Buffer_Pointer,
    FUNC_3(VAR_5), VAR_0);
 VAR_8 = FUNC_4(VAR_5)->nr_frags;
 if (VAR_8) {
  VAR_6++;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++, VAR_6++) {
   skb_frag_t *VAR_9 = &FUNC_4(VAR_5)->frags[VAR_7];
   if (!VAR_6->Buffer_Pointer)
    break;
   FUNC_1(VAR_4->pdev,
           (dma_addr_t)VAR_6->Buffer_Pointer,
           VAR_9->size, VAR_0);
  }
 }
 FUNC_0(VAR_2, 0, (sizeof(struct TxD) * VAR_1->max_txds));
 return VAR_5;
}
