
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ end; scalar_t__ start; int parent; } ;
struct umc_dev {TYPE_1__ resource; int dev; } ;


 int FUNC_0 (int *,char*,unsigned long long,unsigned long long,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

int FUNC_4(struct umc_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0->resource.parent, &VAR_0->resource);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev, "can't allocate resource range "
   "%016Lx to %016Lx: %d\n",
   (unsigned long long)VAR_0->resource.start,
   (unsigned long long)VAR_0->resource.end,
   VAR_1);
  goto error_request_resource;
 }

 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1 < 0)
  goto error_device_register;
 return 0;

error_device_register:
 FUNC_2(&VAR_0->resource);
error_request_resource:
 return VAR_1;
}
