
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {int nr_devices; struct ssb_device* devices; } ;


 int FUNC_0 (struct ssb_device*) ;

__attribute__((used)) static struct ssb_device *FUNC_1(struct ssb_device *VAR_0, int VAR_1)
{
 struct ssb_bus *VAR_2 = VAR_0->bus;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->nr_devices; VAR_3++) {
  struct ssb_device *VAR_4;
  VAR_4 = &(VAR_2->devices[VAR_3]);
  if (FUNC_0(VAR_4) == VAR_1)
   return VAR_4;
 }
 return ((void*)0);
}
