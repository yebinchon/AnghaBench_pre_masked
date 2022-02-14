
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct file_system_type {int name; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (struct file_system_type*,int ,int ,void*) ;

struct vfsmount *FUNC_1(struct file_system_type *VAR_1, void *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0, VAR_1->name, VAR_2);
}
