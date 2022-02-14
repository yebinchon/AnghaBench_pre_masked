
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int stair_e ;
struct TYPE_10__ {int floorheight; int floorpic; int linecount; TYPE_4__* specialdata; TYPE_1__** lines; } ;
typedef TYPE_3__ sector_t ;
typedef int line_t ;
struct TYPE_9__ {void* acp1; } ;
struct TYPE_12__ {TYPE_2__ function; } ;
struct TYPE_11__ {int direction; int speed; int floordestheight; TYPE_3__* sector; TYPE_7__ thinker; } ;
typedef TYPE_4__ floormove_t ;
typedef int fixed_t ;
typedef void* actionf_p1 ;
struct TYPE_8__ {int flags; TYPE_3__* backsector; TYPE_3__* frontsector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_2 (int,int ,int ) ;

 TYPE_3__* VAR_5 ;


int
FUNC_3
( line_t* VAR_6,
  stair_e VAR_7 )
{
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;

    sector_t* VAR_15;
    sector_t* VAR_16;

    floormove_t* VAR_17;

    fixed_t VAR_18;
    fixed_t VAR_19;

    VAR_8 = -1;
    VAR_14 = 0;
    while ((VAR_8 = FUNC_1(VAR_6,VAR_8)) >= 0)
    {
 VAR_15 = &VAR_5[VAR_8];


 if (VAR_15->specialdata)
     continue;


 VAR_14 = 1;
 VAR_17 = FUNC_2 (sizeof(*VAR_17), VAR_3, 0);
 FUNC_0 (&VAR_17->thinker);
 VAR_15->specialdata = VAR_17;
 VAR_17->thinker.function.acp1 = (actionf_p1) VAR_4;
 VAR_17->direction = 1;
 VAR_17->sector = VAR_15;
 switch(VAR_7)
 {
   case 129:
     VAR_19 = VAR_0/4;
     VAR_18 = 8*VAR_1;
     break;
   case 128:
     VAR_19 = VAR_0*4;
     VAR_18 = 16*VAR_1;
     break;
 }
 VAR_17->speed = VAR_19;
 VAR_9 = VAR_15->floorheight + VAR_18;
 VAR_17->floordestheight = VAR_9;

 VAR_12 = VAR_15->floorpic;




 do
 {
     VAR_13 = 0;
     for (VAR_10 = 0;VAR_10 < VAR_15->linecount;VAR_10++)
     {
  if ( !((VAR_15->lines[VAR_10])->flags & VAR_2) )
      continue;

  VAR_16 = (VAR_15->lines[VAR_10])->frontsector;
  VAR_11 = VAR_16-VAR_5;

  if (VAR_8 != VAR_11)
      continue;

  VAR_16 = (VAR_15->lines[VAR_10])->backsector;
  VAR_11 = VAR_16 - VAR_5;

  if (VAR_16->floorpic != VAR_12)
      continue;

  VAR_9 += VAR_18;

  if (VAR_16->specialdata)
      continue;

  VAR_15 = VAR_16;
  VAR_8 = VAR_11;
  VAR_17 = FUNC_2 (sizeof(*VAR_17), VAR_3, 0);

  FUNC_0 (&VAR_17->thinker);

  VAR_15->specialdata = VAR_17;
  VAR_17->thinker.function.acp1 = (actionf_p1) VAR_4;
  VAR_17->direction = 1;
  VAR_17->sector = VAR_15;
  VAR_17->speed = VAR_19;
  VAR_17->floordestheight = VAR_9;
  VAR_13 = 1;
  break;
     }
 } while(VAR_13);
    }
    return VAR_14;
}
