
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int linecount; int floorheight; TYPE_3__* specialdata; int floorpic; TYPE_6__** lines; } ;
typedef TYPE_2__ sector_t ;
typedef int line_t ;
struct TYPE_10__ {void* acp1; } ;
struct TYPE_14__ {TYPE_1__ function; } ;
struct TYPE_12__ {int crush; int direction; int speed; int floordestheight; TYPE_2__* sector; int type; TYPE_9__ thinker; scalar_t__ newspecial; int texture; } ;
typedef TYPE_3__ floormove_t ;
typedef void* actionf_p1 ;
struct TYPE_13__ {TYPE_2__* backsector; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_2 (int,int ,int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (TYPE_6__*,TYPE_2__*) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

int FUNC_4(line_t* VAR_7)
{
    sector_t* VAR_8;
    sector_t* VAR_9;
    sector_t* VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    floormove_t* VAR_14;

    VAR_11 = -1;
    VAR_12 = 0;
    while ((VAR_11 = FUNC_1(VAR_7,VAR_11)) >= 0)
    {
 VAR_8 = &VAR_6[VAR_11];


 if (VAR_8->specialdata)
     continue;

 VAR_12 = 1;
 VAR_9 = FUNC_3(VAR_8->lines[0],VAR_8);
 for (VAR_13 = 0;VAR_13 < VAR_9->linecount;VAR_13++)
 {
     if ((!(VAR_9->lines[VAR_13]->flags & VAR_1)) ||
  (VAR_9->lines[VAR_13]->backsector == VAR_8))
  continue;
     VAR_10 = VAR_9->lines[VAR_13]->backsector;


     VAR_14 = FUNC_2 (sizeof(*VAR_14), VAR_2, 0);
     FUNC_0 (&VAR_14->thinker);
     VAR_9->specialdata = VAR_14;
     VAR_14->thinker.function.acp1 = (actionf_p1) VAR_3;
     VAR_14->type = VAR_4;
     VAR_14->crush = 0;
     VAR_14->direction = 1;
     VAR_14->sector = VAR_9;
     VAR_14->speed = VAR_0 / 2;
     VAR_14->texture = VAR_10->floorpic;
     VAR_14->newspecial = 0;
     VAR_14->floordestheight = VAR_10->floorheight;


     VAR_14 = FUNC_2 (sizeof(*VAR_14), VAR_2, 0);
     FUNC_0 (&VAR_14->thinker);
     VAR_8->specialdata = VAR_14;
     VAR_14->thinker.function.acp1 = (actionf_p1) VAR_3;
     VAR_14->type = VAR_5;
     VAR_14->crush = 0;
     VAR_14->direction = -1;
     VAR_14->sector = VAR_8;
     VAR_14->speed = VAR_0 / 2;
     VAR_14->floordestheight = VAR_10->floorheight;
     break;
 }
    }
    return VAR_12;
}
