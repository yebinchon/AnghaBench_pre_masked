
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int queue_entry_t ;
struct TYPE_6__ {int lck_grp_refcnt; int lck_grp_attr; int lck_grp_name; } ;
typedef TYPE_1__ lck_grp_t ;
struct TYPE_7__ {int grp_attr_val; } ;
typedef TYPE_2__ lck_grp_attr_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int ) ;

void
FUNC_6(lck_grp_t * VAR_9, const char * VAR_10, lck_grp_attr_t * VAR_11)
{

 FUNC_0(VAR_6 > 0);

 FUNC_1((void *)VAR_9, sizeof(lck_grp_t));

 (void)FUNC_5(VAR_9->lck_grp_name, VAR_10, VAR_3);

 if (VAR_11 != VAR_1)
  VAR_9->lck_grp_attr = VAR_11->grp_attr_val;
 else if (VAR_4 & VAR_5)
  VAR_9->lck_grp_attr = VAR_2;
 else
  VAR_9->lck_grp_attr = VAR_0;

 VAR_9->lck_grp_refcnt = 1;

 FUNC_3(&VAR_7);
 FUNC_2(&VAR_8, (queue_entry_t)VAR_9);
 VAR_6++;
 FUNC_4(&VAR_7);
}
