
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* backarea; TYPE_2__* frontarea; int winding; struct TYPE_7__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_8__ {TYPE_1__* tmpfaces; struct TYPE_8__* l_next; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_9__ {TYPE_2__* areas; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_4(void)
{
 int VAR_1, VAR_2;
 tmp_face_t *VAR_3, *VAR_4;
 tmp_area_t *VAR_5;


 FUNC_2("AAS_RemoveTinyFaces\r\n");
 VAR_2 = 0;
 for (VAR_5 = VAR_0.areas; VAR_5; VAR_5 = VAR_5->l_next)
 {
  for (VAR_3 = VAR_5->tmpfaces; VAR_3; VAR_3 = VAR_4)
  {
   VAR_1 = VAR_3->frontarea != VAR_5;
   VAR_4 = VAR_3->next[VAR_1];

   if (FUNC_3(VAR_3->winding) < 1)
   {
    if (VAR_3->frontarea) FUNC_1(VAR_3, VAR_3->frontarea);
    if (VAR_3->backarea) FUNC_1(VAR_3, VAR_3->backarea);
    FUNC_0(VAR_3);

    VAR_2++;
   }
  }
 }
 FUNC_2("%d tiny faces removed\r\n", VAR_2);
}
