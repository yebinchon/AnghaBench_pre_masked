
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {scalar_t__ promisc_mode; } ;
struct TYPE_4__ {scalar_t__ sniffer; } ;
struct qeth_card {scalar_t__ state; TYPE_3__ write; TYPE_3__ read; scalar_t__ dev; TYPE_2__ info; TYPE_1__ options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,struct qeth_card**,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*,int ) ;
 int FUNC_8 (struct qeth_card*,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct qeth_card*,int ) ;
 int FUNC_11 (struct qeth_card*,int ,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct qeth_card *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 FUNC_1(VAR_6, 2, "stopcard");
 FUNC_0(VAR_6, 2, &VAR_8, sizeof(void *));

 FUNC_11(VAR_8, 0, 1);
 if (VAR_8->options.sniffer &&
     (VAR_8->info.promisc_mode == VAR_7))
  FUNC_7(VAR_8, VAR_5);
 if (VAR_8->read.state == VAR_4 &&
     VAR_8->write.state == VAR_4 &&
     (VAR_8->state == VAR_3)) {
  if (VAR_9)
   FUNC_9(VAR_8->dev);
  else {
   if (VAR_8->dev) {
    FUNC_12();
    FUNC_2(VAR_8->dev);
    FUNC_13();
   }
  }
  VAR_8->state = VAR_2;
 }
 if (VAR_8->state == VAR_2) {
  FUNC_8(VAR_8, 1);
  FUNC_4(VAR_8);
  VAR_8->state = VAR_1;
 }
 if (VAR_8->state == VAR_1) {
  FUNC_10(VAR_8, 0);
  FUNC_5(VAR_8);
  FUNC_6(VAR_8);
  VAR_8->state = VAR_0;
 }
 if (VAR_8->state == VAR_0) {
  FUNC_3(&VAR_8->read);
  FUNC_3(&VAR_8->write);
 }
 return VAR_10;
}
