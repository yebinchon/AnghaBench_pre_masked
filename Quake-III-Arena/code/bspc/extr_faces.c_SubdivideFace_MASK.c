
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef float vec_t ;
typedef int vec3_t ;
struct TYPE_13__ {int flags; int * vecs; } ;
typedef TYPE_2__ texinfo_t ;
struct TYPE_14__ {TYPE_4__* faces; } ;
typedef TYPE_3__ node_t ;
struct TYPE_15__ {size_t texinfo; struct TYPE_15__** split; struct TYPE_15__* next; TYPE_1__* w; scalar_t__ merged; } ;
typedef TYPE_4__ face_t ;


 int FUNC_0 (TYPE_1__*,int ,float,int ,TYPE_1__**,TYPE_1__**) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 float FUNC_5 (int ) ;
 int VAR_3 ;
 float VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_6 (node_t *VAR_6, face_t *VAR_7)
{
 float VAR_8, VAR_9;
 vec_t VAR_10;
 int VAR_11, VAR_12;
 texinfo_t *VAR_13;
 vec3_t VAR_14;
 vec_t VAR_15;
 winding_t *VAR_16, *VAR_17, *VAR_18;

 if (VAR_7->merged)
  return;


 VAR_13 = &VAR_5[VAR_7->texinfo];

 if ( VAR_13->flags & (VAR_2|VAR_1) )
 {
  return;
 }

 for (VAR_11 = 0 ; VAR_11 < 2 ; VAR_11++)
 {
  while (1)
  {
   VAR_8 = 999999;
   VAR_9 = -999999;

   FUNC_4 (VAR_13->vecs[VAR_11], VAR_14);
   VAR_16 = VAR_7->w;
   for (VAR_12=0 ; VAR_12<VAR_16->numpoints ; VAR_12++)
   {
    VAR_10 = FUNC_1 (VAR_16->p[VAR_12], VAR_14);
    if (VAR_10 < VAR_8)
     VAR_8 = VAR_10;
    if (VAR_10 > VAR_9)
     VAR_9 = VAR_10;
   }




   if (VAR_11 == 2)
   {
    if (VAR_9 - VAR_8 <= VAR_4 )
     break;
   }
   else if (VAR_9 - VAR_8 <= VAR_4)
    break;


   VAR_3++;

   VAR_10 = FUNC_5 (VAR_14);

   VAR_15 = (VAR_8 + VAR_4 - 16)/VAR_10;

   FUNC_0 (VAR_16, VAR_14, VAR_15, VAR_0, &VAR_17, &VAR_18);
   if (!VAR_17 || !VAR_18)
    FUNC_2 ("SubdivideFace: didn't split the polygon");

   VAR_7->split[0] = FUNC_3 (VAR_7);
   VAR_7->split[0]->w = VAR_17;
   VAR_7->split[0]->next = VAR_6->faces;
   VAR_6->faces = VAR_7->split[0];

   VAR_7->split[1] = FUNC_3 (VAR_7);
   VAR_7->split[1]->w = VAR_18;
   VAR_7->split[1]->next = VAR_6->faces;
   VAR_6->faces = VAR_7->split[1];

   FUNC_6 (VAR_6, VAR_7->split[0]);
   FUNC_6 (VAR_6, VAR_7->split[1]);
   return;
  }
 }
}
