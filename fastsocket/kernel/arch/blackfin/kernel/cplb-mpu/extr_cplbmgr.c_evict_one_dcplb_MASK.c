
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_5)
{
 int VAR_6;
 for (VAR_6 = VAR_4; VAR_6 < VAR_1; VAR_6++)
  if ((VAR_3[VAR_5][VAR_6].data & VAR_0) == 0)
   return VAR_6;
 VAR_6 = VAR_4 + VAR_2[VAR_5];
 if (VAR_6 >= VAR_1) {
  VAR_6 -= VAR_1 - VAR_4;
  VAR_2[VAR_5] -= VAR_1 - VAR_4;
 }
 VAR_2[VAR_5]++;
 return VAR_6;
}
