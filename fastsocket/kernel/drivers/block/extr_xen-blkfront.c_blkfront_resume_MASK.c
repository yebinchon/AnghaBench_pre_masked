
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; int dev; } ;
struct blkfront_info {scalar_t__ connected; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct blkfront_info*,int) ;
 int FUNC_1 (struct blkfront_info*) ;
 int FUNC_2 (int *,char*,int ) ;
 struct blkfront_info* FUNC_3 (int *) ;
 int FUNC_4 (struct xenbus_device*,struct blkfront_info*) ;

__attribute__((used)) static int FUNC_5(struct xenbus_device *VAR_2)
{
 struct blkfront_info *VAR_3 = FUNC_3(&VAR_2->dev);
 int VAR_4;

 FUNC_2(&VAR_2->dev, "blkfront_resume: %s\n", VAR_2->nodename);

 FUNC_0(VAR_3, VAR_3->connected == VAR_0);

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_3->connected == VAR_1 && !VAR_4)
  VAR_4 = FUNC_1(VAR_3);

 return VAR_4;
}
