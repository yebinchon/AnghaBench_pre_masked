
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int leaf; scalar_t__ hint; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_5__ {scalar_t__ merged; int numportals; TYPE_1__** portals; } ;
typedef TYPE_2__ leaf_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

void FUNC_3(void)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 leaf_t *VAR_6;
 vportal_t *VAR_7;

 VAR_5 = 0;
 do
 {
  VAR_4 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
   VAR_6 = &VAR_0[VAR_2];

   if (VAR_6->merged >= 0)
    continue;

   for (VAR_3 = 0; VAR_3 < VAR_6->numportals; VAR_3++)
   {
    VAR_7 = VAR_6->portals[VAR_3];

    if (VAR_7->removed)
     continue;

    if (VAR_7->hint)
     continue;
    if (FUNC_0(VAR_2, VAR_7->leaf))
    {
     FUNC_1();
     VAR_4++;
     break;
    }
   }
  }
  VAR_5 += VAR_4;
 } while (VAR_4);
 FUNC_2("%6d leaves merged\n", VAR_5);
}
