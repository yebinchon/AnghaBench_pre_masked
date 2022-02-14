
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct nfs4_secinfo_flavors {int dummy; } ;
struct inode {int dummy; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct qstr*,struct nfs4_secinfo_flavors*) ;
 int FUNC_2 (struct nfs4_secinfo_flavors*) ;
 struct nfs4_secinfo_flavors* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static rpc_authflavor_t FUNC_5(struct inode *VAR_2, struct qstr *VAR_3)
{
 struct page *VAR_4;
 struct nfs4_secinfo_flavors *VAR_5;
 rpc_authflavor_t VAR_6;
 int VAR_7;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_4);

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5);
 if (VAR_7 < 0) {
  VAR_6 = VAR_7;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_5);

out:
 FUNC_4(VAR_4);
 return VAR_6;
}
