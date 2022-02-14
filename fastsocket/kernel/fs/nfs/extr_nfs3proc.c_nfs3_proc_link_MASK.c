
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs3_linkres* rpc_resp; struct nfs3_linkargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; int len; } ;
struct nfs3_linkres {int * fattr; int * dir_attr; } ;
struct nfs3_linkargs {int toname; int tolen; int tofh; int fromfh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int * VAR_2 ;
 void* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, struct inode *VAR_4, struct qstr *VAR_5)
{
 struct nfs3_linkargs VAR_6 = {
  .fromfh = FUNC_1(VAR_3),
  .tofh = FUNC_1(VAR_4),
  .toname = VAR_5->name,
  .tolen = VAR_5->len
 };
 struct nfs3_linkres VAR_7;
 struct rpc_message VAR_8 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_6,
  .rpc_resp = &VAR_7,
 };
 int VAR_9 = -VAR_0;

 FUNC_2("NFS call  link %s\n", VAR_5->name);
 VAR_7.fattr = FUNC_3();
 VAR_7.dir_attr = FUNC_3();
 if (VAR_7.fattr == ((void*)0) || VAR_7.dir_attr == ((void*)0))
  goto out;

 VAR_9 = FUNC_6(FUNC_0(VAR_3), &VAR_8, 0);
 FUNC_5(VAR_4, VAR_7.dir_attr);
 FUNC_5(VAR_3, VAR_7.fattr);
out:
 FUNC_4(VAR_7.dir_attr);
 FUNC_4(VAR_7.fattr);
 FUNC_2("NFS reply link: %d\n", VAR_9);
 return VAR_9;
}
