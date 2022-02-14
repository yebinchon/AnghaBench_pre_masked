
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t movedir; int x; int y; TYPE_1__* target; } ;
typedef TYPE_2__ mobj_t ;
typedef int fixed_t ;
typedef size_t dirtype_t ;
struct TYPE_5__ {int x; int y; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 size_t* VAR_7 ;
 size_t* VAR_8 ;

void FUNC_4 (mobj_t* VAR_9)
{
    fixed_t VAR_10;
    fixed_t VAR_11;

    dirtype_t VAR_12[3];

    int VAR_13;
    dirtype_t VAR_14;

    dirtype_t VAR_15;

    if (!VAR_9->target)
 FUNC_0 ("P_NewChaseDir: called with no target");

    VAR_14 = VAR_9->movedir;
    VAR_15=VAR_8[VAR_14];

    VAR_10 = VAR_9->target->x - VAR_9->x;
    VAR_11 = VAR_9->target->y - VAR_9->y;

    if (VAR_10>10*VAR_6)
 VAR_12[1]= VAR_0;
    else if (VAR_10<-10*VAR_6)
 VAR_12[1]= VAR_5;
    else
 VAR_12[1]=VAR_1;

    if (VAR_11<-10*VAR_6)
 VAR_12[2]= VAR_3;
    else if (VAR_11>10*VAR_6)
 VAR_12[2]= VAR_2;
    else
 VAR_12[2]=VAR_1;


    if (VAR_12[1] != VAR_1
 && VAR_12[2] != VAR_1)
    {
 VAR_9->movedir = VAR_7[((VAR_11<0)<<1)+(VAR_10>0)];
 if (VAR_9->movedir != VAR_15 && FUNC_2(VAR_9))
     return;
    }


    if (FUNC_1() > 200
 || FUNC_3(VAR_11)>FUNC_3(VAR_10))
    {
 VAR_13=VAR_12[1];
 VAR_12[1]=VAR_12[2];
 VAR_12[2]=VAR_13;
    }

    if (VAR_12[1]==VAR_15)
 VAR_12[1]=VAR_1;
    if (VAR_12[2]==VAR_15)
 VAR_12[2]=VAR_1;

    if (VAR_12[1]!=VAR_1)
    {
 VAR_9->movedir = VAR_12[1];
 if (FUNC_2(VAR_9))
 {

     return;
 }
    }

    if (VAR_12[2]!=VAR_1)
    {
 VAR_9->movedir =VAR_12[2];

 if (FUNC_2(VAR_9))
     return;
    }



    if (VAR_14!=VAR_1)
    {
 VAR_9->movedir =VAR_14;

 if (FUNC_2(VAR_9))
     return;
    }


    if (FUNC_1()&1)
    {
 for ( VAR_13=VAR_0;
       VAR_13<=VAR_4;
       VAR_13++ )
 {
     if (VAR_13!=VAR_15)
     {
  VAR_9->movedir =VAR_13;

  if ( FUNC_2(VAR_9) )
      return;
     }
 }
    }
    else
    {
 for ( VAR_13=VAR_4;
       VAR_13 != (VAR_0-1);
       VAR_13-- )
 {
     if (VAR_13!=VAR_15)
     {
  VAR_9->movedir =VAR_13;

  if ( FUNC_2(VAR_9) )
      return;
     }
 }
    }

    if (VAR_15 != VAR_1)
    {
 VAR_9->movedir =VAR_15;
 if ( FUNC_2(VAR_9) )
     return;
    }

    VAR_9->movedir = VAR_1;
}
