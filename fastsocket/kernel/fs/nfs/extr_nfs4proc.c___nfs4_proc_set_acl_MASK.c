
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {struct nfs_setaclres* rpc_resp; struct nfs_setaclargs* rpc_argp; int * rpc_proc; } ;
struct page {int dummy; } ;
struct nfs_setaclres {int seq_res; } ;
struct nfs_setaclargs {size_t acl_len; int seq_args; int acl_pgbase; struct page** acl_pages; int fh; } ;
struct nfs_server {int client; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {int cache_validity; } ;


 unsigned int FUNC_0 (struct page**) ;
 unsigned int FUNC_1 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 struct nfs_server* FUNC_4 (struct inode*) ;
 int VAR_5 ;
 int FUNC_5 (void const*,size_t,struct page**,int *) ;
 int FUNC_6 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int * VAR_6 ;
 int FUNC_7 (struct nfs_server*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_7, const void *VAR_8, size_t VAR_9)
{
 struct nfs_server *VAR_10 = FUNC_4(VAR_7);
 struct page *VAR_11[VAR_2];
 struct nfs_setaclargs VAR_12 = {
  .fh = FUNC_2(VAR_7),
  .acl_pages = VAR_11,
  .acl_len = VAR_9,
 };
 struct nfs_setaclres VAR_13;
 struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_6[VAR_3],
  .rpc_argp = &VAR_12,
  .rpc_resp = &VAR_13,
 };
 unsigned int VAR_15 = FUNC_1(VAR_9, VAR_5);
 int VAR_16, VAR_17;

 if (!FUNC_7(VAR_10))
  return -VAR_0;
 if (VAR_15 > FUNC_0(VAR_11))
  return -VAR_1;
 VAR_17 = FUNC_5(VAR_8, VAR_9, VAR_12.acl_pages, &VAR_12.acl_pgbase);
 if (VAR_17 < 0)
  return VAR_17;
 FUNC_9(VAR_7);
 VAR_16 = FUNC_6(VAR_10->client, VAR_10, &VAR_14, &VAR_12.seq_args, &VAR_13.seq_res, 1);





 for (; VAR_17 > 0; VAR_17--)
  FUNC_11(VAR_11[VAR_17-1]);





 FUNC_12(&VAR_7->i_lock);
 FUNC_3(VAR_7)->cache_validity |= VAR_4;
 FUNC_13(&VAR_7->i_lock);
 FUNC_8(VAR_7);
 FUNC_10(VAR_7);
 return VAR_16;
}
