
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int start; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct amba_device {TYPE_3__ res; TYPE_2__ dev; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(struct amba_device *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4;

 if (!VAR_2)
  VAR_2 = VAR_1->dev.driver->name;

 VAR_4 = FUNC_1(&VAR_1->res);

 if (!FUNC_0(VAR_1->res.start, VAR_4, VAR_2))
  VAR_3 = -VAR_0;

 return VAR_3;
}
