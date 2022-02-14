
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_10__ {int tx_state; TYPE_3__* hdev; int txq; TYPE_5__* p_dev; } ;
typedef TYPE_4__ btuart_info_t ;
struct TYPE_7__ {unsigned int BasePort1; } ;
struct TYPE_11__ {TYPE_1__ io; } ;
struct TYPE_8__ {int byte_tx; } ;
struct TYPE_9__ {TYPE_2__ stat; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(btuart_info_t *VAR_2)
{
 if (!VAR_2) {
  FUNC_0("Unknown device");
  return;
 }

 if (FUNC_9(VAR_0, &(VAR_2->tx_state))) {
  FUNC_5(VAR_1, &(VAR_2->tx_state));
  return;
 }

 do {
  register unsigned int VAR_3 = VAR_2->p_dev->io.BasePort1;
  register struct sk_buff *VAR_4;
  register int VAR_5;

  FUNC_2(VAR_1, &(VAR_2->tx_state));

  if (!FUNC_4(VAR_2->p_dev))
   return;

  if (!(VAR_4 = FUNC_6(&(VAR_2->txq))))
   break;


  VAR_5 = FUNC_1(VAR_3, 16, VAR_4->data, VAR_4->len);
  FUNC_5(VAR_1, &(VAR_2->tx_state));

  if (VAR_5 == VAR_4->len) {
   FUNC_3(VAR_4);
  } else {
   FUNC_7(VAR_4, VAR_5);
   FUNC_8(&(VAR_2->txq), VAR_4);
  }

  VAR_2->hdev->stat.byte_tx += VAR_5;

 } while (FUNC_10(VAR_1, &(VAR_2->tx_state)));

 FUNC_2(VAR_0, &(VAR_2->tx_state));
}
