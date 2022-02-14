
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {scalar_t__ dev; } ;
struct ssb_bus {int nr_devices; struct ssb_device* devices; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ssb_bus *VAR_0)
{
 struct ssb_device *VAR_1;
 int VAR_2;

 for (VAR_2 = VAR_0->nr_devices - 1; VAR_2 >= 0; VAR_2--) {
  VAR_1 = &(VAR_0->devices[VAR_2]);
  if (VAR_1->dev)
   FUNC_0(VAR_1->dev);
 }
}
