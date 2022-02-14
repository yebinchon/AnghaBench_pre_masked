
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct exofs_dir_entry {int dummy; } ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct inode*,int ) ;
 struct exofs_dir_entry* FUNC_2 (struct exofs_dir_entry*) ;
 scalar_t__ FUNC_3 (struct page*) ;

struct exofs_dir_entry *FUNC_4(struct inode *VAR_0, struct page **VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_0, 0);
 struct exofs_dir_entry *VAR_3 = ((void*)0);

 if (!FUNC_0(VAR_2)) {
  VAR_3 = FUNC_2(
    (struct exofs_dir_entry *)FUNC_3(VAR_2));
  *VAR_1 = VAR_2;
 }
 return VAR_3;
}
