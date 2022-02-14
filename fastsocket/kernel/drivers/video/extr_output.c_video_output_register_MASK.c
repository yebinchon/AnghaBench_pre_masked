
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct output_properties {int dummy; } ;
struct TYPE_4__ {struct device* parent; int * class; } ;
struct output_device {TYPE_1__ dev; struct output_properties* props; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct output_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct output_device*) ;
 struct output_device* FUNC_5 (int,int ) ;
 int VAR_2 ;

struct output_device *FUNC_6(const char *VAR_3,
 struct device *VAR_4,
 void *VAR_5,
 struct output_properties *VAR_6)
{
 struct output_device *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_5(sizeof(struct output_device),VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto error_return;
 }
 VAR_7->props = VAR_6;
 VAR_7->dev.class = &VAR_2;
 VAR_7->dev.parent = VAR_4;
 FUNC_2(&VAR_7->dev, VAR_3);
 FUNC_1(&VAR_7->dev, VAR_5);
 VAR_8 = FUNC_3(&VAR_7->dev);
 if (VAR_8) {
  FUNC_4(VAR_7);
  goto error_return;
 }
 return VAR_7;

error_return:
 return FUNC_0(VAR_8);
}
