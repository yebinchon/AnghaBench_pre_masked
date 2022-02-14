
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct iio_dev {TYPE_3__* event_attrs; TYPE_2__ dev; TYPE_1__* event_conf_attrs; } ;
struct attribute {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {struct attribute** attrs; } ;


 int FUNC_0 (int *,struct attribute*,int ) ;
 int FUNC_1 (int *,struct attribute*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct iio_dev *VAR_0, int VAR_1)
{
 int VAR_2;

 struct attribute **VAR_3, **VAR_4;

 if (VAR_0->event_conf_attrs && VAR_0->event_conf_attrs[VAR_1].attrs) {
  VAR_3 = VAR_0->event_conf_attrs[VAR_1].attrs;
  while (*VAR_3) {
   VAR_2 = FUNC_0(&VAR_0->dev.kobj,
             *VAR_3,
             VAR_0
             ->event_attrs[VAR_1].name);
   if (VAR_2)
    goto error_ret;
   VAR_3++;
  }
 }
 return 0;

error_ret:
 VAR_4 = VAR_0->event_conf_attrs[VAR_1].attrs;
 while (VAR_4 != VAR_3) {
   FUNC_1(&VAR_0->dev.kobj,
          *VAR_4,
          VAR_0->event_attrs[VAR_1].name);
  VAR_4++;
 }

 return VAR_2;
}
