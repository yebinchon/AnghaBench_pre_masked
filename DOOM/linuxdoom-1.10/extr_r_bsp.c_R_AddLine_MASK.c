
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* sidedef; TYPE_7__* backsector; TYPE_2__* v2; TYPE_1__* v1; } ;
typedef TYPE_4__ seg_t ;
typedef int angle_t ;
struct TYPE_14__ {scalar_t__ ceilingheight; scalar_t__ floorheight; scalar_t__ ceilingpic; scalar_t__ floorpic; scalar_t__ lightlevel; } ;
struct TYPE_13__ {scalar_t__ floorheight; scalar_t__ ceilingheight; scalar_t__ ceilingpic; scalar_t__ floorpic; scalar_t__ lightlevel; } ;
struct TYPE_11__ {scalar_t__ midtexture; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_7__* VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_5__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;

void FUNC_3 (seg_t* VAR_10)
{
    int VAR_11;
    int VAR_12;
    angle_t VAR_13;
    angle_t VAR_14;
    angle_t VAR_15;
    angle_t VAR_16;

    VAR_5 = VAR_10;


    VAR_13 = FUNC_2 (VAR_10->v1->x, VAR_10->v1->y);
    VAR_14 = FUNC_2 (VAR_10->v2->x, VAR_10->v2->y);



    VAR_15 = VAR_13 - VAR_14;


    if (VAR_15 >= VAR_0)
 return;


    VAR_7 = VAR_13;
    VAR_13 -= VAR_8;
    VAR_14 -= VAR_8;

    VAR_16 = VAR_13 + VAR_4;
    if (VAR_16 > 2*VAR_4)
    {
 VAR_16 -= 2*VAR_4;


 if (VAR_16 >= VAR_15)
     return;

 VAR_13 = VAR_4;
    }
    VAR_16 = VAR_4 - VAR_14;
    if (VAR_16 > 2*VAR_4)
    {
 VAR_16 -= 2*VAR_4;


 if (VAR_16 >= VAR_15)
     return;
 VAR_14 = -VAR_4;
    }



    VAR_13 = (VAR_13+VAR_1)>>VAR_2;
    VAR_14 = (VAR_14+VAR_1)>>VAR_2;
    VAR_11 = VAR_9[VAR_13];
    VAR_12 = VAR_9[VAR_14];


    if (VAR_11 == VAR_12)
 return;

    VAR_3 = VAR_10->backsector;


    if (!VAR_3)
 goto clipsolid;


    if (VAR_3->ceilingheight <= VAR_6->floorheight
 || VAR_3->floorheight >= VAR_6->ceilingheight)
 goto clipsolid;


    if (VAR_3->ceilingheight != VAR_6->ceilingheight
 || VAR_3->floorheight != VAR_6->floorheight)
 goto clippass;






    if (VAR_3->ceilingpic == VAR_6->ceilingpic
 && VAR_3->floorpic == VAR_6->floorpic
 && VAR_3->lightlevel == VAR_6->lightlevel
 && VAR_5->sidedef->midtexture == 0)
    {
 return;
    }


  clippass:
    FUNC_0 (VAR_11, VAR_12-1);
    return;

  clipsolid:
    FUNC_1 (VAR_11, VAR_12-1);
}
