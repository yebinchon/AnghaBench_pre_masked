
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct spider_net_card {TYPE_1__* netdev; TYPE_2__* pdev; } ;
struct firmware {int size; int const* data; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct spider_net_card*) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct firmware*) ;
 scalar_t__ FUNC_5 (struct firmware const**,int ,int *) ;
 int FUNC_6 (struct spider_net_card*,int const*) ;

__attribute__((used)) static int
FUNC_7(struct spider_net_card *VAR_3)
{
 struct firmware *VAR_4 = ((void*)0);
 struct device_node *VAR_5;
 const u8 *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;
 int VAR_8;

 if (FUNC_5((const struct firmware **)&VAR_4,
        VAR_2, &VAR_3->pdev->dev) == 0) {
  if ( (VAR_4->size != VAR_1) &&
       FUNC_1(VAR_3) ) {
   FUNC_0(&VAR_3->netdev->dev,
          "Incorrect size of spidernet firmware in " "filesystem. Looking in host firmware...\n");

   goto try_host_fw;
  }
  VAR_7 = FUNC_6(VAR_3, VAR_4->data);

  FUNC_4(VAR_4);
  if (VAR_7)
   goto try_host_fw;

  goto done;
 }

try_host_fw:
 VAR_5 = FUNC_3(VAR_3->pdev);
 if (!VAR_5)
  goto out_err;

 VAR_6 = FUNC_2(VAR_5, "firmware", &VAR_8);
 if (!VAR_6)
  goto out_err;

 if ( (VAR_8 != VAR_1) &&
      FUNC_1(VAR_3) ) {
  FUNC_0(&VAR_3->netdev->dev,
         "Incorrect size of spidernet firmware in host firmware\n");
  goto done;
 }

 VAR_7 = FUNC_6(VAR_3, VAR_6);

done:
 return VAR_7;
out_err:
 if (FUNC_1(VAR_3))
  FUNC_0(&VAR_3->netdev->dev,
         "Couldn't find spidernet firmware in filesystem " "or host firmware\n");

 return VAR_7;
}
