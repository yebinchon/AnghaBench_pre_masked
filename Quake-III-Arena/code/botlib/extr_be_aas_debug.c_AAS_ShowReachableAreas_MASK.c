
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int traveltype; } ;
typedef TYPE_1__ aas_reachability_t ;
struct TYPE_8__ {int numreachableareas; int firstreachablearea; } ;
typedef TYPE_2__ aas_areasettings_t ;
struct TYPE_10__ {int * reachability; TYPE_2__* areasettings; } ;
struct TYPE_9__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 float FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(int VAR_4)
{
 aas_areasettings_t *VAR_5;
 static aas_reachability_t VAR_6;
 static int VAR_7, VAR_8;
 static float VAR_9;

 if (VAR_4 != VAR_8)
 {
  VAR_7 = 0;
  VAR_8 = VAR_4;
 }
 VAR_5 = &VAR_2.areasettings[VAR_4];

 if (!VAR_5->numreachableareas) return;

 if (VAR_7 >= VAR_5->numreachableareas) VAR_7 = 0;

 if (FUNC_2() - VAR_9 > 1.5)
 {
  FUNC_3(&VAR_6, &VAR_2.reachability[VAR_5->firstreachablearea + VAR_7], sizeof(aas_reachability_t));
  VAR_7++;
  VAR_9 = FUNC_2();
  FUNC_0(VAR_6.traveltype & VAR_1);
  VAR_3.Print(VAR_0, "\n");
 }
 FUNC_1(&VAR_6);
}
