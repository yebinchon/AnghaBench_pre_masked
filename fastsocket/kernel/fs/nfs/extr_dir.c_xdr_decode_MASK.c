
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_entry {TYPE_4__* fattr; } ;
struct TYPE_11__ {int gencount; int timestamp; int plus; TYPE_3__* file; int * (* decode ) (struct xdr_stream*,struct nfs_entry*,int ,int ) ;} ;
typedef TYPE_5__ nfs_readdir_descriptor_t ;
typedef int __be32 ;
struct TYPE_10__ {int gencount; int time_start; } ;
struct TYPE_8__ {TYPE_1__* dentry; } ;
struct TYPE_9__ {TYPE_2__ f_path; } ;
struct TYPE_7__ {int d_inode; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct xdr_stream*,struct nfs_entry*,int ,int ) ;

__attribute__((used)) static
int FUNC_4(nfs_readdir_descriptor_t *VAR_0, struct nfs_entry *VAR_1, struct xdr_stream *VAR_2)
{
 __be32 *VAR_3 = VAR_0->decode(VAR_2, VAR_1, FUNC_1(VAR_0->file->f_path.dentry->d_inode), VAR_0->plus);
 if (FUNC_0(VAR_3))
  return FUNC_2(VAR_3);

 VAR_1->fattr->time_start = VAR_0->timestamp;
 VAR_1->fattr->gencount = VAR_0->gencount;
 return 0;
}
