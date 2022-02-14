
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; int i_ino; } ;
struct fnode {int dummy; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct fnode* FUNC_3 (int ,int ,struct buffer_head**) ;
 int FUNC_4 (int ,struct fnode*,char*,char*,int ) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2, struct page *VAR_3)
{
 char *VAR_4 = FUNC_5(VAR_3);
 struct inode *VAR_5 = VAR_3->mapping->host;
 struct fnode *VAR_6;
 struct buffer_head *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_0;
 FUNC_7();
 if (!(VAR_6 = FUNC_3(VAR_5->i_sb, VAR_5->i_ino, &VAR_7)))
  goto fail;
 VAR_8 = FUNC_4(VAR_5->i_sb, VAR_6, "SYMLINK", VAR_4, VAR_1);
 FUNC_2(VAR_7);
 if (VAR_8)
  goto fail;
 FUNC_8();
 FUNC_1(VAR_3);
 FUNC_6(VAR_3);
 FUNC_9(VAR_3);
 return 0;

fail:
 FUNC_8();
 FUNC_0(VAR_3);
 FUNC_6(VAR_3);
 FUNC_9(VAR_3);
 return VAR_8;
}
