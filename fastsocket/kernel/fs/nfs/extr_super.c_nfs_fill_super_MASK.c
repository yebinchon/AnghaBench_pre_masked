
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_time_gran; int * s_op; int s_flags; scalar_t__ s_blocksize_bits; scalar_t__ s_blocksize; } ;
struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_parsed_mount_data {scalar_t__ bsize; } ;
struct TYPE_4__ {TYPE_1__* rpc_ops; } ;
struct TYPE_3__ {int version; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_2,
      struct nfs_parsed_mount_data *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_0(VAR_2);

 VAR_2->s_blocksize_bits = 0;
 VAR_2->s_blocksize = 0;
 if (VAR_3->bsize)
  VAR_2->s_blocksize = FUNC_1(VAR_3->bsize, &VAR_2->s_blocksize_bits);

 if (VAR_4->nfs_client->rpc_ops->version == 3) {



  VAR_2->s_flags |= VAR_0;
  VAR_2->s_time_gran = 1;
 }

 VAR_2->s_op = &VAR_1;
  FUNC_2(VAR_2);
}
