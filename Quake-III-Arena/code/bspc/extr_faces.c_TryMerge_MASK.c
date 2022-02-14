
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec3_t ;
struct TYPE_7__ {scalar_t__ texinfo; scalar_t__ planenum; scalar_t__ contents; struct TYPE_7__* merged; int * w; } ;
typedef TYPE_1__ face_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

face_t *FUNC_2 (face_t *VAR_1, face_t *VAR_2, vec3_t VAR_3)
{
 face_t *VAR_4;
 winding_t *VAR_5;

 if (!VAR_1->w || !VAR_2->w)
  return ((void*)0);
 if (VAR_1->texinfo != VAR_2->texinfo)
  return ((void*)0);
 if (VAR_1->planenum != VAR_2->planenum)
  return ((void*)0);
 if (VAR_1->contents != VAR_2->contents)
  return ((void*)0);


 VAR_5 = FUNC_1 (VAR_1->w, VAR_2->w, VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_0++;
 VAR_4 = FUNC_0 (VAR_1);
 VAR_4->w = VAR_5;

 VAR_1->merged = VAR_4;
 VAR_2->merged = VAR_4;

 return VAR_4;
}
