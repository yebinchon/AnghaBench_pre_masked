
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {int unit_mask; int user; int kernel; int count; int event; int enabled; } ;
struct TYPE_5__ {int num_counters; scalar_t__ can_set_proc_mode; } ;
struct TYPE_4__ {int enable_user; int enable_kernel; int enable_pal; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct super_block*,struct dentry*,char*,int *) ;
 struct dentry* FUNC_1 (struct super_block*,struct dentry*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct super_block *VAR_3, struct dentry *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_counters; ++VAR_5) {
  struct dentry *VAR_6;
  char VAR_7[4];

  FUNC_2(VAR_7, sizeof VAR_7, "%d", VAR_5);
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_7);

  FUNC_0(VAR_3, VAR_6, "enabled", &VAR_0[VAR_5].enabled);
                FUNC_0(VAR_3, VAR_6, "event", &VAR_0[VAR_5].event);
  FUNC_0(VAR_3, VAR_6, "count", &VAR_0[VAR_5].count);

  FUNC_0(VAR_3, VAR_6, "kernel", &VAR_0[VAR_5].kernel);
  FUNC_0(VAR_3, VAR_6, "user", &VAR_0[VAR_5].user);
  FUNC_0(VAR_3, VAR_6, "unit_mask", &VAR_0[VAR_5].unit_mask);
 }

 if (VAR_1->can_set_proc_mode) {
  FUNC_0(VAR_3, VAR_4, "enable_pal",
     &VAR_2.enable_pal);
  FUNC_0(VAR_3, VAR_4, "enable_kernel",
     &VAR_2.enable_kernel);
  FUNC_0(VAR_3, VAR_4, "enable_user",
     &VAR_2.enable_user);
 }

 return 0;
}
