
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int u_short ;
struct ipc_perm {int mode; scalar_t__ cuid; scalar_t__ uid; scalar_t__ gid; scalar_t__ cgid; } ;
typedef int mode_t ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,int *) ;

int
FUNC_3(kauth_cred_t VAR_6, struct ipc_perm *VAR_7, int VAR_8)
{
 uid_t VAR_9 = FUNC_0(VAR_6);
 int VAR_10 = (VAR_8 & VAR_2);
 int VAR_11;
 mode_t VAR_12 = (VAR_7->mode & VAR_5);
 mode_t VAR_13 = (VAR_7->mode & VAR_3) << 3;
 mode_t VAR_14 = (VAR_7->mode & VAR_4) << 6;


 if (!FUNC_2(VAR_6, (u_short *)((void*)0)))
  return (0);


 if (VAR_9 == VAR_7->cuid || VAR_9 == VAR_7->uid) {
  if (VAR_10)
   return (0);

  return ((VAR_8 & VAR_12) == VAR_8 ? 0 : VAR_0);
 } else {

  if (VAR_10)
   return (VAR_1);
 }






 if ((VAR_8 & VAR_13 & VAR_14) == VAR_8) {
  return (0);
 } else {
  if ((VAR_8 & VAR_13) != VAR_8) {
   if ((!FUNC_1(VAR_6, VAR_7->gid, &VAR_11) && VAR_11) &&
       ((VAR_7->gid == VAR_7->cgid) ||
        (!FUNC_1(VAR_6, VAR_7->cgid, &VAR_11) && VAR_11))) {
        return (VAR_0);
   } else {
    if ((VAR_8 & VAR_14) != VAR_8) {
     return (VAR_0);
    } else {
     return (0);
    }
   }
  } else {
   if ((!FUNC_1(VAR_6, VAR_7->gid, &VAR_11) && VAR_11) ||
       ((VAR_7->gid != VAR_7->cgid) &&
        (!FUNC_1(VAR_6, VAR_7->cgid, &VAR_11) && VAR_11))) {
        return (0);
   } else {
    if ((VAR_8 & VAR_14) != VAR_8) {
     return (VAR_0);
    } else {
     return (0);
    }
   }
  }
 }
}
