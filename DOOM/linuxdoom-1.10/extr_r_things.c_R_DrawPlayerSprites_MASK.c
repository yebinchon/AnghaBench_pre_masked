
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_4__ pspdef_t ;
struct TYPE_11__ {TYPE_4__* psprites; TYPE_2__* mo; } ;
struct TYPE_9__ {TYPE_1__* sector; } ;
struct TYPE_8__ {TYPE_3__* subsector; } ;
struct TYPE_7__ {int lightlevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;

void FUNC_1 (void)
{
    int VAR_11;
    int VAR_12;
    pspdef_t* VAR_13;


    VAR_12 =
 (VAR_10->mo->subsector->sector->lightlevel >> VAR_1)
 +VAR_3;

    if (VAR_12 < 0)
 VAR_9 = VAR_7[0];
    else if (VAR_12 >= VAR_0)
 VAR_9 = VAR_7[VAR_0-1];
    else
 VAR_9 = VAR_7[VAR_12];


    VAR_5 = VAR_8;
    VAR_4 = VAR_6;


    for (VAR_11=0, VAR_13=VAR_10->psprites;
  VAR_11<VAR_2;
  VAR_11++,VAR_13++)
    {
 if (VAR_13->state)
     FUNC_0 (VAR_13);
    }
}
