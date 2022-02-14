
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {scalar_t__ num_points; TYPE_2__* points; TYPE_1__* outline; } ;
struct TYPE_7__ {int org_y; int org_x; int org_v; int org_u; int * hint; scalar_t__ flags2; } ;
struct TYPE_6__ {TYPE_4__* points; } ;
typedef TYPE_2__* PSH_Point ;
typedef TYPE_3__* PSH_Glyph ;
typedef TYPE_4__ FT_Vector ;
typedef scalar_t__ FT_UInt ;
typedef scalar_t__ FT_Int ;



__attribute__((used)) static void
  FUNC_0( PSH_Glyph VAR_0,
                         FT_Int VAR_1 )
  {
    FT_Vector* VAR_2 = VAR_0->outline->points;
    PSH_Point VAR_3 = VAR_0->points;
    FT_UInt VAR_4 = VAR_0->num_points;


    for ( ; VAR_4 > 0; VAR_4--, VAR_3++, VAR_2++ )
    {
      VAR_3->flags2 = 0;
      VAR_3->hint = ((void*)0);
      if ( VAR_1 == 0 )
      {
        VAR_3->org_u = VAR_2->x;
        VAR_3->org_v = VAR_2->y;
      }
      else
      {
        VAR_3->org_u = VAR_2->y;
        VAR_3->org_v = VAR_2->x;
      }






    }
  }
