
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bus_type {int * dev_attrs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int *) ;

__attribute__((used)) static void FUNC_2(struct bus_type *VAR_0, struct device *VAR_1)
{
 int VAR_2;

 if (VAR_0->dev_attrs) {
  for (VAR_2 = 0; FUNC_0(VAR_0->dev_attrs[VAR_2]); VAR_2++)
   FUNC_1(VAR_1, &VAR_0->dev_attrs[VAR_2]);
 }
}
