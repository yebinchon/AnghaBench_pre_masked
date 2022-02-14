
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ses_component {scalar_t__ addr; } ;
struct enclosure_device {int components; TYPE_1__* component; } ;
struct efd {scalar_t__ addr; int dev; } ;
struct TYPE_2__ {struct ses_component* scratch; } ;


 int FUNC_0 (struct enclosure_device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct enclosure_device *VAR_0,
          void *VAR_1)
{
 struct efd *VAR_2 = VAR_1;
 int VAR_3;
 struct ses_component *VAR_4;

 if (!VAR_0->component[0].scratch)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->components; VAR_3++) {
  VAR_4 = VAR_0->component[VAR_3].scratch;
  if (VAR_4->addr != VAR_2->addr)
   continue;

  FUNC_0(VAR_0, VAR_3, VAR_2->dev);
  return 1;
 }
 return 0;
}
