
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned int len; unsigned int tail; scalar_t__ data_len; int data; int dev; } ;
struct mlx4_en_rx_desc {TYPE_1__* data; } ;
struct mlx4_en_rx_alloc {int offset; int page; } ;
struct mlx4_en_priv {int ddev; int dev; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int nr_frags; TYPE_2__* frags; } ;
struct TYPE_5__ {int size; int page_offset; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ,struct mlx4_en_priv*,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,void*,scalar_t__) ;
 int FUNC_6 (struct mlx4_en_priv*,struct mlx4_en_rx_desc*,struct mlx4_en_rx_alloc*,struct sk_buff*,unsigned int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,void*,unsigned int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 TYPE_3__* FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct mlx4_en_priv *VAR_5,
          struct mlx4_en_rx_desc *VAR_6,
          struct mlx4_en_rx_alloc *VAR_7,
          unsigned int VAR_8)
{
 struct sk_buff *VAR_9;
 void *VAR_10;
 int VAR_11;
 dma_addr_t VAR_12;

 VAR_9 = FUNC_1(VAR_4 + VAR_2);
 if (!VAR_9) {
  FUNC_3(VAR_3, VAR_5, "Failed allocating skb\n");
  return ((void*)0);
 }
 VAR_9->dev = VAR_5->dev;
 FUNC_9(VAR_9, VAR_2);
 VAR_9->len = VAR_8;



 VAR_10 = FUNC_7(VAR_7[0].page) + VAR_7[0].offset;

 if (VAR_8 <= VAR_4) {


  VAR_12 = FUNC_0(VAR_6->data[0].addr);
  FUNC_2(VAR_5->ddev, VAR_12, VAR_8,
     VAR_0);
  FUNC_8(VAR_9, VAR_10, VAR_8);
  VAR_9->tail += VAR_8;
 } else {

  VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7,
       VAR_9, VAR_8);
  if (FUNC_11(!VAR_11)) {
   FUNC_4(VAR_9);
   return ((void*)0);
  }
  FUNC_10(VAR_9)->nr_frags = VAR_11;


  FUNC_5(VAR_9->data, VAR_10, VAR_1);
  VAR_9->tail += VAR_1;


  FUNC_10(VAR_9)->frags[0].page_offset += VAR_1;


  FUNC_10(VAR_9)->frags[0].size -= VAR_1;
  VAR_9->data_len = VAR_8 - VAR_1;
 }
 return VAR_9;
}
