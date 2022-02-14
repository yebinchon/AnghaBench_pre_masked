
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct bus_type {int * drv_attrs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device_driver*,int *) ;
 int FUNC_2 (struct device_driver*,int *) ;

__attribute__((used)) static int FUNC_3(struct bus_type *VAR_0, struct device_driver *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 if (VAR_0->drv_attrs) {
  for (VAR_3 = 0; FUNC_0(VAR_0->drv_attrs[VAR_3]); VAR_3++) {
   VAR_2 = FUNC_1(VAR_1, &VAR_0->drv_attrs[VAR_3]);
   if (VAR_2)
    goto err;
  }
 }
done:
 return VAR_2;
err:
 while (--VAR_3 >= 0)
  FUNC_2(VAR_1, &VAR_0->drv_attrs[VAR_3]);
 goto done;
}
