
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct drm_minor {int index; int proc_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct drm_minor*) ;
 int FUNC_1 (char*,struct proc_dir_entry*) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(struct drm_minor *VAR_2, struct proc_dir_entry *VAR_3)
{
 char VAR_4[64];

 if (!VAR_3 || !VAR_2->proc_root)
  return 0;

 FUNC_0(VAR_1, VAR_0, VAR_2);

 FUNC_2(VAR_4, "%d", VAR_2->index);
 FUNC_1(VAR_4, VAR_3);

 return 0;
}
