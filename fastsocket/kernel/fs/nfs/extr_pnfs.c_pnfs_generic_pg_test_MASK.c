
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_pageio_descriptor {TYPE_2__* pg_lseg; } ;
struct nfs_page {int dummy; } ;
struct TYPE_3__ {int length; int offset; } ;
struct TYPE_4__ {TYPE_1__ pls_range; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;
 scalar_t__ FUNC_2 (struct nfs_page*) ;

bool
FUNC_3(struct nfs_pageio_descriptor *VAR_0, struct nfs_page *VAR_1,
       struct nfs_page *VAR_2)
{
 if (VAR_0->pg_lseg == ((void*)0))
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 return FUNC_2(VAR_2) < FUNC_0(VAR_0->pg_lseg->pls_range.offset,
      VAR_0->pg_lseg->pls_range.length);
}
