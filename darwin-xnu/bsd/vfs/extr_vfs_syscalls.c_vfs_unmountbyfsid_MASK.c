
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef scalar_t__ mount_t ;
typedef int fsid_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int,int ) ;

int
FUNC_4(fsid_t *VAR_1, int VAR_2, vfs_context_t VAR_3)
{
 mount_t VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, 1);
 if (VAR_4 == (mount_t)0) {
  return(VAR_0);
 }
 FUNC_2(VAR_4, 0);
 FUNC_0(VAR_4);

 return(FUNC_3(VAR_4, VAR_2, VAR_3));
}
