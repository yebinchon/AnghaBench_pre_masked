
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct minix_sb_info {int s_dirsize; scalar_t__ s_version; } ;
struct inode {int i_ino; int i_sb; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
struct TYPE_5__ {int name; int inode; } ;
typedef TYPE_1__ minix_dirent ;
typedef TYPE_1__ minix3_dirent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct address_space*,int ,int,int ,struct page**,int *) ;
 int FUNC_1 (struct page*,int ,int) ;
 struct page* FUNC_2 (struct address_space*,int ) ;
 char* FUNC_3 (struct page*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,struct minix_sb_info*) ;
 struct minix_sb_info* FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct inode *VAR_5, struct inode *VAR_6)
{
 struct address_space *VAR_7 = VAR_5->i_mapping;
 struct page *VAR_8 = FUNC_2(VAR_7, 0);
 struct minix_sb_info *VAR_9 = FUNC_7(VAR_5->i_sb);
 char *VAR_10;
 int VAR_11;

 if (!VAR_8)
  return -VAR_1;
 VAR_11 = FUNC_0(((void*)0), VAR_7, 0, 2 * VAR_9->s_dirsize,
     VAR_0, &VAR_8, ((void*)0));
 if (VAR_11) {
  FUNC_10(VAR_8);
  goto fail;
 }

 VAR_10 = FUNC_3(VAR_8, VAR_2);
 FUNC_5(VAR_10, 0, VAR_4);

 if (VAR_9->s_version == VAR_3) {
  minix3_dirent *VAR_12 = (minix3_dirent *)VAR_10;

  VAR_12->inode = VAR_5->i_ino;
  FUNC_9(VAR_12->name, ".");
  VAR_12 = FUNC_6(VAR_12, VAR_9);
  VAR_12->inode = VAR_6->i_ino;
  FUNC_9(VAR_12->name, "..");
 } else {
  minix_dirent *VAR_13 = (minix_dirent *)VAR_10;

  VAR_13->inode = VAR_5->i_ino;
  FUNC_9(VAR_13->name, ".");
  VAR_13 = FUNC_6(VAR_13, VAR_9);
  VAR_13->inode = VAR_6->i_ino;
  FUNC_9(VAR_13->name, "..");
 }
 FUNC_4(VAR_10, VAR_2);

 VAR_11 = FUNC_1(VAR_8, 0, 2 * VAR_9->s_dirsize);
fail:
 FUNC_8(VAR_8);
 return VAR_11;
}
