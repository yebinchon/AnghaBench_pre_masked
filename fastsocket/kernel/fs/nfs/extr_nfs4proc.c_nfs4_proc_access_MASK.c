
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_access_entry {int dummy; } ;
struct nfs4_exception {scalar_t__ retry; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct nfs_access_entry*) ;
 int FUNC_2 (int ,int ,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct nfs_access_entry *VAR_1)
{
 struct nfs4_exception VAR_2 = { };
 int VAR_3;
 do {
  VAR_3 = FUNC_2(FUNC_0(VAR_0),
    FUNC_1(VAR_0, VAR_1),
    &VAR_2);
 } while (VAR_2.retry);
 return VAR_3;
}
