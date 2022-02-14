
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dentry {TYPE_4__* d_inode; } ;
struct TYPE_8__ {int i_sb; } ;
struct TYPE_5__ {int idotdot; } ;
struct TYPE_6__ {TYPE_1__ header; } ;
struct TYPE_7__ {TYPE_2__ i_dtroot; } ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 struct dentry* FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (int ) ;

struct dentry *FUNC_4(struct dentry *VAR_0)
{
 unsigned long VAR_1;

 VAR_1 =
  FUNC_3(FUNC_0(VAR_0->d_inode)->i_dtroot.header.idotdot);

 return FUNC_1(FUNC_2(VAR_0->d_inode->i_sb, VAR_1));
}
