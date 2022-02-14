
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {scalar_t__ bus; scalar_t__ vendor; scalar_t__ product; } ;
struct hid_device {scalar_t__ bus; scalar_t__ vendor; scalar_t__ product; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct hid_device *VAR_1,
  const struct hid_device_id *VAR_2)
{
 return VAR_2->bus == VAR_1->bus &&
  (VAR_2->vendor == VAR_0 || VAR_2->vendor == VAR_1->vendor) &&
  (VAR_2->product == VAR_0 || VAR_2->product == VAR_1->product);
}
