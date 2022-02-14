
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct menu_device {int* intervals; int expected_us; int predicted_us; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct menu_device *VAR_2)
{
 int VAR_3;
 uint64_t VAR_4 = 0;
 uint64_t VAR_5 = 0;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_4 += VAR_2->intervals[VAR_3];
 VAR_4 = VAR_4 / VAR_0;


 if (VAR_4 > VAR_2->expected_us)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_5 += (VAR_2->intervals[VAR_3] - VAR_4) *
     (VAR_2->intervals[VAR_3] - VAR_4);

 VAR_5 = VAR_5 / VAR_0;






 if (VAR_4 && VAR_5 < VAR_1)
  VAR_2->predicted_us = VAR_4;
}
