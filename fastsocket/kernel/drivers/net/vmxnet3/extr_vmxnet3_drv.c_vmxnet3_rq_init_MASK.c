
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * skb; } ;
struct TYPE_7__ {int size; void* gen; int base; scalar_t__ next2proc; } ;
struct vmxnet3_rx_queue {TYPE_4__ rx_ctx; TYPE_3__ comp_ring; TYPE_2__* rx_ring; TYPE_1__** buf_info; } ;
struct vmxnet3_adapter {int rx_buf_per_pkt; void* skb_buf_size; } ;
struct Vmxnet3_RxDesc {int dummy; } ;
struct Vmxnet3_RxCompDesc {int dummy; } ;
struct TYPE_6__ {int size; void* gen; int base; scalar_t__ next2comp; scalar_t__ next2fill; } ;
struct TYPE_5__ {void* len; void* buf_type; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (struct vmxnet3_rx_queue*,int,int,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_2(struct vmxnet3_rx_queue *VAR_5,
  struct vmxnet3_adapter *VAR_6)
{
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_5->rx_ring[0].size; VAR_7++) {


  if (VAR_7 % VAR_6->rx_buf_per_pkt == 0) {
   VAR_5->buf_info[0][VAR_7].buf_type = VAR_4;
   VAR_5->buf_info[0][VAR_7].len = VAR_6->skb_buf_size;
  } else {
   VAR_5->buf_info[0][VAR_7].buf_type = VAR_3;
   VAR_5->buf_info[0][VAR_7].len = VAR_1;
  }
 }
 for (VAR_7 = 0; VAR_7 < VAR_5->rx_ring[1].size; VAR_7++) {
  VAR_5->buf_info[1][VAR_7].buf_type = VAR_3;
  VAR_5->buf_info[1][VAR_7].len = VAR_1;
 }


 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_5->rx_ring[VAR_7].next2fill = VAR_5->rx_ring[VAR_7].next2comp = 0;

  FUNC_0(VAR_5->rx_ring[VAR_7].base, 0, VAR_5->rx_ring[VAR_7].size *
         sizeof(struct Vmxnet3_RxDesc));
  VAR_5->rx_ring[VAR_7].gen = VAR_2;
 }
 if (FUNC_1(VAR_5, 0, VAR_5->rx_ring[0].size - 1,
        VAR_6) == 0) {

  return -VAR_0;
 }
 FUNC_1(VAR_5, 1, VAR_5->rx_ring[1].size - 1, VAR_6);


 VAR_5->comp_ring.next2proc = 0;
 FUNC_0(VAR_5->comp_ring.base, 0, VAR_5->comp_ring.size *
        sizeof(struct Vmxnet3_RxCompDesc));
 VAR_5->comp_ring.gen = VAR_2;


 VAR_5->rx_ctx.skb = ((void*)0);


 return 0;
}
