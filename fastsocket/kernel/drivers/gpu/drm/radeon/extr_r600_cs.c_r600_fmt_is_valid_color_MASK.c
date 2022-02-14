
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {scalar_t__ valid_color; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

bool FUNC_1(u32 VAR_1)
{
 if (VAR_1 >= FUNC_0(VAR_0))
  return 0;

 if (VAR_0[VAR_1].valid_color)
  return 1;

 return 0;
}
