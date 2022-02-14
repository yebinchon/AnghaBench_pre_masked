
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; scalar_t__ i_version; } ;
struct TYPE_2__ {scalar_t__ vnode; scalar_t__ unique; } ;
struct afs_iget_data {TYPE_1__ fid; } ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, void *VAR_1)
{
 struct afs_iget_data *VAR_2 = VAR_1;

 return VAR_0->i_ino == VAR_2->fid.vnode &&
  VAR_0->i_version == VAR_2->fid.unique;
}
