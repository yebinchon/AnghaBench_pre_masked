
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_xattr_ibody_header {scalar_t__ h_magic; } ;
struct ext4_xattr_entry {int dummy; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {unsigned int i_extra_isize; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_xattr_entry* FUNC_1 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_2 (struct inode*,struct ext4_inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,unsigned int,struct ext4_inode*,int *) ;
 struct ext4_inode* FUNC_5 (struct ext4_iloc*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (void*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3,
       unsigned int VAR_4,
       struct ext4_iloc VAR_5,
       handle_t *VAR_6)
{
 struct ext4_inode *VAR_7;
 struct ext4_xattr_ibody_header *VAR_8;
 struct ext4_xattr_entry *VAR_9;

 if (FUNC_0(VAR_3)->i_extra_isize >= VAR_4)
  return 0;

 VAR_7 = FUNC_5(&VAR_5);

 VAR_8 = FUNC_2(VAR_3, VAR_7);
 VAR_9 = FUNC_1(VAR_8);


 if (!FUNC_6(VAR_3, VAR_1) ||
     VAR_8->h_magic != FUNC_3(VAR_2)) {
  FUNC_7((void *)VAR_7 + VAR_0, 0,
   VAR_4);
  FUNC_0(VAR_3)->i_extra_isize = VAR_4;
  return 0;
 }


 return FUNC_4(VAR_3, VAR_4,
       VAR_7, VAR_6);
}
