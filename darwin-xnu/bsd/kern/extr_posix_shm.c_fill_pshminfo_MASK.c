
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vinfo_stat {int vst_size; int vst_gid; int vst_uid; int vst_mode; } ;
struct pshmnode {int mapp_addr; struct pshminfo* pinfo; } ;
struct pshminfo {int * pshm_name; int pshm_length; int pshm_gid; int pshm_uid; int pshm_mode; } ;
struct pshm_info {int * pshm_name; int pshm_mappaddr; struct vinfo_stat pshm_stat; } ;


 int VAR_0 ;
 struct pshminfo* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (struct vinfo_stat*,int) ;

int
FUNC_4(struct pshmnode * VAR_3, struct pshm_info * VAR_4)
{
 struct pshminfo *VAR_5;
 struct vinfo_stat *VAR_6;

 FUNC_0();
 if ((VAR_5 = VAR_3->pinfo) == VAR_1){
  FUNC_1();
  return(VAR_0);
 }

 VAR_6 = &VAR_4->pshm_stat;

 FUNC_3(VAR_6, sizeof(struct vinfo_stat));
 VAR_6->vst_mode = VAR_5->pshm_mode;
 VAR_6->vst_uid = VAR_5->pshm_uid;
 VAR_6->vst_gid = VAR_5->pshm_gid;
 VAR_6->vst_size = VAR_5->pshm_length;

 VAR_4->pshm_mappaddr = VAR_3->mapp_addr;
 FUNC_2(&VAR_5->pshm_name[0], &VAR_4->pshm_name[0], VAR_2+1);

 FUNC_1();
 return(0);
}
