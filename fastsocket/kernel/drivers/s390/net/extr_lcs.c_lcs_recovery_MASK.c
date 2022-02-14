
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_card {TYPE_1__* dev; struct ccwgroup_device* gdev; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ccwgroup_device*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct lcs_card*,int ) ;
 int FUNC_4 (struct lcs_card*,int ) ;
 int FUNC_5 (struct ccwgroup_device*) ;
 int FUNC_6 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(void *VAR_2)
{
 struct lcs_card *VAR_3;
 struct ccwgroup_device *VAR_4;
        int VAR_5;

 VAR_3 = (struct lcs_card *) VAR_2;

 FUNC_0(4, VAR_1, "recover1");
 if (!FUNC_4(VAR_3, VAR_0))
  return 0;
 FUNC_0(4, VAR_1, "recover2");
 VAR_4 = VAR_3->gdev;
 FUNC_2(&VAR_4->dev,
  "A recovery process has been started for the LCS device\n");
 VAR_5 = FUNC_1(VAR_4, 1);
 VAR_5 = FUNC_5(VAR_4);
 if (!VAR_5)
  FUNC_6("Device %s successfully recovered!\n",
   VAR_3->dev->name);
 else
  FUNC_6("Device %s could not be recovered!\n",
   VAR_3->dev->name);
 FUNC_3(VAR_3, VAR_0);
 return 0;
}
