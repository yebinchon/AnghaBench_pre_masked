
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_7, u32 VAR_8, u8 *VAR_9)
{
  struct vmxnet3_adapter *VAR_10 = FUNC_2(VAR_7);
 if (VAR_8 == VAR_1) {
  int VAR_11, VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_10->num_tx_queues; VAR_12++) {
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
    FUNC_1(VAR_9, VAR_5[VAR_11].desc,
           VAR_0);
    VAR_9 += VAR_0;
   }
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6);
        VAR_11++) {
    FUNC_1(VAR_9, VAR_6[VAR_11].desc,
           VAR_0);
    VAR_9 += VAR_0;
   }
  }

  for (VAR_12 = 0; VAR_12 < VAR_10->num_rx_queues; VAR_12++) {
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
    FUNC_1(VAR_9, VAR_3[VAR_11].desc,
           VAR_0);
    VAR_9 += VAR_0;
   }
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4);
        VAR_11++) {
    FUNC_1(VAR_9, VAR_4[VAR_11].desc,
           VAR_0);
    VAR_9 += VAR_0;
   }
  }

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++) {
   FUNC_1(VAR_9, VAR_2[VAR_11].desc,
    VAR_0);
   VAR_9 += VAR_0;
  }
 }
}
