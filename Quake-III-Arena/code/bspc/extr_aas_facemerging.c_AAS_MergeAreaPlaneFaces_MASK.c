
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int planenum; TYPE_2__* frontarea; struct TYPE_6__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_7__ {TYPE_1__* tmpfaces; scalar_t__ invalid; struct TYPE_7__* l_next; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_8__ {TYPE_2__* areas; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 TYPE_3__ VAR_0 ;

void FUNC_4(void)
{
 int VAR_1 = 0;
 int VAR_2;
 tmp_area_t *VAR_3, *VAR_4;
 tmp_face_t *VAR_5;

 FUNC_2("AAS_MergePlaneFaces\r\n");
 FUNC_3("%6d plane face merges", VAR_1);

 for (VAR_3 = VAR_0.areas; VAR_3; VAR_3 = VAR_4)
 {
  VAR_4 = VAR_3->l_next;

  if (VAR_3->invalid) continue;

  for (VAR_5 = VAR_3->tmpfaces; VAR_5; VAR_5 = VAR_5->next[VAR_2])
  {
   VAR_2 = VAR_5->frontarea != VAR_3;

   if (FUNC_0(VAR_3, VAR_5->planenum))
   {
    FUNC_1(VAR_3, VAR_5->planenum);
    VAR_4 = VAR_3;
    VAR_1++;
    FUNC_3("\r%6d", VAR_1);
    break;
   }
  }
 }
 FUNC_3("\n");
 FUNC_2("%6d plane face merges\r\n", VAR_1);
}
