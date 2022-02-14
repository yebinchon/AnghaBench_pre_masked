
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_device_id {scalar_t__ type; } ;
struct tifm_dev {scalar_t__ type; } ;



__attribute__((used)) static int FUNC_0(struct tifm_dev *VAR_0, struct tifm_device_id *VAR_1)
{
 if (VAR_0->type == VAR_1->type)
  return 1;
 return 0;
}
