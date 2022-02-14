
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec_t ;
typedef int* vec3_t ;
struct TYPE_9__ {int numsides; TYPE_1__* original_sides; int * maxs; int * mins; int contents; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_10__ {int planenum; int texinfo; } ;
typedef TYPE_3__ dbrushside_t ;
struct TYPE_11__ {size_t firstside; int numsides; int contents; } ;
typedef TYPE_4__ dbrush_t ;
struct TYPE_8__ {int planenum; int texinfo; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int ,int*) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_3 (void)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 dbrush_t *VAR_13;
 mapbrush_t *VAR_14;
 dbrushside_t *VAR_15;
 vec3_t VAR_16;
 vec_t VAR_17;
 int VAR_18;

 VAR_5 = 0;
 VAR_4 = VAR_6;

 for (VAR_10=0 ; VAR_10<VAR_6 ; VAR_10++)
 {
  VAR_14 = &VAR_3[VAR_10];
  VAR_13 = &VAR_1[VAR_10];

  VAR_13->contents = VAR_14->contents;
  VAR_13->firstside = VAR_5;
  VAR_13->numsides = VAR_14->numsides;
  for (VAR_9=0 ; VAR_9<VAR_14->numsides ; VAR_9++)
  {
   if (VAR_5 == VAR_0)
    FUNC_0 ("MAX_MAP_BRUSHSIDES");
   VAR_15 = &VAR_2[VAR_5];
   VAR_5++;
   VAR_15->planenum = VAR_14->original_sides[VAR_9].planenum;
   VAR_15->texinfo = VAR_14->original_sides[VAR_9].texinfo;
  }







  for (VAR_12=0 ; VAR_12<3 ; VAR_12++)
   for (VAR_11=-1 ; VAR_11<=1 ; VAR_11+=2)
   {

    FUNC_2 (VAR_7, VAR_16);
    VAR_16[VAR_12] = VAR_11;
    if (VAR_11 == -1)
     VAR_17 = -VAR_14->mins[VAR_12];
    else
     VAR_17 = VAR_14->maxs[VAR_12];
    VAR_18 = FUNC_1 (VAR_16, VAR_17);
    for (VAR_8=0 ; VAR_8<VAR_14->numsides ; VAR_8++)
     if (VAR_14->original_sides[VAR_8].planenum == VAR_18)
      break;
    if (VAR_8 == VAR_14->numsides)
    {
     if (VAR_5 >= VAR_0)
      FUNC_0 ("MAX_MAP_BRUSHSIDES");

     VAR_2[VAR_5].planenum = VAR_18;
     VAR_2[VAR_5].texinfo =
      VAR_2[VAR_5-1].texinfo;
     VAR_5++;
     VAR_13->numsides++;
    }
   }

 }

}
