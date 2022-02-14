
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {int bh; } ;
struct TYPE_2__ {int s_inode_size; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_2 (struct inode*,struct ext4_inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct ext4_iloc*) ;
 struct ext4_inode* FUNC_5 (struct ext4_iloc*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (struct inode*,int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct ext4_xattr_ibody_header *VAR_4;
 struct ext4_inode *VAR_5;
 struct ext4_iloc VAR_6;
 void *VAR_7;
 int VAR_8;

 if (!FUNC_6(VAR_1, VAR_0))
  return 0;
 VAR_8 = FUNC_4(VAR_1, &VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_5 = FUNC_5(&VAR_6);
 VAR_4 = FUNC_2(VAR_1, VAR_5);
 VAR_7 = (void *)VAR_5 + FUNC_0(VAR_1->i_sb)->s_inode_size;
 VAR_8 = FUNC_7(FUNC_1(VAR_4), VAR_7);
 if (VAR_8)
  goto cleanup;
 VAR_8 = FUNC_8(VAR_1, FUNC_1(VAR_4),
     VAR_2, VAR_3);

cleanup:
 FUNC_3(VAR_6.bh);
 return VAR_8;
}
