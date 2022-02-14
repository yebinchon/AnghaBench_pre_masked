
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m {TYPE_1__* bus_bm_pokes_table; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ address; int data; } ;


 int FUNC_0 (int,struct device*,char*,struct i2400m*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 struct device* FUNC_2 (struct i2400m*) ;
 int FUNC_3 (struct i2400m*,int *,int,scalar_t__,int,int) ;

__attribute__((used)) static
int FUNC_4(struct i2400m *VAR_0)
{
 unsigned VAR_1 = 0;
 int VAR_2 = 0;
 struct device *VAR_3 = FUNC_2(VAR_0);
 FUNC_1(5, VAR_3, "(i2400m %p)\n", VAR_0);
 if (VAR_0->bus_bm_pokes_table) {
  while (VAR_0->bus_bm_pokes_table[VAR_1].address) {
   VAR_2 = FUNC_3(
    VAR_0,
    &VAR_0->bus_bm_pokes_table[VAR_1].data,
    sizeof(VAR_0->bus_bm_pokes_table[VAR_1].data),
    VAR_0->bus_bm_pokes_table[VAR_1].address, 1, 1);
   if (VAR_2 < 0)
    break;
   VAR_1++;
  }
 }
 FUNC_0(5, VAR_3, "(i2400m %p) = %d\n", VAR_0, VAR_2);
 return VAR_2;
}
