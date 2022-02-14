
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct crisv32_watch_entry {int dummy; } ;
struct TYPE_6__ {void* bp3; void* bp2; void* bp0; } ;
typedef TYPE_1__ reg_marb_rw_intr_mask ;
struct TYPE_7__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* VAR_7 ;

int FUNC_6(int VAR_8)
{
 reg_marb_rw_intr_mask VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_6);

 FUNC_2();

 FUNC_4(&VAR_2);

 if ((VAR_8 < 0) || (VAR_8 >= VAR_1) || (!VAR_7[VAR_8].used)) {
  FUNC_5(&VAR_2);
  return -VAR_0;
 }

 FUNC_3(&VAR_7[VAR_8], 0, sizeof(struct crisv32_watch_entry));

 if (VAR_8 == 0)
  VAR_9.bp0 = VAR_5;
 else if (VAR_8 == 1)
  VAR_9.bp2 = VAR_5;
 else if (VAR_8 == 2)
  VAR_9.bp2 = VAR_5;
 else if (VAR_8 == 3)
  VAR_9.bp3 = VAR_5;

 FUNC_1(VAR_3, VAR_4, VAR_6, VAR_9);

 FUNC_5(&VAR_2);
 return 0;
}
