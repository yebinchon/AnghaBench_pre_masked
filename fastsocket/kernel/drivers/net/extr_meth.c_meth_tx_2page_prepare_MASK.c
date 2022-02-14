
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* cat_buf; scalar_t__ dt; } ;
struct TYPE_6__ {int raw; } ;
struct TYPE_10__ {TYPE_4__ data; TYPE_1__ header; } ;
typedef TYPE_5__ tx_packet ;
struct sk_buff {int len; scalar_t__ data; } ;
struct meth_private {size_t tx_write; TYPE_5__* tx_ring; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int start_addr; int len; } ;
struct TYPE_8__ {TYPE_2__ form; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,void*,int,int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct meth_private *VAR_4,
      struct sk_buff *VAR_5)
{
 tx_packet *VAR_6 = &VAR_4->tx_ring[VAR_4->tx_write];
 void *VAR_7 = (void *)(((unsigned long)VAR_5->data + 7) & ~7);
 void *VAR_8 = (void *)FUNC_0((unsigned long)VAR_5->data);
 int VAR_9 = (int)((unsigned long)VAR_7 - (unsigned long)VAR_5->data);
 int VAR_10 = (int)((unsigned long)VAR_8 - (unsigned long)VAR_7);
 int VAR_11 = VAR_5->len - VAR_10 - VAR_9;
 dma_addr_t VAR_12, VAR_13;

 VAR_6->header.raw = VAR_1 | VAR_2 | VAR_3| (VAR_5->len - 1);

 if (VAR_9){
  FUNC_2(VAR_5, VAR_6->data.dt + (120 - VAR_9),
         VAR_9);
  VAR_6->header.raw |= (128 - VAR_9) << 16;
 }


 VAR_12 = FUNC_1(((void*)0), VAR_7, VAR_10,
     VAR_0);
 VAR_6->data.cat_buf[0].form.start_addr = VAR_12 >> 3;
 VAR_6->data.cat_buf[0].form.len = VAR_10 - 1;

 VAR_13 = FUNC_1(((void*)0), VAR_8, VAR_11,
     VAR_0);
 VAR_6->data.cat_buf[1].form.start_addr = VAR_13 >> 3;
 VAR_6->data.cat_buf[1].form.len = VAR_11 - 1;
}
