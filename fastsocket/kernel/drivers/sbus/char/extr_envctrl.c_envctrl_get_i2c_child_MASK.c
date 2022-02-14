
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_child_t {int dummy; } ;
struct TYPE_2__ {unsigned char* mon_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static struct i2c_child_t *FUNC_0(unsigned char VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0*2; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   if (VAR_2[VAR_4].mon_type[VAR_5] == VAR_3) {
    return (struct i2c_child_t *)(&(VAR_2[VAR_4]));
   }
  }
 }
 return ((void*)0);
}
