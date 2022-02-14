
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ type; int mac_bits; } ;
struct qeth_card {scalar_t__ state; TYPE_2__ write; TYPE_2__ read; TYPE_1__ info; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int,struct qeth_card**,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qeth_card*,int ) ;
 int FUNC_10 (struct qeth_card*,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct qeth_card *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 FUNC_1(VAR_7 , 2, "stopcard");
 FUNC_0(VAR_7, 2, &VAR_8, sizeof(void *));

 FUNC_10(VAR_8, 0, 1);
 if (VAR_8->read.state == VAR_4 &&
     VAR_8->write.state == VAR_4 &&
     (VAR_8->state == VAR_3)) {
  if (VAR_9 &&
      VAR_8->info.type != VAR_5) {
   FUNC_8(VAR_8->dev);
  } else {
   FUNC_11();
   FUNC_2(VAR_8->dev);
   FUNC_12();
  }
  VAR_8->info.mac_bits &= ~VAR_6;
  VAR_8->state = VAR_2;
 }
 if (VAR_8->state == VAR_2) {
  FUNC_7(VAR_8, 0);
  FUNC_4(VAR_8);
  VAR_8->state = VAR_1;
 }
 if (VAR_8->state == VAR_1) {
  FUNC_9(VAR_8, 0);
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
