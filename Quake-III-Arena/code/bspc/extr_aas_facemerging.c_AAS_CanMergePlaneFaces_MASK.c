
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int planenum; int faceflags; TYPE_2__* backarea; TYPE_2__* frontarea; struct TYPE_4__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_5__ {TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;



int FUNC_0(tmp_area_t *VAR_0, int VAR_1)
{
 tmp_area_t *VAR_2, *VAR_3;
 tmp_face_t *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_2 = VAR_3 = ((void*)0);
 VAR_6 = 0;
 for (VAR_4 = VAR_0->tmpfaces; VAR_4; VAR_4 = VAR_4->next[VAR_5])
 {
  VAR_5 = VAR_4->frontarea != VAR_0;
  if ((VAR_4->planenum & ~1) != (VAR_1 & ~1)) continue;
  if (!VAR_2 && !VAR_3)
  {
   VAR_2 = VAR_4->frontarea;
   VAR_3 = VAR_4->backarea;
   VAR_7 = VAR_4->faceflags;
  }
  else
  {
   if (VAR_2 != VAR_4->frontarea) return 0;
   if (VAR_3 != VAR_4->backarea) return 0;
   if (VAR_7 != VAR_4->faceflags) return 0;
   VAR_6 = 1;
  }
 }
 return VAR_6;
}
