
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; scalar_t__ diagass_support; } ;
struct TYPE_7__ {scalar_t__ supported_funcs; } ;
struct TYPE_6__ {scalar_t__ supported_funcs; } ;
struct TYPE_8__ {TYPE_2__ adp; TYPE_1__ ipa4; } ;
struct qeth_card {TYPE_5__* gdev; TYPE_4__ info; TYPE_3__ options; scalar_t__ read_or_write_problem; int write; int read; int force_alloc_skb; } ;
struct TYPE_10__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*,int ,...) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ,int,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (struct qeth_card*,int ) ;
 int FUNC_12 (struct qeth_card*) ;
 int FUNC_13 (struct qeth_card*) ;
 int FUNC_14 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (struct qeth_card*) ;
 int FUNC_16 (struct qeth_card*) ;
 scalar_t__ FUNC_17 (struct qeth_card*,int ) ;
 int FUNC_18 (struct qeth_card*) ;
 int FUNC_19 (struct qeth_card*,int) ;
 int FUNC_20 (struct qeth_card*,int ) ;
 int FUNC_21 (struct qeth_card*) ;
 int FUNC_22 (struct qeth_card*) ;

int FUNC_23(struct qeth_card *VAR_8)
{
 int VAR_9 = 3;
 int VAR_10;

 FUNC_4(VAR_5, 2, "hrdsetup");
 FUNC_6(&VAR_8->force_alloc_skb, 0);
 FUNC_13(VAR_8);
retry:
 if (VAR_9 < 3) {
  FUNC_3(2, "%s Retrying to do IDX activates.\n",
   FUNC_9(&VAR_8->gdev->dev));
  FUNC_7(FUNC_0(VAR_8));
  FUNC_7(FUNC_2(VAR_8));
  FUNC_7(FUNC_1(VAR_8));
  FUNC_8(FUNC_1(VAR_8));
  FUNC_8(FUNC_2(VAR_8));
  FUNC_8(FUNC_0(VAR_8));
 }
 VAR_10 = FUNC_19(VAR_8, VAR_8->info.type != VAR_3);
 if (VAR_10 == -VAR_0) {
  FUNC_4(VAR_5, 2, "break1");
  return VAR_10;
 } else if (VAR_10) {
  FUNC_5(VAR_5, 2, "1err%d", VAR_10);
  if (--VAR_9 < 0)
   goto out;
  else
   goto retry;
 }
 FUNC_12(VAR_8);
 FUNC_16(VAR_8);
 FUNC_15(VAR_8);
 VAR_10 = FUNC_14(&VAR_8->read, VAR_6);
 if (VAR_10 == -VAR_0) {
  FUNC_4(VAR_5, 2, "break2");
  return VAR_10;
 } else if (VAR_10) {
  FUNC_5(VAR_5, 2, "3err%d", VAR_10);
  if (--VAR_9 < 0)
   goto out;
  else
   goto retry;
 }
 VAR_10 = FUNC_14(&VAR_8->write, VAR_7);
 if (VAR_10 == -VAR_0) {
  FUNC_4(VAR_5, 2, "break3");
  return VAR_10;
 } else if (VAR_10) {
  FUNC_5(VAR_5, 2, "4err%d", VAR_10);
  if (--VAR_9 < 0)
   goto out;
  else
   goto retry;
 }
 VAR_8->read_or_write_problem = 0;
 VAR_10 = FUNC_18(VAR_8);
 if (VAR_10) {
  FUNC_5(VAR_5, 2, "5err%d", VAR_10);
  goto out;
 }

 VAR_8->options.ipa4.supported_funcs = 0;
 VAR_8->options.adp.supported_funcs = 0;
 VAR_8->info.diagass_support = 0;
 FUNC_20(VAR_8, VAR_4);
 if (FUNC_17(VAR_8, VAR_1))
  FUNC_21(VAR_8);
 if (FUNC_11(VAR_8, VAR_2))
  FUNC_22(VAR_8);
 return 0;
out:
 FUNC_10(&VAR_8->gdev->dev, "The qeth device driver failed to recover "
  "an error on the device\n");
 FUNC_3(2, "%s Initialization in hardsetup failed! rc=%d\n",
  FUNC_9(&VAR_8->gdev->dev), VAR_10);
 return VAR_10;
}
