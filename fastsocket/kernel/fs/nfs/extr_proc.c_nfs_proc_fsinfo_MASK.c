
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs2_fsstat* rpc_resp; struct nfs_fh* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs_fsinfo {int maxfilesize; scalar_t__ lease_time; int dtpref; int wtmult; int wtpref; void* wtmax; int rtmult; int rtpref; void* rtmax; int fattr; } ;
struct nfs_fh {int dummy; } ;
struct nfs2_fsstat {int tsize; int bsize; } ;


 size_t VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nfs_server *VAR_3, struct nfs_fh *VAR_4,
   struct nfs_fsinfo *VAR_5)
{
 struct nfs2_fsstat VAR_6;
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_2[VAR_0],
  .rpc_argp = VAR_4,
  .rpc_resp = &VAR_6,
 };
 int VAR_8;

 FUNC_0("NFS call  fsinfo\n");
 FUNC_1(VAR_5->fattr);
 VAR_8 = FUNC_2(VAR_3->client, &VAR_7, 0);
 FUNC_0("NFS reply fsinfo: %d\n", VAR_8);
 if (VAR_8)
  goto out;
 VAR_5->rtmax = VAR_1;
 VAR_5->rtpref = VAR_6.tsize;
 VAR_5->rtmult = VAR_6.bsize;
 VAR_5->wtmax = VAR_1;
 VAR_5->wtpref = VAR_6.tsize;
 VAR_5->wtmult = VAR_6.bsize;
 VAR_5->dtpref = VAR_6.tsize;
 VAR_5->maxfilesize = 0x7FFFFFFF;
 VAR_5->lease_time = 0;
out:
 return VAR_8;
}
