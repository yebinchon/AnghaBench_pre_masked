
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stir_cb {TYPE_2__* netdev; int io_buf; int usbdev; int speed; scalar_t__ receiving; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {int tx_errors; int tx_bytes; int tx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; int trans_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct stir_cb*,unsigned int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,scalar_t__,unsigned int) ;
 int FUNC_4 (struct stir_cb*) ;
 int FUNC_5 (struct stir_cb*,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,unsigned int,int *,int ) ;
 int FUNC_7 (int ,int) ;
 unsigned int FUNC_8 (struct sk_buff*,int ) ;
 unsigned int FUNC_9 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_10(struct stir_cb *VAR_2, struct sk_buff *VAR_3)
{
 unsigned VAR_4;
 int VAR_5 = 0;


 if (VAR_2->receiving) {
  FUNC_4(VAR_2);
  FUNC_5(VAR_2, FUNC_1(VAR_3));
  VAR_5 = 1;
 }

 if (FUNC_2(VAR_2->speed))
  VAR_4 = FUNC_8(VAR_3, VAR_2->io_buf);
 else
  VAR_4 = FUNC_9(VAR_3, VAR_2->io_buf);


 if (!VAR_5)
  FUNC_0(VAR_2, VAR_4);

 VAR_2->netdev->stats.tx_packets++;
 VAR_2->netdev->stats.tx_bytes += VAR_3->len;
 VAR_2->netdev->trans_start = VAR_1;
 FUNC_3("send %d (%d)\n", VAR_3->len, VAR_4);

 if (FUNC_6(VAR_2->usbdev, FUNC_7(VAR_2->usbdev, 1),
    VAR_2->io_buf, VAR_4,
    ((void*)0), VAR_0))
  VAR_2->netdev->stats.tx_errors++;
}
