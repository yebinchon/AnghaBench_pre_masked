
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numareas; int initialized; TYPE_1__* areas; } ;
struct TYPE_5__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_4__ {int center; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(void)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_2.initialized = VAR_5;
 VAR_3.Print(VAR_0, "AAS_CreateAllRoutingCache\n");
 for (VAR_6 = 1; VAR_6 < VAR_2.numareas; VAR_6++)
 {
  if (!FUNC_0(VAR_6)) continue;
  for (VAR_7 = 1; VAR_7 < VAR_2.numareas; VAR_7++)
  {
   if (VAR_6 == VAR_7) continue;
   if (!FUNC_0(VAR_7)) continue;
   VAR_8 = FUNC_1(VAR_6, VAR_2.areas[VAR_6].center, VAR_7, VAR_1);

  }
 }
 VAR_2.initialized = VAR_4;
}
