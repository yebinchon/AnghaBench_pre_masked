
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_completion_ops {int dummy; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int wsize; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct inode*,int *,struct nfs_pgio_completion_ops const*,int ,int) ;
 int VAR_0 ;

void FUNC_2(struct nfs_pageio_descriptor *VAR_1,
          struct inode *VAR_2, int VAR_3,
          const struct nfs_pgio_completion_ops *VAR_4)
{
 FUNC_1(VAR_1, VAR_2, &VAR_0, VAR_4,
    FUNC_0(VAR_2)->wsize, VAR_3);
}
