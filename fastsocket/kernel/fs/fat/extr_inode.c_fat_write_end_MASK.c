
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ctime; int i_mtime; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,struct address_space*,int ,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct address_space *VAR_3,
   loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
   struct page *VAR_7, void *VAR_8)
{
 struct inode *VAR_9 = VAR_3->host;
 int VAR_10;
 VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (!(VAR_10 < 0) && !(FUNC_0(VAR_9)->i_attrs & VAR_0)) {
  VAR_9->i_mtime = VAR_9->i_ctime = VAR_1;
  FUNC_0(VAR_9)->i_attrs |= VAR_0;
  FUNC_2(VAR_9);
 }
 return VAR_10;
}
