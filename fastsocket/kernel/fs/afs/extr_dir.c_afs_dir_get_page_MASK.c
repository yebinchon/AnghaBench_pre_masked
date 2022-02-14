
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct key {int dummy; } ;
struct inode {int i_mapping; int i_ino; } ;
struct file {struct key* private_data; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (char*,int ,unsigned long) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct inode*,struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (int ,unsigned long,struct file*) ;

__attribute__((used)) static struct page *FUNC_10(struct inode *VAR_1, unsigned long VAR_2,
         struct key *VAR_3)
{
 struct page *VAR_4;
 struct file VAR_5 = {
  .private_data = VAR_3,
 };

 FUNC_4("{%lu},%lu", VAR_1->i_ino, VAR_2);

 VAR_4 = FUNC_9(VAR_1->i_mapping, VAR_2, &VAR_5);
 if (!FUNC_1(VAR_4)) {
  FUNC_8(VAR_4);
  if (!FUNC_2(VAR_4))
   FUNC_6(VAR_1, VAR_4);
  if (FUNC_3(VAR_4))
   goto fail;
 }
 return VAR_4;

fail:
 FUNC_7(VAR_4);
 FUNC_5(" = -EIO");
 return FUNC_0(-VAR_0);
}
