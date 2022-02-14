
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs4_exception {scalar_t__ retry; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*,struct page*,unsigned int,struct iattr*) ;
 int FUNC_2 (int ,int ,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct dentry *VAR_1,
  struct page *VAR_2, unsigned int VAR_3, struct iattr *VAR_4)
{
 struct nfs4_exception VAR_5 = { };
 int VAR_6;
 do {
  VAR_6 = FUNC_2(FUNC_0(VAR_0),
    FUNC_1(VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4),
    &VAR_5);
 } while (VAR_5.retry);
 return VAR_6;
}
