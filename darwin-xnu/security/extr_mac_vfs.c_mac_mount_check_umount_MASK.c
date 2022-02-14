
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct mount {int mnt_mntlabel; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct mount*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

int
FUNC_3(vfs_context_t VAR_2, struct mount *VAR_3)
{
 kauth_cred_t VAR_4;
 int VAR_5;






 VAR_4 = FUNC_2(VAR_2);
 if (!FUNC_1(VAR_4))
  return (0);
 FUNC_0(VAR_1, VAR_4, VAR_3, VAR_3->mnt_mntlabel);

 return (VAR_5);
}
