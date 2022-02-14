
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_driver {int (* probe ) (struct zorro_dev*,struct zorro_device_id const*) ;int id_table; } ;
struct zorro_device_id {int dummy; } ;
struct zorro_dev {struct zorro_driver* driver; } ;
struct device {int driver; } ;


 int FUNC_0 (struct zorro_dev*,struct zorro_device_id const*) ;
 struct zorro_dev* FUNC_1 (struct device*) ;
 struct zorro_driver* FUNC_2 (int ) ;
 struct zorro_device_id* FUNC_3 (int ,struct zorro_dev*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 int VAR_1 = 0;
 struct zorro_driver *VAR_2 = FUNC_2(VAR_0->driver);
 struct zorro_dev *VAR_3 = FUNC_1(VAR_0);

 if (!VAR_3->driver && VAR_2->probe) {
  const struct zorro_device_id *VAR_4;

  VAR_4 = FUNC_3(VAR_2->id_table, VAR_3);
  if (VAR_4)
   VAR_1 = VAR_2->probe(VAR_3, VAR_4);
  if (VAR_1 >= 0) {
   VAR_3->driver = VAR_2;
   VAR_1 = 0;
  }
 }
 return VAR_1;
}
