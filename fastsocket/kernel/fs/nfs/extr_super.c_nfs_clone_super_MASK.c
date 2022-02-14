
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_time_gran; int s_op; int s_flags; int s_maxbytes; int s_blocksize; int s_blocksize_bits; } ;
struct nfs_server {TYPE_2__* nfs_client; } ;
struct TYPE_4__ {TYPE_1__* rpc_ops; } ;
struct TYPE_3__ {int version; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_1,
       const struct super_block *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_0(VAR_1);

 VAR_1->s_blocksize_bits = VAR_2->s_blocksize_bits;
 VAR_1->s_blocksize = VAR_2->s_blocksize;
 VAR_1->s_maxbytes = VAR_2->s_maxbytes;

 if (VAR_3->nfs_client->rpc_ops->version == 3) {



  VAR_1->s_flags |= VAR_0;
  VAR_1->s_time_gran = 1;
 }

 VAR_1->s_op = VAR_2->s_op;
  FUNC_1(VAR_1);
}
