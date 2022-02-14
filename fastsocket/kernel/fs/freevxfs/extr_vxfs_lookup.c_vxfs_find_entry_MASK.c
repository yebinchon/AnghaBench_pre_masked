
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct vxfs_direct {int d_ino; int d_reclen; } ;
struct vxfs_dirblk {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_mapping; TYPE_2__* i_sb; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {scalar_t__ s_blocksize; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct vxfs_dirblk*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 struct page* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int,char const*,struct vxfs_direct*) ;
 struct vxfs_direct* FUNC_9 (struct vxfs_direct*) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static struct vxfs_direct *
FUNC_11(struct inode *VAR_0, struct dentry *VAR_1, struct page **VAR_2)
{
 u_long VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 u_long VAR_8 = VAR_0->i_sb->s_blocksize;
 const char *VAR_9 = VAR_1->d_name.name;
 int VAR_10 = VAR_1->d_name.len;

 VAR_3 = FUNC_5(VAR_0);
 VAR_5 = FUNC_4(VAR_0);
 VAR_6 = FUNC_1(VAR_0->i_sb);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  caddr_t VAR_11;
  struct page *VAR_12;

  VAR_12 = FUNC_7(VAR_0->i_mapping, VAR_4);
  if (FUNC_0(VAR_12))
   continue;
  VAR_11 = (caddr_t)FUNC_6(VAR_12);

  for (VAR_7 = 0; VAR_7 <= VAR_5 && VAR_7 <= VAR_6; VAR_7++) {
   caddr_t VAR_13, VAR_14;
   struct vxfs_dirblk *VAR_15;
   struct vxfs_direct *VAR_16;

   VAR_13 = VAR_11 + (VAR_7 * VAR_8);
   VAR_14 = VAR_13 + VAR_8 - FUNC_3(1);

   VAR_15 = (struct vxfs_dirblk *)VAR_13;
   VAR_16 = (struct vxfs_direct *)(VAR_13 + FUNC_2(VAR_15));

   for (; (caddr_t)VAR_16 <= VAR_14; VAR_16 = FUNC_9(VAR_16)) {
    if (!VAR_16->d_reclen)
     break;
    if (!VAR_16->d_ino)
     continue;
    if (FUNC_8(VAR_10, VAR_9, VAR_16)) {
     *VAR_2 = VAR_12;
     return (VAR_16);
    }
   }
  }
  FUNC_10(VAR_12);
 }

 return ((void*)0);
}
