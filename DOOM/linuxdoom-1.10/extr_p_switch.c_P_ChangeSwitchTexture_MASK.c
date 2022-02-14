
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int special; size_t* sidenum; } ;
typedef TYPE_1__ line_t ;
struct TYPE_8__ {int soundorg; } ;
struct TYPE_7__ {int toptexture; int midtexture; int bottomtexture; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;

void
FUNC_2
( line_t* VAR_10,
  int VAR_11 )
{
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;

    if (!VAR_11)
 VAR_10->special = 0;

    VAR_12 = VAR_7[VAR_10->sidenum[0]].toptexture;
    VAR_13 = VAR_7[VAR_10->sidenum[0]].midtexture;
    VAR_14 = VAR_7[VAR_10->sidenum[0]].bottomtexture;

    VAR_16 = VAR_5;


    if (VAR_10->special == 11)
 VAR_16 = VAR_6;

    for (VAR_15 = 0;VAR_15 < VAR_4*2;VAR_15++)
    {
 if (VAR_8[VAR_15] == VAR_12)
 {
     FUNC_1(VAR_2->soundorg,VAR_16);
     VAR_7[VAR_10->sidenum[0]].toptexture = VAR_8[VAR_15^1];

     if (VAR_11)
  FUNC_0(VAR_10,VAR_9,VAR_8[VAR_15],VAR_0);

     return;
 }
 else
 {
     if (VAR_8[VAR_15] == VAR_13)
     {
  FUNC_1(VAR_2->soundorg,VAR_16);
  VAR_7[VAR_10->sidenum[0]].midtexture = VAR_8[VAR_15^1];

  if (VAR_11)
      FUNC_0(VAR_10, VAR_3,VAR_8[VAR_15],VAR_0);

  return;
     }
     else
     {
  if (VAR_8[VAR_15] == VAR_14)
  {
      FUNC_1(VAR_2->soundorg,VAR_16);
      VAR_7[VAR_10->sidenum[0]].bottomtexture = VAR_8[VAR_15^1];

      if (VAR_11)
   FUNC_0(VAR_10, VAR_1,VAR_8[VAR_15],VAR_0);

      return;
  }
     }
 }
    }
}
