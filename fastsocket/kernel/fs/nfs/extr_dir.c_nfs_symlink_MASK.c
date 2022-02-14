
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pagevec {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct TYPE_6__ {int name; } ;
struct dentry {TYPE_3__* d_inode; TYPE_2__ d_name; } ;
struct TYPE_8__ {int (* symlink ) (struct inode*,struct dentry*,struct page*,unsigned int,struct iattr*) ;} ;
struct TYPE_7__ {int i_mapping; } ;
struct TYPE_5__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct page*) ;
 int VAR_9 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ,int ,int ) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,char*,int ,int ,int ,char const*,...) ;
 char* FUNC_7 (struct page*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char const*,unsigned int) ;
 int FUNC_10 (char*,int ,unsigned int) ;
 int FUNC_11 (struct pagevec*,struct page*) ;
 int FUNC_12 (struct pagevec*,int ) ;
 int FUNC_13 (struct pagevec*) ;
 unsigned int FUNC_14 (char const*) ;
 int FUNC_15 (struct inode*,struct dentry*,struct page*,unsigned int,struct iattr*) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_10, struct dentry *VAR_11, const char *VAR_12)
{
 struct pagevec VAR_13;
 struct page *VAR_14;
 char *VAR_15;
 struct iattr VAR_16;
 unsigned int VAR_17 = FUNC_14(VAR_12);
 int VAR_18;

 FUNC_6(VAR_9, "NFS: symlink(%s/%ld, %s, %s)\n", VAR_10->i_sb->s_id,
  VAR_10->i_ino, VAR_11->d_name.name, VAR_12);

 if (VAR_17 > VAR_6)
  return -VAR_1;

 VAR_16.ia_mode = VAR_7 | VAR_8;
 VAR_16.ia_valid = VAR_0;

 VAR_14 = FUNC_4(VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_7(VAR_14, VAR_5);
 FUNC_9(VAR_15, VAR_12, VAR_17);
 if (VAR_17 < VAR_6)
  FUNC_10(VAR_15 + VAR_17, 0, VAR_6 - VAR_17);
 FUNC_8(VAR_15, VAR_5);

 VAR_18 = FUNC_0(VAR_10)->symlink(VAR_10, VAR_11, VAR_14, VAR_17, &VAR_16);
 if (VAR_18 != 0) {
  FUNC_6(VAR_9, "NFS: symlink(%s/%ld, %s, %s) error %d\n",
   VAR_10->i_sb->s_id, VAR_10->i_ino,
   VAR_11->d_name.name, VAR_12, VAR_18);
  FUNC_5(VAR_11);
  FUNC_2(VAR_14);
  return VAR_18;
 }





 FUNC_12(&VAR_13, 0);
 if (!FUNC_3(VAR_14, VAR_11->d_inode->i_mapping, 0,
       VAR_4)) {
  FUNC_11(&VAR_13, VAR_14);
  FUNC_13(&VAR_13);
  FUNC_1(VAR_14);
  FUNC_16(VAR_14);
 } else
  FUNC_2(VAR_14);

 return 0;
}
