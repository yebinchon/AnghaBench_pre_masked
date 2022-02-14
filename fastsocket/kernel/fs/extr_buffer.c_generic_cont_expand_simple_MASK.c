
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *,struct address_space*,int ,int ,int,struct page**,void**) ;
 int FUNC_3 (int *,struct address_space*,int ,int ,int ,struct page*,void*) ;

int FUNC_4(struct inode *VAR_2, loff_t VAR_3)
{
 struct address_space *VAR_4 = VAR_2->i_mapping;
 struct page *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_2(((void*)0), VAR_4, VAR_3, 0,
    VAR_1|VAR_0,
    &VAR_5, &VAR_6);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_3(((void*)0), VAR_4, VAR_3, 0, 0, VAR_5, VAR_6);
 FUNC_0(VAR_7 > 0);

out:
 return VAR_7;
}
