
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int loff_t ;
struct TYPE_7__ {int i_sb; int i_atime; } ;
struct TYPE_5__ {TYPE_3__* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct file*,char*,int,int *) ;
 int FUNC_3 (TYPE_3__*,struct page*) ;
 int FUNC_4 (TYPE_3__*,struct page*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct page*) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_1, struct page *VAR_2,
 loff_t *VAR_3)
{
 char *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_3(VAR_1->f_path.dentry->d_inode, VAR_2);
 if (VAR_5 == 0)
  goto read_complete;

 FUNC_10(VAR_2);
 VAR_4 = FUNC_7(VAR_2);


 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_0, VAR_3);

 if (VAR_5 < 0)
  goto io_error;
 else
  FUNC_1(1, "Bytes read %d", VAR_5);

 VAR_1->f_path.dentry->d_inode->i_atime =
  FUNC_5(VAR_1->f_path.dentry->d_inode->i_sb);

 if (VAR_0 > VAR_5)
  FUNC_9(VAR_4 + VAR_5, 0, VAR_0 - VAR_5);

 FUNC_6(VAR_2);
 FUNC_0(VAR_2);


 FUNC_4(VAR_1->f_path.dentry->d_inode, VAR_2);

 VAR_5 = 0;

io_error:
 FUNC_8(VAR_2);
 FUNC_11(VAR_2);

read_complete:
 return VAR_5;
}
