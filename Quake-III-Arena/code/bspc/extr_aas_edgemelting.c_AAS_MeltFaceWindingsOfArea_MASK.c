
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* frontarea; struct TYPE_6__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_7__ {TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

int FUNC_1(tmp_area_t *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0;
 tmp_face_t *VAR_4, *VAR_5;

 for (VAR_4 = VAR_0->tmpfaces; VAR_4; VAR_4 = VAR_4->next[VAR_1])
 {
  VAR_1 = VAR_4->frontarea != VAR_0;
  for (VAR_5 = VAR_0->tmpfaces; VAR_5; VAR_5 = VAR_5->next[VAR_2])
  {
   VAR_2 = VAR_5->frontarea != VAR_0;
   if (VAR_4 == VAR_5) continue;
   VAR_3 += FUNC_0(VAR_4, VAR_5);
  }
 }
 return VAR_3;
}
