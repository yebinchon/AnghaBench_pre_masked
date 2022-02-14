
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memstick_device_id {int match_flags; scalar_t__ type; scalar_t__ category; scalar_t__ class; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ category; scalar_t__ class; } ;
struct memstick_dev {TYPE_1__ id; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct memstick_dev *VAR_1,
         struct memstick_device_id *VAR_2)
{
 if (VAR_2->match_flags & VAR_0) {
  if ((VAR_2->type == VAR_1->id.type)
      && (VAR_2->category == VAR_1->id.category)
      && (VAR_2->class == VAR_1->id.class))
   return 1;
 }

 return 0;
}
