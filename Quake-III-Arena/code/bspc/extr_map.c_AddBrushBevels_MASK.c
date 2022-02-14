
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int* vec3_t ;
typedef int textureref_t ;
struct TYPE_9__ {size_t planenum; int flags; int contents; int lightinfo; int texinfo; TYPE_1__* winding; } ;
typedef TYPE_2__ side_t ;
struct TYPE_10__ {int numsides; float* maxs; float* mins; TYPE_2__* original_sides; } ;
typedef TYPE_3__ mapbrush_t ;
typedef int brush_texture_t ;
struct TYPE_11__ {int* normal; } ;


 int FUNC_0 (int*,int*,int*) ;
 float FUNC_1 (int ,int*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int*,float) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_4__*,int*,float) ;
 int VAR_1 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 double FUNC_7 (int*) ;
 int FUNC_8 (int ,int ,int*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

void FUNC_9 (mapbrush_t *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 side_t VAR_17;
 brush_texture_t VAR_18;



 side_t *VAR_19, *VAR_20;
 vec3_t VAR_21;
 float VAR_22;
 winding_t *VAR_23, *VAR_24;
 vec3_t VAR_25, VAR_26;
 float VAR_27;




 VAR_16 = 0;
 for (VAR_10=0 ; VAR_10 <3 ; VAR_10++)
 {
  for (VAR_11=-1 ; VAR_11 <= 1 ; VAR_11+=2, VAR_16++)
  {

   for (VAR_12=0, VAR_19=VAR_9->original_sides ; VAR_12<VAR_9->numsides ; VAR_12++,VAR_19++)
   {
    if (VAR_5[VAR_19->planenum].normal[VAR_10] == VAR_11)
     break;
   }

   if (VAR_12 == VAR_9->numsides)
   {
    if (VAR_6 == VAR_0)
     FUNC_2 ("MAX_MAP_BRUSHSIDES");
    VAR_6++;
    VAR_9->numsides++;
    FUNC_6 (VAR_21);
    VAR_21[VAR_10] = VAR_11;
    if (VAR_11 == 1)
     VAR_22 = VAR_9->maxs[VAR_10];
    else
     VAR_22 = -VAR_9->mins[VAR_10];
    VAR_19->planenum = FUNC_3 (VAR_21, VAR_22);
    VAR_19->texinfo = VAR_9->original_sides[0].texinfo;



    VAR_19->contents = VAR_9->original_sides[0].contents;
    VAR_19->flags |= VAR_1;
    VAR_3++;
   }


   if (VAR_12 != VAR_16)
   {
    VAR_17 = VAR_9->original_sides[VAR_16];
    VAR_9->original_sides[VAR_16] = VAR_9->original_sides[VAR_12];
    VAR_9->original_sides[VAR_12] = VAR_17;

    VAR_13 = VAR_9->original_sides - VAR_2;
    VAR_18 = VAR_7[VAR_13+VAR_16];
    VAR_7[VAR_13+VAR_16] = VAR_7[VAR_13+VAR_12];
    VAR_7[VAR_13+VAR_12] = VAR_18;






   }
  }
 }




 if (VAR_9->numsides == 6)
  return;


 for (VAR_12=6 ; VAR_12<VAR_9->numsides ; VAR_12++)
 {
  VAR_19 = VAR_9->original_sides + VAR_12;
  VAR_23 = VAR_19->winding;
  if (!VAR_23)
   continue;
  for (VAR_13=0 ; VAR_13<VAR_23->numpoints ; VAR_13++)
  {
   VAR_14 = (VAR_13+1)%VAR_23->numpoints;
   FUNC_8 (VAR_23->p[VAR_13], VAR_23->p[VAR_14], VAR_25);
   if (FUNC_7 (VAR_25) < 0.5)
    continue;
   FUNC_5 (VAR_25);
   for (VAR_14=0 ; VAR_14<3 ; VAR_14++)
    if ( VAR_25[VAR_14] == -1 || VAR_25[VAR_14] == 1)
     break;
   if (VAR_14 != 3)
    continue;


   for (VAR_10=0 ; VAR_10 <3 ; VAR_10++)
   {
    for (VAR_11=-1 ; VAR_11 <= 1 ; VAR_11+=2)
    {

     FUNC_6 (VAR_26);
     VAR_26[VAR_10] = VAR_11;
     FUNC_0 (VAR_25, VAR_26, VAR_21);
     if (FUNC_7 (VAR_21) < 0.5)
      continue;
     VAR_22 = FUNC_1 (VAR_23->p[VAR_13], VAR_21);



     for (VAR_14=0 ; VAR_14<VAR_9->numsides ; VAR_14++)
     {

      if (FUNC_4 (&VAR_5[VAR_9->original_sides[VAR_14].planenum]
       , VAR_21, VAR_22) )
       break;

      VAR_24 = VAR_9->original_sides[VAR_14].winding;
      if (!VAR_24)
       continue;
      for (VAR_15=0 ; VAR_15<VAR_24->numpoints ; VAR_15++)
      {
       VAR_27 = FUNC_1 (VAR_24->p[VAR_15], VAR_21) - VAR_22;
       if (VAR_27 > 0.1)
        break;
      }
      if (VAR_15 != VAR_24->numpoints)
       break;
     }

     if (VAR_14 != VAR_9->numsides)
      continue;

     if (VAR_6 == VAR_0)
      FUNC_2 ("MAX_MAP_BRUSHSIDES");
     VAR_6++;
     VAR_20 = &VAR_9->original_sides[VAR_9->numsides];
     VAR_20->planenum = FUNC_3 (VAR_21, VAR_22);
     VAR_20->texinfo = VAR_9->original_sides[0].texinfo;



     VAR_20->contents = VAR_9->original_sides[0].contents;
     VAR_20->flags |= VAR_1;
     VAR_4++;
     VAR_9->numsides++;
    }
   }
  }
 }
}
