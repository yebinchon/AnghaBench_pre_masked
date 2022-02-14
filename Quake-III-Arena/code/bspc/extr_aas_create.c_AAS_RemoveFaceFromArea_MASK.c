
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__** next; TYPE_1__** prev; TYPE_4__* frontarea; TYPE_4__* backarea; } ;
typedef TYPE_3__ tmp_face_t ;
struct TYPE_10__ {TYPE_2__* tmpfaces; } ;
typedef TYPE_4__ tmp_area_t ;
struct TYPE_8__ {TYPE_1__** prev; TYPE_4__* frontarea; } ;
struct TYPE_7__ {TYPE_2__** next; TYPE_4__* frontarea; } ;


 int FUNC_0 (char*) ;

void FUNC_1(tmp_face_t *VAR_0, tmp_area_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 if (VAR_0->frontarea != VAR_1 &&
   VAR_0->backarea != VAR_1)
 {
  FUNC_0("AAS_RemoveFaceFromArea: face not part of the area");
 }
 VAR_2 = VAR_0->frontarea != VAR_1;
 if (VAR_0->prev[VAR_2])
 {
  VAR_3 = VAR_0->prev[VAR_2]->frontarea != VAR_1;
  VAR_0->prev[VAR_2]->next[VAR_3] = VAR_0->next[VAR_2];
 }
 else
 {
  VAR_1->tmpfaces = VAR_0->next[VAR_2];
 }
 if (VAR_0->next[VAR_2])
 {
  VAR_4 = VAR_0->next[VAR_2]->frontarea != VAR_1;
  VAR_0->next[VAR_2]->prev[VAR_4] = VAR_0->prev[VAR_2];
 }

 if (VAR_2) VAR_0->backarea = ((void*)0);
 else VAR_0->frontarea = ((void*)0);
 VAR_0->prev[VAR_2] = ((void*)0);
 VAR_0->next[VAR_2] = ((void*)0);
}
