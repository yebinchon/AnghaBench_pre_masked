
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int maxentities; TYPE_2__* entities; } ;
struct TYPE_4__ {int number; int valid; } ;
struct TYPE_5__ {TYPE_1__ i; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0.maxentities; VAR_2++)
 {
  VAR_0.entities[VAR_2].i.valid = VAR_1;
  VAR_0.entities[VAR_2].i.number = VAR_2;
 }
}
