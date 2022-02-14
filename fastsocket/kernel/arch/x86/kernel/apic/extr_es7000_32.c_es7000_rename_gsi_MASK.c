
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(int VAR_5, int VAR_6)
{
 if (VAR_2 == VAR_0)
  return VAR_6;

 if (!VAR_1) {
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   VAR_1 += VAR_3[VAR_7];
 }

 if (!VAR_5 && (VAR_6 < 16))
  VAR_6 += VAR_1;

 return VAR_6;
}
