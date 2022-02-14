
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct nfs4_exception {scalar_t__ retry; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct qstr*,struct inode*,struct qstr*) ;
 int FUNC_2 (int ,int ,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct qstr *VAR_1,
  struct inode *VAR_2, struct qstr *VAR_3)
{
 struct nfs4_exception VAR_4 = { };
 int VAR_5;
 do {
  VAR_5 = FUNC_2(FUNC_0(VAR_0),
    FUNC_1(VAR_0, VAR_1,
     VAR_2, VAR_3),
    &VAR_4);
 } while (VAR_4.retry);
 return VAR_5;
}
