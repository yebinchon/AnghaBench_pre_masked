
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int i_size; struct address_space* i_mapping; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 struct page* FUNC_3 (struct address_space*,int ,int *) ;

__attribute__((used)) static char *FUNC_4(struct dentry * VAR_1, struct page **VAR_2)
{
 char *VAR_3;
 struct page *VAR_4;
 struct address_space *VAR_5 = VAR_1->d_inode->i_mapping;
 VAR_4 = FUNC_3(VAR_5, 0, ((void*)0));
 if (FUNC_0(VAR_4))
  return (char*)VAR_4;
 *VAR_2 = VAR_4;
 VAR_3 = FUNC_1(VAR_4);
 FUNC_2(VAR_3, VAR_1->d_inode->i_size, VAR_0 - 1);
 return VAR_3;
}
