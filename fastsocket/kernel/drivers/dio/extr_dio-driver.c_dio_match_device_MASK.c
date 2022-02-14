
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_device_id {int id; } ;
struct dio_dev {int id; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

const struct dio_device_id *
FUNC_1(const struct dio_device_id *VAR_1,
     const struct dio_dev *VAR_2)
{
 while (VAR_1->id) {
  if (VAR_1->id == VAR_0)
   return VAR_1;
  if (FUNC_0(VAR_1->id & 0xff)) {
   if (VAR_1->id == VAR_2->id)
    return VAR_1;
  } else {
   if ((VAR_1->id & 0xff) == (VAR_2->id & 0xff))
    return VAR_1;
  }
  VAR_1++;
 }
 return ((void*)0);
}
