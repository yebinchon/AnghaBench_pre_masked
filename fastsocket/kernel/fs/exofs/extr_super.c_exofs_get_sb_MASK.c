
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct file_system_type {int dummy; } ;
struct exofs_mountopt {char const* dev_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_system_type*,int,struct exofs_mountopt*,int ,struct vfsmount*) ;
 int FUNC_1 (void*,struct exofs_mountopt*) ;

__attribute__((used)) static int FUNC_2(struct file_system_type *VAR_1,
     int VAR_2, const char *VAR_3,
     void *VAR_4, struct vfsmount *VAR_5)
{
 struct exofs_mountopt VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6.dev_name = VAR_3;
 return FUNC_0(VAR_1, VAR_2, &VAR_6, VAR_0, VAR_5);
}
