
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_system_config {int dummy; } ;
struct op_counter_config {scalar_t__ count; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct op_counter_config *VAR_2,
      struct op_system_config *VAR_3,
      int VAR_4)
{
 int VAR_5;

 VAR_0 = VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  VAR_1[VAR_5] = 0x80000000UL - VAR_2[VAR_5].count;


 return 0;
}
