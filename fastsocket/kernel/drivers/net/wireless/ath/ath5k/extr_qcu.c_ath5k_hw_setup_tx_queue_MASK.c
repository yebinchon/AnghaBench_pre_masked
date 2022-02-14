
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath5k_txq_info {int tqi_type; } ;
struct TYPE_4__ {int q_tx_num; } ;
struct TYPE_5__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {int ah_txq_status; TYPE_3__* ah_txq; TYPE_2__ ah_capabilities; } ;
typedef enum ath5k_tx_queue { ____Placeholder_ath5k_tx_queue } ath5k_tx_queue ;
struct TYPE_6__ {int tqi_type; } ;


 int FUNC_0 (int ,unsigned int) ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int FUNC_1 (struct ath5k_hw*,unsigned int,struct ath5k_txq_info*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

int
FUNC_3(struct ath5k_hw *VAR_9, enum ath5k_tx_queue VAR_10,
  struct ath5k_txq_info *VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;





 if (VAR_9->ah_capabilities.cap_queues.q_tx_num == 2) {
  switch (VAR_10) {
  case 129:
   VAR_12 = VAR_5;
   break;
  case 131:
  case 130:
   VAR_12 = VAR_4;
   break;
  default:
   return -VAR_8;
  }
 } else {
  switch (VAR_10) {
  case 129:
   for (VAR_12 = VAR_3;
    VAR_9->ah_txq[VAR_12].tqi_type !=
    VAR_7; VAR_12++) {

    if (VAR_12 > VAR_2)
     return -VAR_8;
   }
   break;
  case 128:
   VAR_12 = VAR_6;
   break;
  case 131:
   VAR_12 = VAR_0;
   break;
  case 130:
   VAR_12 = VAR_1;
   break;
  default:
   return -VAR_8;
  }
 }




 FUNC_2(&VAR_9->ah_txq[VAR_12], 0, sizeof(struct ath5k_txq_info));
 VAR_9->ah_txq[VAR_12].tqi_type = VAR_10;

 if (VAR_11 != ((void*)0)) {
  VAR_11->tqi_type = VAR_10;
  VAR_13 = FUNC_1(VAR_9, VAR_12, VAR_11);
  if (VAR_13)
   return VAR_13;
 }






 FUNC_0(VAR_9->ah_txq_status, VAR_12);

 return VAR_12;
}
