
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ccwdev; } ;
struct TYPE_3__ {int ccwdev; } ;
struct lcs_card {int state; TYPE_2__ write; TYPE_1__ read; int dev; } ;
struct ccwgroup_device {int dev; } ;
typedef enum lcs_dev_states { ____Placeholder_lcs_dev_states } lcs_dev_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct lcs_card**,int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int,int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct lcs_card* FUNC_4 (int *) ;
 int FUNC_5 (struct lcs_card*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct lcs_card*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct ccwgroup_device *VAR_6, int VAR_7)
{
 struct lcs_card *VAR_8;
 enum lcs_dev_states VAR_9;
 int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 FUNC_1(3, VAR_5, "shtdndev");
 VAR_8 = FUNC_4(&VAR_6->dev);
 if (!VAR_8)
  return -VAR_2;
 if (VAR_7 == 0) {
  FUNC_5(VAR_8, 0);
  if (FUNC_7(VAR_8, VAR_4))
   return -VAR_3;
 }
 FUNC_0(3, VAR_5, &VAR_8, sizeof(void*));
 VAR_9 = VAR_8->state;

 VAR_10 = FUNC_6(VAR_8->dev);
 VAR_11 = FUNC_3(VAR_8->read.ccwdev);
 VAR_12 = FUNC_3(VAR_8->write.ccwdev);
 if (!VAR_10)
  VAR_10 = (VAR_11) ? VAR_11 : VAR_12;
 if (VAR_10)
  FUNC_2(3, VAR_5, "1err:%d", VAR_10);
 if (VAR_9 == VAR_1) {
  VAR_8->state = VAR_0;
 }
 return 0;
}
