
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_ddbs; int ddb_lock; int ddb_bitmap; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct asd_ha_struct *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);


 VAR_3 = (VAR_2->hw_prof.max_ddbs+7)/8;
 VAR_3 = FUNC_0(VAR_3*8)*sizeof(unsigned long);
 VAR_2->hw_prof.ddb_bitmap = FUNC_4(VAR_3, VAR_1);
 if (!VAR_2->hw_prof.ddb_bitmap)
  return -VAR_0;
 FUNC_5(&VAR_2->hw_prof.ddb_lock);

 return 0;
}
