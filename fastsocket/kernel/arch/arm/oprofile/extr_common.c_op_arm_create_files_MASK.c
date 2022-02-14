
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int user; int kernel; int unit_mask; int count; int event; int enabled; } ;
struct TYPE_3__ {unsigned int num_counters; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct super_block*,struct dentry*,char*,int *) ;
 struct dentry* FUNC_1 (struct super_block*,struct dentry*,char*) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_2, struct dentry *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_counters; VAR_4++) {
  struct dentry *VAR_5;
  char VAR_6[4];

  FUNC_2(VAR_6, sizeof VAR_6, "%d", VAR_4);
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_6);
  FUNC_0(VAR_2, VAR_5, "enabled", &VAR_0[VAR_4].enabled);
  FUNC_0(VAR_2, VAR_5, "event", &VAR_0[VAR_4].event);
  FUNC_0(VAR_2, VAR_5, "count", &VAR_0[VAR_4].count);
  FUNC_0(VAR_2, VAR_5, "unit_mask", &VAR_0[VAR_4].unit_mask);
  FUNC_0(VAR_2, VAR_5, "kernel", &VAR_0[VAR_4].kernel);
  FUNC_0(VAR_2, VAR_5, "user", &VAR_0[VAR_4].user);
 }

 return 0;
}
