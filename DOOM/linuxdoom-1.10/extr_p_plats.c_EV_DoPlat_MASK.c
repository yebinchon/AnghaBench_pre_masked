
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_19__ {int soundorg; void* floorheight; int floorpic; int special; TYPE_4__* specialdata; } ;
typedef TYPE_3__ sector_t ;
typedef int plattype_e ;
struct TYPE_17__ {scalar_t__ acp1; } ;
struct TYPE_16__ {TYPE_1__ function; } ;
struct TYPE_20__ {int type; int crush; int speed; int wait; int status; void* high; void* low; int tag; TYPE_13__ thinker; TYPE_3__* sector; } ;
typedef TYPE_4__ plat_t ;
typedef int mobj_t ;
struct TYPE_21__ {size_t* sidenum; int tag; } ;
typedef TYPE_5__ line_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_22__ {TYPE_2__* sector; } ;
struct TYPE_18__ {int floorpic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_13__*) ;
 void* FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (TYPE_3__*) ;
 void* FUNC_5 (TYPE_3__*,void*) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_9 (int,int ,int ) ;

 void* VAR_5 ;




 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* VAR_9 ;
 void* VAR_10 ;

int
FUNC_10
( line_t* VAR_11,
  plattype_e VAR_12,
  int VAR_13 )
{
    plat_t* VAR_14;
    int VAR_15;
    int VAR_16;
    sector_t* VAR_17;

    VAR_15 = -1;
    VAR_16 = 0;



    switch(VAR_12)
    {
      case 130:
 FUNC_0(VAR_11->tag);
 break;

      default:
 break;
    }

    while ((VAR_15 = FUNC_6(VAR_11,VAR_15)) >= 0)
    {
 VAR_17 = &VAR_6[VAR_15];

 if (VAR_17->specialdata)
     continue;


 VAR_16 = 1;
 VAR_14 = FUNC_9( sizeof(*VAR_14), VAR_3, 0);
 FUNC_2(&VAR_14->thinker);

 VAR_14->type = VAR_12;
 VAR_14->sector = VAR_17;
 VAR_14->sector->specialdata = VAR_14;
 VAR_14->thinker.function.acp1 = (actionf_p1) VAR_4;
 VAR_14->crush = 0;
 VAR_14->tag = VAR_11->tag;

 switch(VAR_12)
 {
   case 128:
     VAR_14->speed = VAR_1/2;
     VAR_17->floorpic = VAR_9[VAR_11->sidenum[0]].sector->floorpic;
     VAR_14->high = FUNC_5(VAR_17,VAR_17->floorheight);
     VAR_14->wait = 0;
     VAR_14->status = VAR_10;

     VAR_17->special = 0;

     FUNC_8((mobj_t *)&VAR_17->soundorg,VAR_8);
     break;

   case 129:
     VAR_14->speed = VAR_1/2;
     VAR_17->floorpic = VAR_9[VAR_11->sidenum[0]].sector->floorpic;
     VAR_14->high = VAR_17->floorheight + VAR_13*VAR_0;
     VAR_14->wait = 0;
     VAR_14->status = VAR_10;

     FUNC_8((mobj_t *)&VAR_17->soundorg,VAR_8);
     break;

   case 131:
     VAR_14->speed = VAR_1 * 4;
     VAR_14->low = FUNC_4(VAR_17);

     if (VAR_14->low > VAR_17->floorheight)
  VAR_14->low = VAR_17->floorheight;

     VAR_14->high = VAR_17->floorheight;
     VAR_14->wait = 35*VAR_2;
     VAR_14->status = VAR_5;
     FUNC_8((mobj_t *)&VAR_17->soundorg,VAR_7);
     break;

   case 132:
     VAR_14->speed = VAR_1 * 8;
     VAR_14->low = FUNC_4(VAR_17);

     if (VAR_14->low > VAR_17->floorheight)
  VAR_14->low = VAR_17->floorheight;

     VAR_14->high = VAR_17->floorheight;
     VAR_14->wait = 35*VAR_2;
     VAR_14->status = VAR_5;
     FUNC_8((mobj_t *)&VAR_17->soundorg,VAR_7);
     break;

   case 130:
     VAR_14->speed = VAR_1;
     VAR_14->low = FUNC_4(VAR_17);

     if (VAR_14->low > VAR_17->floorheight)
  VAR_14->low = VAR_17->floorheight;

     VAR_14->high = FUNC_3(VAR_17);

     if (VAR_14->high < VAR_17->floorheight)
  VAR_14->high = VAR_17->floorheight;

     VAR_14->wait = 35*VAR_2;
     VAR_14->status = FUNC_7()&1;

     FUNC_8((mobj_t *)&VAR_17->soundorg,VAR_7);
     break;
 }
 FUNC_1(VAR_14);
    }
    return VAR_16;
}
