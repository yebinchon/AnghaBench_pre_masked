
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {scalar_t__ mnt_group_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct vfsmount *VAR_4)
{
 int VAR_5;

 if (!FUNC_1(&VAR_2, VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_0(&VAR_2,
    VAR_3,
    &VAR_4->mnt_group_id);
 if (!VAR_5)
  VAR_3 = VAR_4->mnt_group_id + 1;

 return VAR_5;
}
