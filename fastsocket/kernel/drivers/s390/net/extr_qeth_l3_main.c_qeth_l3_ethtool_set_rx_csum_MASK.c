
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int checksum_type; } ;
struct qeth_card {scalar_t__ state; int gdev; TYPE_1__ options; } ;
struct net_device {struct qeth_card* ml_priv; } ;
typedef enum qeth_checksum_types { ____Placeholder_qeth_checksum_types } qeth_checksum_types ;
typedef enum qeth_card_states { ____Placeholder_qeth_card_states } qeth_card_states ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, u32 VAR_6)
{
 struct qeth_card *VAR_7 = VAR_5->ml_priv;
 enum qeth_card_states VAR_8;
 enum qeth_checksum_types VAR_9;

 if ((VAR_7->state != VAR_1) &&
     (VAR_7->state != VAR_0))
  return -VAR_2;

 if (VAR_6)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_4;

 if (VAR_7->options.checksum_type != VAR_9) {
  VAR_8 = VAR_7->state;
  if (VAR_7->state == VAR_1)
   FUNC_0(VAR_7->gdev, 1);
  VAR_7->options.checksum_type = VAR_9;
  if (VAR_8 == VAR_1)
   FUNC_1(VAR_7->gdev, 1);
 }
 return 0;
}
