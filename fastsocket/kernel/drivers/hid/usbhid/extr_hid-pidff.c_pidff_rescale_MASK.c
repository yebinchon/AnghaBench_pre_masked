
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {int logical_maximum; int logical_minimum; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, struct hid_field *VAR_2)
{
 return VAR_0 * (VAR_2->logical_maximum - VAR_2->logical_minimum) / VAR_1 +
     VAR_2->logical_minimum;
}
