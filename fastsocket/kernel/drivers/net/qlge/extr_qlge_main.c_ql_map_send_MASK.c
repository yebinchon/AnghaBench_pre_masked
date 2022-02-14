
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_ring_desc {int map_cnt; int * map; int oal; } ;
struct tx_buf_desc {void* len; void* addr; } ;
struct sk_buff {int * data; } ;
struct ql_adapter {int ndev; int pdev; } ;
struct ob_mac_iocb_req {struct tx_buf_desc* tbd; } ;
struct oal {int dummy; } ;
struct TYPE_3__ {int size; int page_offset; int page; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*,int) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int,int ) ;
 int FUNC_7 (int ,int *,int,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct ql_adapter*,struct tx_ring_desc*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 TYPE_2__* FUNC_12 (struct sk_buff*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(struct ql_adapter *VAR_9,
         struct ob_mac_iocb_req *VAR_10,
         struct sk_buff *VAR_11, struct tx_ring_desc *VAR_12)
{
 int VAR_13 = FUNC_11(VAR_11);
 dma_addr_t VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0;
 struct tx_buf_desc *VAR_18 = VAR_10->tbd;
 int VAR_19 = FUNC_12(VAR_11)->nr_frags;

 if (VAR_19) {
  FUNC_4(VAR_9, VAR_8, VAR_0, VAR_9->ndev,
        "frag_cnt = %d.\n", VAR_19);
 }



 VAR_14 = FUNC_7(VAR_9->pdev, VAR_11->data, VAR_13, VAR_3);

 VAR_16 = FUNC_5(VAR_9->pdev, VAR_14);
 if (VAR_16) {
  FUNC_3(VAR_9, VAR_8, VAR_9->ndev,
     "PCI mapping failed with error: %d\n", VAR_16);

  return VAR_1;
 }

 VAR_18->len = FUNC_0(VAR_13);
 VAR_18->addr = FUNC_1(VAR_14);
 FUNC_8(&VAR_12->map[VAR_17], VAR_6, VAR_14);
 FUNC_9(&VAR_12->map[VAR_17], VAR_7, VAR_13);
 VAR_17++;
 for (VAR_15 = 0; VAR_15 < VAR_19; VAR_15++, VAR_17++) {
  skb_frag_t *VAR_20 = &FUNC_12(VAR_11)->frags[VAR_15];
  VAR_18++;
  if (VAR_15 == 6 && VAR_19 > 7) {
   VAR_14 = FUNC_7(VAR_9->pdev, &VAR_12->oal,
          sizeof(struct oal),
          VAR_3);
   VAR_16 = FUNC_5(VAR_9->pdev, VAR_14);
   if (VAR_16) {
    FUNC_3(VAR_9, VAR_8, VAR_9->ndev,
       "PCI mapping outbound address list with error: %d\n",
       VAR_16);
    goto map_error;
   }

   VAR_18->addr = FUNC_1(VAR_14);





   VAR_18->len =
       FUNC_0((sizeof(struct tx_buf_desc) *
      (VAR_19 - VAR_15)) | VAR_4);
   FUNC_8(&VAR_12->map[VAR_17], VAR_6,
        VAR_14);
   FUNC_9(&VAR_12->map[VAR_17], VAR_7,
       sizeof(struct oal));
   VAR_18 = (struct tx_buf_desc *)&VAR_12->oal;
   VAR_17++;
  }

  VAR_14 =
      FUNC_6(VAR_9->pdev, VAR_20->page,
     VAR_20->page_offset, VAR_20->size,
     VAR_3);

  VAR_16 = FUNC_5(VAR_9->pdev, VAR_14);
  if (VAR_16) {
   FUNC_3(VAR_9, VAR_8, VAR_9->ndev,
      "PCI mapping frags failed with error: %d.\n",
      VAR_16);
   goto map_error;
  }

  VAR_18->addr = FUNC_1(VAR_14);
  VAR_18->len = FUNC_0(VAR_20->size);
  FUNC_8(&VAR_12->map[VAR_17], VAR_6, VAR_14);
  FUNC_9(&VAR_12->map[VAR_17], VAR_7,
      VAR_20->size);

 }

 VAR_12->map_cnt = VAR_17;

 VAR_18->len = FUNC_0(FUNC_2(VAR_18->len) | VAR_5);
 return VAR_2;

map_error:






 FUNC_10(VAR_9, VAR_12, VAR_17);
 return VAR_1;
}
