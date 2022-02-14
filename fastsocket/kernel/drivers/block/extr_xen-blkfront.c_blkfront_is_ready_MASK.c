
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct blkfront_info {scalar_t__ xbdev; scalar_t__ is_ready; } ;


 struct blkfront_info* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct xenbus_device *VAR_0)
{
 struct blkfront_info *VAR_1 = FUNC_0(&VAR_0->dev);

 return VAR_1->is_ready && VAR_1->xbdev;
}
