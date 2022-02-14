
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int st_size; int st_gid; int st_uid; int st_mode; } ;
struct stat {int st_size; int st_gid; int st_uid; int st_mode; } ;
struct pshmnode {struct pshminfo* pinfo; } ;
struct pshminfo {int pshm_length; int pshm_gid; int pshm_uid; int pshm_mode; } ;


 int VAR_0 ;
 struct pshminfo* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct stat64*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct pshminfo*) ;

int
FUNC_5(struct pshmnode *VAR_2, void *VAR_3, int VAR_4)
{
 struct stat *VAR_5 = (struct stat *)0;
 struct stat64 * VAR_6 = (struct stat64 *)0;
 struct pshminfo *VAR_7;




 FUNC_0();
 if ((VAR_7 = VAR_2->pinfo) == VAR_1){
  FUNC_1();
  return(VAR_0);
 }
 if (VAR_4 != 0) {
  VAR_6 = (struct stat64 *)VAR_3;
  FUNC_2(VAR_6, sizeof(struct stat64));
  VAR_6->st_mode = VAR_7->pshm_mode;
  VAR_6->st_uid = VAR_7->pshm_uid;
  VAR_6->st_gid = VAR_7->pshm_gid;
  VAR_6->st_size = VAR_7->pshm_length;
 } else {
  VAR_5 = (struct stat *)VAR_3;
  FUNC_2(VAR_5, sizeof(struct stat));
  VAR_5->st_mode = VAR_7->pshm_mode;
  VAR_5->st_uid = VAR_7->pshm_uid;
  VAR_5->st_gid = VAR_7->pshm_gid;
  VAR_5->st_size = VAR_7->pshm_length;
 }
 FUNC_1();

 return(0);
}
