
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_scbs; int max_ddbs; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;

__attribute__((used)) static void FUNC_3(struct asd_ha_struct *VAR_2)
{
 VAR_2->hw_prof.max_scbs = FUNC_1(VAR_2)/VAR_1;
 VAR_2->hw_prof.max_ddbs = FUNC_2(VAR_2)/VAR_0;
 FUNC_0("max_scbs:%d, max_ddbs:%d\n",
      VAR_2->hw_prof.max_scbs,
      VAR_2->hw_prof.max_ddbs);
}
