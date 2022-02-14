
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ health; int flags; int height; int momx; int momy; scalar_t__ z; int y; int x; scalar_t__ radius; } ;
typedef TYPE_1__ mobj_t ;
typedef int boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

boolean FUNC_6 (mobj_t* VAR_8)
{
    mobj_t* VAR_9;

    if (FUNC_5 (VAR_8))
    {

 return 1;
    }



    if (VAR_8->health <= 0)
    {
 FUNC_3 (VAR_8, VAR_4);

 VAR_8->flags &= ~VAR_2;
 VAR_8->height = 0;
 VAR_8->radius = 0;


 return 1;
    }


    if (VAR_8->flags & VAR_0)
    {
 FUNC_2 (VAR_8);


 return 1;
    }

    if (! (VAR_8->flags & VAR_1) )
    {

 return 1;
    }

    VAR_7 = 1;

    if (VAR_5 && !(VAR_6&3) )
    {
 FUNC_0(VAR_8,((void*)0),((void*)0),10);


 VAR_9 = FUNC_4 (VAR_8->x,
     VAR_8->y,
     VAR_8->z + VAR_8->height/2, VAR_3);

 VAR_9->momx = (FUNC_1() - FUNC_1 ())<<12;
 VAR_9->momy = (FUNC_1() - FUNC_1 ())<<12;
    }


    return 1;
}
