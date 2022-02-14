
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int parent; int * class; } ;
struct srp_host {TYPE_2__ dev; int port; struct srp_device* srp_dev; int released; int target_lock; int target_list; } ;
struct srp_device {TYPE_1__* dev; } ;
struct TYPE_6__ {int name; int dma_device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct srp_host*) ;
 struct srp_host* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;

__attribute__((used)) static struct srp_host *FUNC_9(struct srp_device *VAR_5, u8 VAR_6)
{
 struct srp_host *VAR_7;

 VAR_7 = FUNC_7(sizeof *VAR_7, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 FUNC_0(&VAR_7->target_list);
 FUNC_8(&VAR_7->target_lock);
 FUNC_5(&VAR_7->released);
 VAR_7->srp_dev = VAR_5;
 VAR_7->port = VAR_6;

 VAR_7->dev.class = &VAR_4;
 VAR_7->dev.parent = VAR_5->dev->dma_device;
 FUNC_1(&VAR_7->dev, "srp-%s-%d", VAR_5->dev->name, VAR_6);

 if (FUNC_3(&VAR_7->dev))
  goto free_host;
 if (FUNC_2(&VAR_7->dev, &VAR_1))
  goto err_class;
 if (FUNC_2(&VAR_7->dev, &VAR_2))
  goto err_class;
 if (FUNC_2(&VAR_7->dev, &VAR_3))
  goto err_class;

 return VAR_7;

err_class:
 FUNC_4(&VAR_7->dev);

free_host:
 FUNC_6(VAR_7);

 return ((void*)0);
}
