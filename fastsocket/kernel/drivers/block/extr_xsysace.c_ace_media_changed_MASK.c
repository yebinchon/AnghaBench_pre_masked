
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct ace_device* private_data; } ;
struct ace_device {int media_change; int dev; } ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0)
{
 struct ace_device *VAR_1 = VAR_0->private_data;
 FUNC_0(VAR_1->dev, "ace_media_changed(): %i\n", VAR_1->media_change);

 return VAR_1->media_change;
}
