
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int direction; TYPE_1__* sector; int maxlight; int minlight; } ;
typedef TYPE_2__ glow_t ;
struct TYPE_4__ {int lightlevel; } ;


 int VAR_0 ;

void FUNC_0(glow_t* VAR_1)
{
    switch(VAR_1->direction)
    {
      case -1:

 VAR_1->sector->lightlevel -= VAR_0;
 if (VAR_1->sector->lightlevel <= VAR_1->minlight)
 {
     VAR_1->sector->lightlevel += VAR_0;
     VAR_1->direction = 1;
 }
 break;

      case 1:

 VAR_1->sector->lightlevel += VAR_0;
 if (VAR_1->sector->lightlevel >= VAR_1->maxlight)
 {
     VAR_1->sector->lightlevel -= VAR_0;
     VAR_1->direction = -1;
 }
 break;
    }
}
