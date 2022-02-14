
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ validcount; int soundtraversed; int linecount; TYPE_2__** lines; int soundtarget; } ;
typedef TYPE_1__ sector_t ;
struct TYPE_7__ {int flags; size_t* sidenum; } ;
typedef TYPE_2__ line_t ;
struct TYPE_8__ {TYPE_1__* sector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_1
( sector_t* VAR_6,
  int VAR_7 )
{
    int VAR_8;
    line_t* VAR_9;
    sector_t* VAR_10;


    if (VAR_6->validcount == VAR_5
 && VAR_6->soundtraversed <= VAR_7+1)
    {
 return;
    }

    VAR_6->validcount = VAR_5;
    VAR_6->soundtraversed = VAR_7+1;
    VAR_6->soundtarget = VAR_4;

    for (VAR_8=0 ;VAR_8<VAR_6->linecount ; VAR_8++)
    {
 VAR_9 = VAR_6->lines[VAR_8];
 if (! (VAR_9->flags & VAR_1) )
     continue;

 FUNC_0 (VAR_9);

 if (VAR_2 <= 0)
     continue;

 if ( VAR_3[ VAR_9->sidenum[0] ].sector == VAR_6)
     VAR_10 = VAR_3[ VAR_9->sidenum[1] ] .sector;
 else
     VAR_10 = VAR_3[ VAR_9->sidenum[0] ].sector;

 if (VAR_9->flags & VAR_0)
 {
     if (!VAR_7)
  FUNC_1 (VAR_10, 1);
 }
 else
     FUNC_1 (VAR_10, VAR_7);
    }
}
