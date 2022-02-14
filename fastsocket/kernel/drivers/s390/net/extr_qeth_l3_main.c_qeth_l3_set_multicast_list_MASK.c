
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sniffer; } ;
struct qeth_card {scalar_t__ state; TYPE_1__ options; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qeth_card*,int ) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*) ;
 scalar_t__ FUNC_7 (struct qeth_card*,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_4)
{
 struct qeth_card *VAR_5 = VAR_4->ml_priv;

 FUNC_0(VAR_3, 3, "setmulti");
 if (FUNC_7(VAR_5, VAR_2) &&
     (VAR_5->state != VAR_0))
  return;
 if (!VAR_5->options.sniffer) {
  FUNC_4(VAR_5);
  FUNC_2(VAR_5);



  FUNC_6(VAR_5);
  if (!FUNC_1(VAR_5, VAR_1))
   return;
 }
 FUNC_5(VAR_5);
}
