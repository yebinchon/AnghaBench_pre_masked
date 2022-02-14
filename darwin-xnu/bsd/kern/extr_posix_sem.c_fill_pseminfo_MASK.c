
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vinfo_stat {int vst_size; int vst_gid; int vst_uid; int vst_mode; } ;
struct psemnode {struct pseminfo* pinfo; } ;
struct pseminfo {int psem_flags; int * psem_name; int psem_usecount; int psem_gid; int psem_uid; int psem_mode; } ;
struct psem_info {int * psem_name; struct vinfo_stat psem_stat; } ;


 int VAR_0 ;
 struct pseminfo* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (struct vinfo_stat*,int) ;

int
FUNC_4(struct psemnode *VAR_4, struct psem_info * VAR_5)
{
 struct pseminfo *VAR_6;
 struct vinfo_stat *VAR_7;

 FUNC_0();
 if ((VAR_6 = VAR_4->pinfo) == VAR_1){
  FUNC_1();
  return(VAR_0);
 }
 VAR_7 = &VAR_5->psem_stat;
 FUNC_3(VAR_7, sizeof(struct vinfo_stat));

     VAR_7->vst_mode = VAR_6->psem_mode;
     VAR_7->vst_uid = VAR_6->psem_uid;
     VAR_7->vst_gid = VAR_6->psem_gid;
     VAR_7->vst_size = VAR_6->psem_usecount;
 FUNC_2(&VAR_6->psem_name[0], &VAR_5->psem_name[0], VAR_2+1);

 FUNC_1();
 return(0);
}
