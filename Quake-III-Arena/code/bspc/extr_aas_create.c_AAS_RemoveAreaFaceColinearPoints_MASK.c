
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int winding; TYPE_2__* frontarea; struct TYPE_4__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_5__ {TYPE_1__* tmpfaces; struct TYPE_5__* l_next; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_6__ {TYPE_2__* areas; } ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_1(void)
{
 int VAR_1;
 tmp_face_t *VAR_2;
 tmp_area_t *VAR_3;


 for (VAR_3 = VAR_0.areas; VAR_3; VAR_3 = VAR_3->l_next)
 {
  for (VAR_2 = VAR_3->tmpfaces; VAR_2; VAR_2 = VAR_2->next[VAR_1])
  {
   VAR_1 = VAR_2->frontarea != VAR_3;
   FUNC_0(VAR_2->winding);

  }
 }
}
