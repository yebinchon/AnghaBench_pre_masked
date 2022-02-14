
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int* vec3_t ;
struct TYPE_8__ {size_t planenum; void* bevel; int contents; TYPE_1__* winding; } ;
typedef TYPE_2__ side_t ;
struct TYPE_10__ {int numsides; float* maxs; float* mins; TYPE_2__* sides; } ;
struct TYPE_9__ {int* normal; } ;


 int FUNC_0 (int*,int*,int*) ;
 float FUNC_1 (int ,int*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int*,float) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_4__*,int*,float) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 double FUNC_7 (int*,int*) ;
 int FUNC_8 (int ,int ,int*) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 void* VAR_5 ;

void FUNC_10( void ) {
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 side_t VAR_10;
 side_t *VAR_11;
 vec3_t VAR_12;
 float VAR_13;




 VAR_9 = 0;
 for (VAR_6=0 ; VAR_6 <3 ; VAR_6++)
 {
  for (VAR_7=-1 ; VAR_7 <= 1 ; VAR_7+=2, VAR_9++)
  {

   for ( VAR_8=0, VAR_11=VAR_1->sides ; VAR_8 < VAR_1->numsides ; VAR_8++,VAR_11++ ) {
    if (VAR_4[VAR_11->planenum].normal[VAR_6] == VAR_7)
     break;
   }

   if (VAR_8 == VAR_1->numsides )
   {
    if ( VAR_1->numsides == VAR_0 ) {
     FUNC_2( "MAX_BUILD_SIDES" );
    }
    FUNC_9( VAR_11, 0, sizeof( *VAR_11 ) );
    VAR_1->numsides++;
    FUNC_6 (VAR_12);
    VAR_12[VAR_6] = VAR_7;
    if (VAR_7 == 1)
     VAR_13 = VAR_1->maxs[VAR_6];
    else
     VAR_13 = -VAR_1->mins[VAR_6];
    VAR_11->planenum = FUNC_3 (VAR_12, VAR_13);
    VAR_11->contents = VAR_1->sides[0].contents;
    VAR_11->bevel = VAR_5;
    VAR_2++;
   }


   if (VAR_8 != VAR_9)
   {
    VAR_10 = VAR_1->sides[VAR_9];
    VAR_1->sides[VAR_9] = VAR_1->sides[VAR_8];
    VAR_1->sides[VAR_8] = VAR_10;
   }
  }
 }




 if ( VAR_1->numsides == 6 ) {
  return;
  } else {
   int VAR_14, VAR_15, VAR_16;
   float VAR_17;
   winding_t *VAR_18, *VAR_19;
   side_t *VAR_20;
   vec3_t VAR_21, VAR_22;



   for (VAR_8=6 ; VAR_8<VAR_1->numsides ; VAR_8++)
   {
    VAR_11 = VAR_1->sides + VAR_8;
    VAR_18 = VAR_11->winding;
    if (!VAR_18)
     continue;
    for (VAR_14=0 ; VAR_14<VAR_18->numpoints ; VAR_14++)
    {
     VAR_15 = (VAR_14+1)%VAR_18->numpoints;
     FUNC_8 (VAR_18->p[VAR_14], VAR_18->p[VAR_15], VAR_21);
     if (FUNC_7 (VAR_21, VAR_21) < 0.5)
      continue;
     FUNC_5 (VAR_21);
     for (VAR_15=0 ; VAR_15<3 ; VAR_15++)
      if ( VAR_21[VAR_15] == -1 || VAR_21[VAR_15] == 1)
       break;
     if (VAR_15 != 3)
      continue;


     for (VAR_6=0 ; VAR_6 <3 ; VAR_6++)
     {
      for (VAR_7=-1 ; VAR_7 <= 1 ; VAR_7+=2)
      {

       FUNC_6 (VAR_22);
       VAR_22[VAR_6] = VAR_7;
       FUNC_0 (VAR_21, VAR_22, VAR_12);
       if (FUNC_7 (VAR_12, VAR_12) < 0.5)
        continue;
       VAR_13 = FUNC_1 (VAR_18->p[VAR_14], VAR_12);



       for (VAR_15=0 ; VAR_15 < VAR_1->numsides ; VAR_15++)
       {

        if (FUNC_4 (&VAR_4[VAR_1->sides[VAR_15].planenum]
         , VAR_12, VAR_13) )
         break;

        VAR_19 = VAR_1->sides[VAR_15].winding;
        if (!VAR_19)
         continue;
        for (VAR_16=0 ; VAR_16<VAR_19->numpoints ; VAR_16++)
        {
         VAR_17 = FUNC_1 (VAR_19->p[VAR_16], VAR_12) - VAR_13;
         if (VAR_17 > 0.1)
          break;
        }
        if (VAR_16 != VAR_19->numpoints)
         break;
       }

       if (VAR_15 != VAR_1->numsides)
        continue;

       if ( VAR_1->numsides == VAR_0 ) {
        FUNC_2( "MAX_BUILD_SIDES" );
       }

       VAR_20 = &VAR_1->sides[VAR_1->numsides];
       VAR_1->numsides++;
       FUNC_9( VAR_20, 0, sizeof( *VAR_20 ) );

       VAR_20->planenum = FUNC_3 (VAR_12, VAR_13);
       VAR_20->contents = VAR_1->sides[0].contents;
       VAR_20->bevel = VAR_5;
       VAR_3++;
      }
     }
    }
   }
  }
}
