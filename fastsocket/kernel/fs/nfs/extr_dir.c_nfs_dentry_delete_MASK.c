
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct dentry {int d_flags; TYPE_4__* d_sb; int * d_inode; TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_8__ {int s_flags; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_3)
{
 FUNC_1(VAR_2, "NFS: dentry_delete(%s/%s, %x)\n",
  VAR_3->d_parent->d_name.name, VAR_3->d_name.name,
  VAR_3->d_flags);


 if (VAR_3->d_inode != ((void*)0) && FUNC_0(VAR_3->d_inode))
  return 1;

 if (VAR_3->d_flags & VAR_0) {

  return 1;
 }
 if (!(VAR_3->d_sb->s_flags & VAR_1)) {


  return 1;
 }
 return 0;

}
