
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_2__ {unsigned int v_columns; } ;


 int VAR_0 ;
 int* VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static boolean_t FUNC_0(unsigned int VAR_3)
{
 if (VAR_1 == ((void*)0))
  return ((VAR_3 % 8) == 0);
 if (VAR_3 < VAR_2.v_columns)
  return VAR_1[VAR_3];
 else
  return VAR_0;
}
