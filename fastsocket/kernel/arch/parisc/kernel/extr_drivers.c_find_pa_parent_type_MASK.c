
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_type; } ;
struct device {struct device* parent; } ;
typedef struct parisc_device {TYPE_1__ id; struct device dev; } const parisc_device ;


 struct device const VAR_0 ;
 struct parisc_device const* FUNC_0 (struct device const*) ;

const struct parisc_device *
FUNC_1(const struct parisc_device *VAR_1, int VAR_2)
{
 const struct device *VAR_3 = &VAR_1->dev;
 while (VAR_3 != &VAR_0) {
  struct parisc_device *VAR_4 = FUNC_0(VAR_3);
  if (VAR_4->id.hw_type == VAR_2)
   return VAR_4;
  VAR_3 = VAR_3->parent;
 }

 return ((void*)0);
}
