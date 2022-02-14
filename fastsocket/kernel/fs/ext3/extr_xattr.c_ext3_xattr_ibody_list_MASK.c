
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext3_xattr_ibody_header {int dummy; } ;
struct ext3_inode {int dummy; } ;
struct ext3_iloc {int bh; } ;
struct TYPE_4__ {int i_state; } ;
struct TYPE_3__ {int s_inode_size; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ext3_xattr_ibody_header*) ;
 struct ext3_xattr_ibody_header* FUNC_3 (struct inode*,struct ext3_inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct ext3_iloc*) ;
 struct ext3_inode* FUNC_6 (struct ext3_iloc*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (struct inode*,int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct ext3_xattr_ibody_header *VAR_4;
 struct ext3_inode *VAR_5;
 struct ext3_iloc VAR_6;
 void *VAR_7;
 int VAR_8;

 if (!(FUNC_0(VAR_1)->i_state & VAR_0))
  return 0;
 VAR_8 = FUNC_5(VAR_1, &VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_5 = FUNC_6(&VAR_6);
 VAR_4 = FUNC_3(VAR_1, VAR_5);
 VAR_7 = (void *)VAR_5 + FUNC_1(VAR_1->i_sb)->s_inode_size;
 VAR_8 = FUNC_7(FUNC_2(VAR_4), VAR_7);
 if (VAR_8)
  goto cleanup;
 VAR_8 = FUNC_8(VAR_1, FUNC_2(VAR_4),
     VAR_2, VAR_3);

cleanup:
 FUNC_4(VAR_6.bh);
 return VAR_8;
}
