
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio_device_id {scalar_t__ type; scalar_t__ proto; scalar_t__ extra; scalar_t__ id; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ proto; scalar_t__ extra; scalar_t__ id; } ;
struct serio {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct serio_device_id *VAR_1, struct serio *VAR_2)
{
 while (VAR_1->type || VAR_1->proto) {
  if ((VAR_1->type == VAR_0 || VAR_1->type == VAR_2->id.type) &&
      (VAR_1->proto == VAR_0 || VAR_1->proto == VAR_2->id.proto) &&
      (VAR_1->extra == VAR_0 || VAR_1->extra == VAR_2->id.extra) &&
      (VAR_1->id == VAR_0 || VAR_1->id == VAR_2->id.id))
   return 1;
  VAR_1++;
 }
 return 0;
}
