
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_entry {int e_value_offs; int e_value_size; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {int bh; } ;
struct TYPE_2__ {int s_inode_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 struct ext4_xattr_entry* FUNC_1 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_2 (struct inode*,struct ext4_inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct ext4_iloc*) ;
 struct ext4_inode* FUNC_5 (struct ext4_iloc*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct ext4_xattr_entry*,void*) ;
 int FUNC_8 (struct ext4_xattr_entry**,int,char const*,int,int ) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (void*,void*,size_t) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_3, int VAR_4, const char *VAR_5,
       void *VAR_6, size_t VAR_7)
{
 struct ext4_xattr_ibody_header *VAR_8;
 struct ext4_xattr_entry *VAR_9;
 struct ext4_inode *VAR_10;
 struct ext4_iloc VAR_11;
 size_t VAR_12;
 void *VAR_13;
 int VAR_14;

 if (!FUNC_6(VAR_3, VAR_2))
  return -VAR_0;
 VAR_14 = FUNC_4(VAR_3, &VAR_11);
 if (VAR_14)
  return VAR_14;
 VAR_10 = FUNC_5(&VAR_11);
 VAR_8 = FUNC_2(VAR_3, VAR_10);
 VAR_9 = FUNC_1(VAR_8);
 VAR_13 = (void *)VAR_10 + FUNC_0(VAR_3->i_sb)->s_inode_size;
 VAR_14 = FUNC_7(VAR_9, VAR_13);
 if (VAR_14)
  goto cleanup;
 VAR_14 = FUNC_8(&VAR_9, VAR_4, VAR_5,
          VAR_13 - (void *)VAR_9, 0);
 if (VAR_14)
  goto cleanup;
 VAR_12 = FUNC_10(VAR_9->e_value_size);
 if (VAR_6) {
  VAR_14 = -VAR_1;
  if (VAR_12 > VAR_7)
   goto cleanup;
  FUNC_11(VAR_6, (void *)FUNC_1(VAR_8) +
         FUNC_9(VAR_9->e_value_offs), VAR_12);
 }
 VAR_14 = VAR_12;

cleanup:
 FUNC_3(VAR_11.bh);
 return VAR_14;
}
