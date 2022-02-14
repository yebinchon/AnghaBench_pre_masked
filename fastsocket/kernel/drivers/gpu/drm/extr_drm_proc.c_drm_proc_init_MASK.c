
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_2__ {int list; } ;
struct drm_minor {int * proc_root; TYPE_1__ proc_nodes; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *,struct drm_minor*) ;
 int VAR_1 ;
 int * FUNC_3 (char*,struct proc_dir_entry*) ;
 int FUNC_4 (char*,struct proc_dir_entry*) ;
 int FUNC_5 (char*,char*,int) ;

int FUNC_6(struct drm_minor *VAR_2, int VAR_3,
    struct proc_dir_entry *VAR_4)
{
 char VAR_5[64];
 int VAR_6;

 FUNC_1(&VAR_2->proc_nodes.list);
 FUNC_5(VAR_5, "%d", VAR_3);
 VAR_2->proc_root = FUNC_3(VAR_5, VAR_4);
 if (!VAR_2->proc_root) {
  FUNC_0("Cannot create /proc/dri/%s\n", VAR_5);
  return -1;
 }

 VAR_6 = FUNC_2(VAR_1, VAR_0,
        VAR_2->proc_root, VAR_2);
 if (VAR_6) {
  FUNC_4(VAR_5, VAR_4);
  VAR_2->proc_root = ((void*)0);
  FUNC_0("Failed to create core drm proc files\n");
  return VAR_6;
 }

 return 0;
}
