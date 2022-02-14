
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_12__ {int ctrl_reg; int tx_state; TYPE_3__* hdev; int txq; TYPE_5__* p_dev; } ;
typedef TYPE_4__ bluecard_info_t ;
struct TYPE_14__ {int pkt_type; } ;
struct TYPE_9__ {unsigned int BasePort1; } ;
struct TYPE_13__ {TYPE_1__ io; } ;
struct TYPE_10__ {int byte_tx; } ;
struct TYPE_11__ {TYPE_2__ stat; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (unsigned int,unsigned int,int ,int) ;
 TYPE_6__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (unsigned long,int *) ;
 int FUNC_7 (unsigned long,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (unsigned char,scalar_t__) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (unsigned long,int *) ;
 struct sk_buff* FUNC_16 (int *) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_19 (unsigned long,int *) ;
 scalar_t__ FUNC_20 (unsigned long,int *) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_21(bluecard_info_t *VAR_19)
{
 if (!VAR_19) {
  FUNC_0("Unknown device");
  return;
 }

 if (!FUNC_20(VAR_15, &(VAR_19->tx_state)))
  return;

 if (FUNC_19(VAR_14, &(VAR_19->tx_state))) {
  FUNC_15(VAR_16, &(VAR_19->tx_state));
  return;
 }

 do {
  register unsigned int VAR_20 = VAR_19->p_dev->io.BasePort1;
  register unsigned int VAR_21;
  register unsigned char VAR_22;
  register unsigned long VAR_23;
  register struct sk_buff *VAR_24;
  register int VAR_25;

  FUNC_7(VAR_16, &(VAR_19->tx_state));

  if (!FUNC_12(VAR_19->p_dev))
   return;

  if (FUNC_20(VAR_11, &(VAR_19->tx_state))) {
   if (!FUNC_20(VAR_13, &(VAR_19->tx_state)))
    break;
   VAR_21 = 0x10;
   VAR_22 = VAR_3;
   VAR_23 = VAR_13;
  } else {
   if (!FUNC_20(VAR_12, &(VAR_19->tx_state)))
    break;
   VAR_21 = 0x00;
   VAR_22 = VAR_2;
   VAR_23 = VAR_12;
  }

  if (!(VAR_24 = FUNC_16(&(VAR_19->txq))))
   break;

  if (FUNC_5(VAR_24)->pkt_type & 0x80) {

   VAR_19->ctrl_reg |= VAR_9;
   FUNC_10(VAR_19->ctrl_reg, VAR_20 + VAR_4);
  }


  FUNC_3(VAR_19);


  VAR_25 = FUNC_4(VAR_20, VAR_21, VAR_24->data, VAR_24->len);


  FUNC_11(VAR_22, VAR_20 + VAR_1);


  FUNC_7(VAR_23, &(VAR_19->tx_state));

  if (FUNC_5(VAR_24)->pkt_type & 0x80) {
   FUNC_1(VAR_18);
   FUNC_2(VAR_17);

   unsigned char VAR_26;

   switch (FUNC_5(VAR_24)->pkt_type) {
   case 129:
    VAR_26 = VAR_7;
    break;
   case 130:
    VAR_26 = VAR_6;
    break;
   case 131:
    VAR_26 = VAR_5;
    break;
   case 128:

   default:
    VAR_26 = VAR_8;
    break;
   }


   FUNC_13(&VAR_18, &VAR_17, VAR_10);
   FUNC_14(VAR_0/10);
   FUNC_8(&VAR_18, &VAR_17);


   VAR_19->ctrl_reg &= ~0x03;
   VAR_19->ctrl_reg |= VAR_26;
   FUNC_10(VAR_19->ctrl_reg, VAR_20 + VAR_4);


   VAR_19->ctrl_reg &= ~VAR_9;
   FUNC_10(VAR_19->ctrl_reg, VAR_20 + VAR_4);


   FUNC_13(&VAR_18, &VAR_17, VAR_10);
   FUNC_14(VAR_0);
   FUNC_8(&VAR_18, &VAR_17);
  }

  if (VAR_25 == VAR_24->len) {
   FUNC_9(VAR_24);
  } else {
   FUNC_17(VAR_24, VAR_25);
   FUNC_18(&(VAR_19->txq), VAR_24);
  }

  VAR_19->hdev->stat.byte_tx += VAR_25;


  FUNC_6(VAR_11, &(VAR_19->tx_state));

 } while (FUNC_20(VAR_16, &(VAR_19->tx_state)));

 FUNC_7(VAR_14, &(VAR_19->tx_state));
}
