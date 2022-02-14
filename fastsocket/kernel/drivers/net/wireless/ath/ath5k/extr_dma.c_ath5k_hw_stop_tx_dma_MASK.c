
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int q_tx_num; } ;
struct TYPE_5__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {scalar_t__ ah_version; int ah_mac_version; TYPE_3__* ah_txq; TYPE_2__ ah_capabilities; } ;
struct TYPE_6__ {int tqi_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct ath5k_hw*,int ,int) ;
 int FUNC_4 (struct ath5k_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct ath5k_hw*,int ,unsigned int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct ath5k_hw*,int ,unsigned int) ;
 int VAR_18 ;
 int VAR_19 ;



 int VAR_20 ;
 int FUNC_8 (struct ath5k_hw*,int ,char*,unsigned int,...) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 (struct ath5k_hw*,int ) ;
 int FUNC_10 (struct ath5k_hw*,int,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct ath5k_hw *VAR_24, unsigned int VAR_25)
{
 unsigned int VAR_26 = 40;
 u32 VAR_27, VAR_28;

 FUNC_0(VAR_25, VAR_24->ah_capabilities.cap_queues.q_tx_num);


 if (VAR_24->ah_txq[VAR_25].tqi_type == VAR_20)
  return -VAR_23;

 if (VAR_24->ah_version == VAR_0) {
  VAR_27 = FUNC_9(VAR_24, VAR_2);




  switch (VAR_24->ah_txq[VAR_25].tqi_type) {
  case 128:
   VAR_27 |= VAR_3 & ~VAR_5;
   break;
  case 130:
  case 129:

   VAR_27 |= VAR_4 & ~VAR_4;
   FUNC_10(VAR_24, 0, VAR_1);
   break;
  default:
   return -VAR_23;
  }


  FUNC_10(VAR_24, VAR_27, VAR_2);
  FUNC_9(VAR_24, VAR_2);
 } else {





  FUNC_4(VAR_24, FUNC_1(VAR_25),
     VAR_8);




  FUNC_7(VAR_24, VAR_10, VAR_25);


  for (VAR_26 = 1000; VAR_26 > 0 &&
  (FUNC_5(VAR_24, VAR_11, VAR_25) != 0);
  VAR_26--)
   FUNC_11(100);

  if (FUNC_5(VAR_24, VAR_11, VAR_25))
   FUNC_8(VAR_24, VAR_21,
    "queue %i didn't stop !\n", VAR_25);


  VAR_26 = 1000;
  do {
   VAR_28 = FUNC_9(VAR_24,
    FUNC_2(VAR_25)) &
    VAR_9;
   FUNC_11(100);
  } while (--VAR_26 && VAR_28);



  if (VAR_24->ah_mac_version >= (VAR_18 >> 4) &&
      VAR_28) {

   FUNC_10(VAR_24,
    FUNC_6(100, VAR_17)|
    FUNC_6(10, VAR_16),
    VAR_15);


   FUNC_10(VAR_24,
    VAR_14 |
    FUNC_6(FUNC_9(VAR_24,
      VAR_19) >> 10,
      VAR_13),
    VAR_12);


   FUNC_4(VAR_24, VAR_6,
     VAR_7);


   FUNC_11(400);
   FUNC_3(VAR_24, VAR_12,
      VAR_14);


   VAR_26 = 100;
   do {
    VAR_28 = FUNC_9(VAR_24,
     FUNC_2(VAR_25)) &
     VAR_9;
    FUNC_11(100);
   } while (--VAR_26 && VAR_28);

   FUNC_3(VAR_24, VAR_6,
     VAR_7);

   if (VAR_28)
    FUNC_8(VAR_24, VAR_21,
     "quiet mechanism didn't work q:%i !\n",
     VAR_25);
  }




  FUNC_3(VAR_24, FUNC_1(VAR_25),
     VAR_8);


  FUNC_10(VAR_24, 0, VAR_10);
  if (VAR_28) {
   FUNC_8(VAR_24, VAR_21,
     "tx dma didn't stop (q:%i, frm:%i) !\n",
     VAR_25, VAR_28);
   return -VAR_22;
  }
 }


 return 0;
}
