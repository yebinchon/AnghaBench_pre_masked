
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_device_id {scalar_t__ id; } ;
struct zorro_dev {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;

const struct zorro_device_id *
FUNC_0(const struct zorro_device_id *VAR_1,
     const struct zorro_dev *VAR_2)
{
 while (VAR_1->id) {
  if (VAR_1->id == VAR_0 || VAR_1->id == VAR_2->id)
   return VAR_1;
  VAR_1++;
 }
 return ((void*)0);
}
