
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct cx_drv {int (* probe ) (struct cx_dev*,struct cx_device_id const*) ;int id_table; } ;
struct cx_device_id {int dummy; } ;
struct cx_dev {struct cx_drv* driver; } ;


 struct cx_device_id* FUNC_0 (int ,struct cx_dev*) ;
 int FUNC_1 (struct cx_dev*,struct cx_device_id const*) ;
 struct cx_dev* FUNC_2 (struct device*) ;
 struct cx_drv* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 const struct cx_device_id *VAR_1;
 struct cx_drv *VAR_2 = FUNC_3(VAR_0->driver);
 struct cx_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;

 if (!VAR_3->driver && VAR_2->probe) {
  VAR_1 = FUNC_0(VAR_2->id_table, VAR_3);
  if (VAR_1) {
   if ((VAR_4 = VAR_2->probe(VAR_3, VAR_1)) < 0)
    return VAR_4;
   else
    VAR_3->driver = VAR_2;
  }
 }

 return VAR_4;
}
