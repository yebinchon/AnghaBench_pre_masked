
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mobj_t ;
struct TYPE_11__ {int special; size_t* sidenum; } ;
typedef TYPE_2__ line_t ;
typedef int button_t ;
struct TYPE_12__ {int basepic; int numpics; int speed; scalar_t__ istexture; } ;
typedef TYPE_3__ anim_t ;
struct TYPE_14__ {int where; int soundorg; int btexture; TYPE_1__* line; scalar_t__ btimer; } ;
struct TYPE_13__ {int bottomtexture; int midtexture; int toptexture; int textureoffset; } ;
struct TYPE_10__ {size_t* sidenum; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 TYPE_3__* VAR_2 ;

 TYPE_5__* VAR_3 ;
 int* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__** VAR_9 ;
 int FUNC_2 (TYPE_5__*,int ,int) ;

 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* VAR_12 ;
 int* VAR_13 ;


void FUNC_3 (void)
{
    anim_t* VAR_14;
    int VAR_15;
    int VAR_16;
    line_t* VAR_17;



    if (VAR_7 == 1)
    {
 VAR_6--;
 if (!VAR_6)
     FUNC_0();
    }


    for (VAR_14 = VAR_2 ; VAR_14 < VAR_5 ; VAR_14++)
    {
 for (VAR_16=VAR_14->basepic ; VAR_16<VAR_14->basepic+VAR_14->numpics ; VAR_16++)
 {
     VAR_15 = VAR_14->basepic + ( (VAR_8/VAR_14->speed + VAR_16)%VAR_14->numpics );
     if (VAR_14->istexture)
  VAR_13[VAR_16] = VAR_15;
     else
  VAR_4[VAR_16] = VAR_15;
 }
    }



    for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
    {
 VAR_17 = VAR_9[VAR_16];
 switch(VAR_17->special)
 {
   case 48:

     VAR_12[VAR_17->sidenum[0]].textureoffset += VAR_0;
     break;
 }
    }



    for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
 if (VAR_3[VAR_16].btimer)
 {
     VAR_3[VAR_16].btimer--;
     if (!VAR_3[VAR_16].btimer)
     {
  switch(VAR_3[VAR_16].where)
  {
    case 128:
      VAR_12[VAR_3[VAR_16].line->sidenum[0]].toptexture =
   VAR_3[VAR_16].btexture;
      break;

    case 129:
      VAR_12[VAR_3[VAR_16].line->sidenum[0]].midtexture =
   VAR_3[VAR_16].btexture;
      break;

    case 130:
      VAR_12[VAR_3[VAR_16].line->sidenum[0]].bottomtexture =
   VAR_3[VAR_16].btexture;
      break;
  }
  FUNC_1((mobj_t *)&VAR_3[VAR_16].soundorg,VAR_11);
  FUNC_2(&VAR_3[VAR_16],0,sizeof(button_t));
     }
 }

}
