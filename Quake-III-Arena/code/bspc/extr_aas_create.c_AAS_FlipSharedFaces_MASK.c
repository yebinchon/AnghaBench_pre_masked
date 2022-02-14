
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* frontarea; TYPE_2__* backarea; struct TYPE_5__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_6__ {TYPE_1__* tmpfaces; scalar_t__ invalid; struct TYPE_6__* l_next; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_7__ {TYPE_2__* areas; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__ VAR_0 ;

void FUNC_3(void)
{
 int VAR_1, VAR_2, VAR_3;
 tmp_area_t *VAR_4;
 tmp_face_t *VAR_5, *VAR_6;

 VAR_1 = 0;
 FUNC_2("%6d areas checked for shared face flipping", VAR_1);
 for (VAR_4 = VAR_0.areas; VAR_4; VAR_4 = VAR_4->l_next)
 {
  if (VAR_4->invalid) continue;
  for (VAR_5 = VAR_4->tmpfaces; VAR_5; VAR_5 = VAR_5->next[VAR_2])
  {
   VAR_2 = VAR_5->frontarea != VAR_4;
   if (!VAR_5->frontarea || !VAR_5->backarea) continue;

   for (VAR_6 = VAR_5->next[VAR_2]; VAR_6; VAR_6 = VAR_6->next[VAR_3])
   {
    VAR_3 = VAR_6->frontarea != VAR_4;
    if (!VAR_6->frontarea || !VAR_6->backarea) continue;

    if (VAR_5->frontarea == VAR_6->backarea &&
     VAR_5->backarea == VAR_6->frontarea)
    {
     FUNC_0(VAR_6);
    }

    VAR_3 = VAR_6->frontarea != VAR_4;
   }
  }
  FUNC_2("\r%6d", ++VAR_1);
 }
 FUNC_2("\n");
 FUNC_1("%6d areas checked for shared face flipping\r\n", VAR_1);
}
