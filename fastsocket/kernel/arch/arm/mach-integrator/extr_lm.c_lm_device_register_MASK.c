
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_7__ {int * bus; int release; } ;
struct lm_device {TYPE_1__ resource; TYPE_3__ dev; int id; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

int FUNC_5(struct lm_device *VAR_3)
{
 int VAR_4;

 VAR_3->dev.release = VAR_2;
 VAR_3->dev.bus = &VAR_1;

 VAR_4 = FUNC_1(&VAR_3->dev, "lm%d", VAR_3->id);
 if (VAR_4)
  return VAR_4;
 VAR_3->resource.name = FUNC_0(&VAR_3->dev);

 VAR_4 = FUNC_4(&VAR_0, &VAR_3->resource);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_2(&VAR_3->dev);
  if (VAR_4)
   FUNC_3(&VAR_3->resource);
 }
 return VAR_4;
}
