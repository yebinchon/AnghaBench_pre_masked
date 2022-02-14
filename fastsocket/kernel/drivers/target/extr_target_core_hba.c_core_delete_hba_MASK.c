
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_hba {TYPE_1__* transport; int hba_id; int hba_node; int dev_count; } ;
struct TYPE_2__ {scalar_t__ owner; int (* detach_hba ) (struct se_hba*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct se_hba*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct se_hba*) ;

int
FUNC_8(struct se_hba *VAR_1)
{
 FUNC_0(VAR_1->dev_count);

 VAR_1->transport->detach_hba(VAR_1);

 FUNC_5(&VAR_0);
 FUNC_2(&VAR_1->hba_node);
 FUNC_6(&VAR_0);

 FUNC_4("CORE_HBA[%d] - Detached HBA from Generic Target"
   " Core\n", VAR_1->hba_id);

 if (VAR_1->transport->owner)
  FUNC_3(VAR_1->transport->owner);

 VAR_1->transport = ((void*)0);
 FUNC_1(VAR_1);
 return 0;
}
