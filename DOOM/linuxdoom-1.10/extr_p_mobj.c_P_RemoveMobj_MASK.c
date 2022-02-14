
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int thinker_t ;
struct TYPE_5__ {int flags; scalar_t__ type; int spawnpoint; } ;
typedef TYPE_1__ mobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;

void FUNC_3 (mobj_t* VAR_10)
{
    if ((VAR_10->flags & VAR_2)
 && !(VAR_10->flags & VAR_1)
 && (VAR_10->type != VAR_4)
 && (VAR_10->type != VAR_3))
    {
 VAR_7[VAR_5] = VAR_10->spawnpoint;
 VAR_8[VAR_5] = VAR_9;
 VAR_5 = (VAR_5+1)&(VAR_0-1);


 if (VAR_5 == VAR_6)
     VAR_6 = (VAR_6+1)&(VAR_0-1);
    }


    FUNC_1 (VAR_10);


    FUNC_2 (VAR_10);


    FUNC_0 ((thinker_t*)VAR_10);
}
