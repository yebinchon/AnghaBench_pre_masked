
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_id; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_0)
{
 FUNC_2("NFS: nfs3_forget_cached_acls(%s/%ld)\n", VAR_0->i_sb->s_id,
  VAR_0->i_ino);
 FUNC_3(&VAR_0->i_lock);
 FUNC_1(FUNC_0(VAR_0));
 FUNC_4(&VAR_0->i_lock);
}
