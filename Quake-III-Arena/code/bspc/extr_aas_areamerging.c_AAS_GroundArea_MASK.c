
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int faceflags; TYPE_2__* frontarea; struct TYPE_4__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_5__ {TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;


 int VAR_0 ;

int FUNC_0(tmp_area_t *VAR_1)
{
 tmp_face_t *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_1->tmpfaces; VAR_2; VAR_2 = VAR_2->next[VAR_3])
 {
  VAR_3 = (VAR_2->frontarea != VAR_1);
  if (VAR_2->faceflags & VAR_0) return 1;
 }
 return 0;
}
