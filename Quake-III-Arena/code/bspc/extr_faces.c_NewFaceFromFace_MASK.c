
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * w; int ** split; int * merged; } ;
typedef TYPE_1__ face_t ;


 TYPE_1__* FUNC_0 () ;

face_t *FUNC_1 (face_t *VAR_0)
{
 face_t *VAR_1;

 VAR_1 = FUNC_0 ();
 *VAR_1 = *VAR_0;
 VAR_1->merged = ((void*)0);
 VAR_1->split[0] = VAR_1->split[1] = ((void*)0);
 VAR_1->w = ((void*)0);
 return VAR_1;
}
