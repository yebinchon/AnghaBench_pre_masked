
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int csum_mask; } ;
struct qeth_card {TYPE_2__* gdev; TYPE_1__ info; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct qeth_card*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_2,
       VAR_1, 0);
 if (VAR_4) {
  FUNC_1(&VAR_3->gdev->dev, "Starting HW checksumming for %s "
   "failed, using SW checksumming\n",
   FUNC_0(VAR_3));
  return VAR_4;
 }
 VAR_4 = FUNC_2(VAR_3, VAR_2,
       VAR_0,
       VAR_3->info.csum_mask);
 if (VAR_4) {
  FUNC_1(&VAR_3->gdev->dev, "Enabling HW checksumming for %s "
   "failed, using SW checksumming\n",
   FUNC_0(VAR_3));
  return VAR_4;
 }
 return 0;
}
