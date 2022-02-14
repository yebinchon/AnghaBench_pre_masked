
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_info {int gpio_data_size; int mark; int data; scalar_t__* gpio_data; TYPE_1__* gpios; } ;
typedef scalar_t__ pinmux_enum_t ;
struct TYPE_2__ {scalar_t__ enum_id; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinmux_info *VAR_0, unsigned VAR_1,
       int VAR_2, pinmux_enum_t *VAR_3)
{
 pinmux_enum_t VAR_4 = VAR_0->gpios[VAR_1].enum_id;
 pinmux_enum_t *VAR_5 = VAR_0->gpio_data;
 int VAR_6;

 if (!FUNC_0(VAR_4, &VAR_0->data)) {
  if (!FUNC_0(VAR_4, &VAR_0->mark)) {
   FUNC_1("non data/mark enum_id for gpio %d\n", VAR_1);
   return -1;
  }
 }

 if (VAR_2) {
  *VAR_3 = VAR_5[VAR_2 + 1];
  return VAR_2 + 1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0->gpio_data_size; VAR_6++) {
  if (VAR_5[VAR_6] == VAR_4) {
   *VAR_3 = VAR_5[VAR_6 + 1];
   return VAR_6 + 1;
  }
 }

 FUNC_1("cannot locate data/mark enum_id for gpio %d\n", VAR_1);
 return -1;
}
