
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* bbox; int flags; scalar_t__ special; int backsector; } ;
typedef TYPE_1__ line_t ;
typedef int boolean ;
struct TYPE_9__ {int flags; int player; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__** VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_2__* VAR_17 ;

boolean FUNC_2 (line_t* VAR_18)
{
    if (VAR_13[VAR_2] <= VAR_18->bbox[VAR_1]
 || VAR_13[VAR_1] >= VAR_18->bbox[VAR_2]
 || VAR_13[VAR_3] <= VAR_18->bbox[VAR_0]
 || VAR_13[VAR_0] >= VAR_18->bbox[VAR_3] )
 return 1;

    if (FUNC_0 (VAR_13, VAR_18) != -1)
 return 1;
    if (!VAR_18->backsector)
 return 0;

    if (!(VAR_17->flags & VAR_4) )
    {
 if ( VAR_18->flags & VAR_5 )
     return 0;

 if ( !VAR_17->player && VAR_18->flags & VAR_6 )
     return 0;
    }


    FUNC_1 (VAR_18);


    if (VAR_11 < VAR_14)
    {
 VAR_14 = VAR_11;
 VAR_7 = VAR_18;
    }

    if (VAR_10 > VAR_16)
 VAR_16 = VAR_10;

    if (VAR_8 < VAR_15)
 VAR_15 = VAR_8;


    if (VAR_18->special)
    {
 VAR_12[VAR_9] = VAR_18;
 VAR_9++;
    }

    return 1;
}
