
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {int * dfs_node; TYPE_1__* disk; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int disk_name; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int *,struct driver_data*,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct driver_data *VAR_4)
{
 if (!VAR_1)
  return -1;

 VAR_4->dfs_node = FUNC_1(VAR_4->disk->disk_name, VAR_1);
 if (FUNC_0(VAR_4->dfs_node)) {
  FUNC_3(&VAR_4->pdev->dev,
   "Error creating node %s under debugfs\n",
      VAR_4->disk->disk_name);
  VAR_4->dfs_node = ((void*)0);
  return -1;
 }

 FUNC_2("flags", VAR_0, VAR_4->dfs_node, VAR_4,
       &VAR_2);
 FUNC_2("registers", VAR_0, VAR_4->dfs_node, VAR_4,
       &VAR_3);

 return 0;
}
