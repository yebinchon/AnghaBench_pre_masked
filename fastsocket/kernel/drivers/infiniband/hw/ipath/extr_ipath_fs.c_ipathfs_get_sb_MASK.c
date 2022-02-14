
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct file_system_type {int dummy; } ;


 int FUNC_0 (struct file_system_type*,int,void*,int ,struct vfsmount*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file_system_type *VAR_2, int VAR_3,
   const char *VAR_4, void *VAR_5, struct vfsmount *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5,
        VAR_1, VAR_6);
 if (VAR_7 >= 0)
  VAR_0 = VAR_6->mnt_sb;
 return VAR_7;
}
