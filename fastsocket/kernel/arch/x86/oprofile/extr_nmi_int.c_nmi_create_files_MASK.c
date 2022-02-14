
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {int extra; int user; int kernel; int unit_mask; int count; int event; int enabled; } ;
struct TYPE_3__ {unsigned int num_virt_counters; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct super_block*,struct dentry*,char*,int *) ;
 struct dentry* FUNC_3 (struct super_block*,struct dentry*,char*) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2, struct dentry *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_virt_counters; ++VAR_4) {
  struct dentry *VAR_5;
  char VAR_6[4];






  if (!FUNC_0(FUNC_1(VAR_4)))
   continue;

  FUNC_4(VAR_6, sizeof(VAR_6), "%d", VAR_4);
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_6);
  FUNC_2(VAR_2, VAR_5, "enabled", &VAR_0[VAR_4].enabled);
  FUNC_2(VAR_2, VAR_5, "event", &VAR_0[VAR_4].event);
  FUNC_2(VAR_2, VAR_5, "count", &VAR_0[VAR_4].count);
  FUNC_2(VAR_2, VAR_5, "unit_mask", &VAR_0[VAR_4].unit_mask);
  FUNC_2(VAR_2, VAR_5, "kernel", &VAR_0[VAR_4].kernel);
  FUNC_2(VAR_2, VAR_5, "user", &VAR_0[VAR_4].user);
  FUNC_2(VAR_2, VAR_5, "extra", &VAR_0[VAR_4].extra);
 }

 return 0;
}
