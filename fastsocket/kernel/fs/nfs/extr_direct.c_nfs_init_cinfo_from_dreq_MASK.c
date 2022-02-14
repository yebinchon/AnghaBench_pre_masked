
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_direct_req {int ds_cinfo; int mds_cinfo; int lock; } ;
struct nfs_commit_info {int * completion_ops; struct nfs_direct_req* dreq; int * ds; int * mds; int * lock; } ;


 int VAR_0 ;

void FUNC_0(struct nfs_commit_info *VAR_1,
         struct nfs_direct_req *VAR_2)
{
 VAR_1->lock = &VAR_2->lock;
 VAR_1->mds = &VAR_2->mds_cinfo;
 VAR_1->ds = &VAR_2->ds_cinfo;
 VAR_1->dreq = VAR_2;
 VAR_1->completion_ops = &VAR_0;
}
