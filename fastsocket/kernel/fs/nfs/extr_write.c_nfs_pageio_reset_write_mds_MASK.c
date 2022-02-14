
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pageio_descriptor {int pg_inode; int pg_bsize; int * pg_ops; } ;
struct TYPE_2__ {int wsize; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;

void FUNC_1(struct nfs_pageio_descriptor *VAR_1)
{
 VAR_1->pg_ops = &VAR_0;
 VAR_1->pg_bsize = FUNC_0(VAR_1->pg_inode)->wsize;
}
