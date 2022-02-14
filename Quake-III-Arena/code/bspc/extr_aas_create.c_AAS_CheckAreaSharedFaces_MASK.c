
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* backarea; TYPE_2__* frontarea; int planenum; int num; struct TYPE_5__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_6__ {int areanum; TYPE_1__* tmpfaces; scalar_t__ invalid; } ;
typedef TYPE_2__ tmp_area_t ;


 int FUNC_0 (char*,int ,int ,int,...) ;

void FUNC_1(tmp_area_t *VAR_0, tmp_area_t *VAR_1)
{
 int VAR_2, VAR_3;
 tmp_face_t *VAR_4, *VAR_5;

 if (VAR_0->invalid || VAR_1->invalid) return;

 VAR_5 = ((void*)0);
 VAR_2 = 0;
 for (VAR_4 = VAR_0->tmpfaces; VAR_4; VAR_4 = VAR_4->next[VAR_3])
 {
  VAR_3 = VAR_4->frontarea != VAR_0;
  if (VAR_4->backarea == VAR_1 || VAR_4->frontarea == VAR_1)
  {
   VAR_5 = VAR_4;
   VAR_2++;
  }
 }
 if (!VAR_5) return;

 if (VAR_2 > 1)
 {
  FUNC_0("---- tmp area %d and %d have %d shared faces\r\n",
         VAR_0->areanum, VAR_1->areanum, VAR_2);
  for (VAR_4 = VAR_0->tmpfaces; VAR_4; VAR_4 = VAR_4->next[VAR_3])
  {
   VAR_3 = VAR_4->frontarea != VAR_0;
   if (VAR_4->backarea == VAR_1 || VAR_4->frontarea == VAR_1)
   {
    FUNC_0("face %d, planenum = %d, face->frontarea = %d face->backarea = %d\r\n",
        VAR_4->num, VAR_4->planenum, VAR_4->frontarea->areanum, VAR_4->backarea->areanum);
   }
  }
 }
}
