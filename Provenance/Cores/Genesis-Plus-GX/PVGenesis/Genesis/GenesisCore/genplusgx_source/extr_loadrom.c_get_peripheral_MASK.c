
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ company; } ;
struct TYPE_3__ {scalar_t__ pName; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

char *FUNC_0(int VAR_4)
{
  if (VAR_4 < VAR_1)
    return (char *)VAR_3[VAR_4].pName;
  return (char *)VAR_2[VAR_0 - 1].company;
}
