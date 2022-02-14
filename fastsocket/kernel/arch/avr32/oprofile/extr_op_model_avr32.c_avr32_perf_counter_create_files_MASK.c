
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
typedef int filename ;
struct TYPE_2__ {int unit_mask; int user; int kernel; int count; int event; int enabled; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct super_block*,struct dentry*,char*,int *) ;
 struct dentry* FUNC_1 (struct super_block*,struct dentry*,char*) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_2,
  struct dentry *VAR_3)
{
 struct dentry *VAR_4;
 unsigned int VAR_5;
 char VAR_6[4];

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_2(VAR_6, sizeof(VAR_6), "%u", VAR_5);
  VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_6);

  FUNC_0(VAR_2, VAR_4, "enabled",
    &VAR_1[VAR_5].enabled);
  FUNC_0(VAR_2, VAR_4, "event",
    &VAR_1[VAR_5].event);
  FUNC_0(VAR_2, VAR_4, "count",
    &VAR_1[VAR_5].count);


  FUNC_0(VAR_2, VAR_4, "kernel",
    &VAR_1[VAR_5].kernel);
  FUNC_0(VAR_2, VAR_4, "user",
    &VAR_1[VAR_5].user);
  FUNC_0(VAR_2, VAR_4, "unit_mask",
    &VAR_1[VAR_5].unit_mask);
 }

 return 0;
}
