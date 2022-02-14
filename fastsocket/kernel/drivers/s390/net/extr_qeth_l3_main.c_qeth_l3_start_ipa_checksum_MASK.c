
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ checksum_type; } ;
struct qeth_card {TYPE_2__* gdev; TYPE_1__ options; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_3, 3, "strtcsum");

 if (VAR_4->options.checksum_type == VAR_1) {
  FUNC_2(&VAR_4->gdev->dev,
   "Using no checksumming on %s.\n",
   FUNC_0(VAR_4));
  return 0;
 }
 if (VAR_4->options.checksum_type == VAR_2) {
  FUNC_2(&VAR_4->gdev->dev,
   "Using SW checksumming on %s.\n",
   FUNC_0(VAR_4));
  return 0;
 }
 if (!FUNC_3(VAR_4, VAR_0)) {
  FUNC_2(&VAR_4->gdev->dev,
   "Inbound HW Checksumming not "
   "supported on %s,\ncontinuing "
   "using Inbound SW Checksumming\n",
   FUNC_0(VAR_4));
  VAR_4->options.checksum_type = VAR_2;
  return 0;
 }
 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  FUNC_2(&VAR_4->gdev->dev,
   "HW Checksumming (inbound) enabled\n");

 return VAR_5;
}
