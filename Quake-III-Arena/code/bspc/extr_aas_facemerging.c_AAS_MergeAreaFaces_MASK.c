
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* frontarea; struct TYPE_7__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_8__ {TYPE_1__* tmpfaces; scalar_t__ invalid; struct TYPE_8__* l_next; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_9__ {TYPE_2__* areas; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 TYPE_3__ VAR_0 ;

void FUNC_4(void)
{
 int VAR_1 = 0;
 int VAR_2, VAR_3, VAR_4;
 tmp_area_t *VAR_5, *VAR_6;
 tmp_face_t *VAR_7, *VAR_8;

 FUNC_2("AAS_MergeAreaFaces\r\n");
 FUNC_3("%6d face merges", VAR_1);

 VAR_6 = VAR_0.areas;
 for (VAR_5 = VAR_0.areas; VAR_5; VAR_5 = VAR_5->l_next)
 {
  VAR_4 = 0;

  if (VAR_5->invalid) continue;

  for (VAR_7 = VAR_5->tmpfaces; VAR_7; VAR_7 = VAR_7->next[VAR_2])
  {
   VAR_2 = VAR_7->frontarea != VAR_5;
   for (VAR_8 = VAR_7->next[VAR_2]; VAR_8; VAR_8 = VAR_8->next[VAR_3])
   {
    VAR_3 = VAR_8->frontarea != VAR_5;

    if (FUNC_1(VAR_7, VAR_8))
    {

     VAR_4 = 1;
     VAR_1++;
     FUNC_3("\r%6d", VAR_1);
     FUNC_0(VAR_5);
     break;
    }
   }
   if (VAR_4)
   {
    VAR_5 = VAR_6;
    break;
   }
  }
  VAR_6 = VAR_5;
 }
 FUNC_3("\n");
 FUNC_2("%6d face merges\r\n", VAR_1);
}
