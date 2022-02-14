
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bus_type {int * dev_attrs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,int *) ;

__attribute__((used)) static int FUNC_3(struct bus_type *VAR_0, struct device *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 if (!VAR_0->dev_attrs)
  return 0;

 for (VAR_3 = 0; FUNC_0(VAR_0->dev_attrs[VAR_3]); VAR_3++) {
  VAR_2 = FUNC_1(VAR_1, &VAR_0->dev_attrs[VAR_3]);
  if (VAR_2) {
   while (--VAR_3 >= 0)
    FUNC_2(VAR_1, &VAR_0->dev_attrs[VAR_3]);
   break;
  }
 }
 return VAR_2;
}
