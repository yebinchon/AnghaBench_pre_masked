
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ib_uverbs_device {scalar_t__ devnum; int comp; int ref; TYPE_1__ cdev; int dev; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 struct ib_uverbs_device* FUNC_4 (struct ib_device*,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct ib_uverbs_device*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ib_device *VAR_6)
{
 struct ib_uverbs_device *VAR_7 = FUNC_4(VAR_6, &VAR_5);

 if (!VAR_7)
  return;

 FUNC_2(VAR_7->dev, ((void*)0));
 FUNC_3(VAR_4, VAR_7->cdev.dev);
 FUNC_0(&VAR_7->cdev);

 if (VAR_7->devnum < VAR_0)
  FUNC_1(VAR_7->devnum, VAR_1);
 else
  FUNC_1(VAR_7->devnum - VAR_0, VAR_3);

 FUNC_6(&VAR_7->ref, VAR_2);
 FUNC_7(&VAR_7->comp);
 FUNC_5(VAR_7);
}
