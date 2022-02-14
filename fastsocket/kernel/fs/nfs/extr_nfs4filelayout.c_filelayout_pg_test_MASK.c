
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nfs_pageio_descriptor {int pg_lseg; } ;
struct nfs_page {int dummy; } ;
struct TYPE_2__ {int stripe_unit; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;
 scalar_t__ FUNC_4 (struct nfs_page*) ;

__attribute__((used)) static bool
FUNC_5(struct nfs_pageio_descriptor *VAR_0, struct nfs_page *VAR_1,
     struct nfs_page *VAR_2)
{
 u64 VAR_3, VAR_4;
 u32 VAR_5;

 if (!FUNC_3(VAR_0, VAR_1, VAR_2) ||
     !FUNC_2(VAR_0, VAR_1, VAR_2))
  return 0;

 VAR_3 = (u64)FUNC_4(VAR_1);
 VAR_4 = (u64)FUNC_4(VAR_2);
 VAR_5 = FUNC_0(VAR_0->pg_lseg)->stripe_unit;

 FUNC_1(VAR_3, VAR_5);
 FUNC_1(VAR_4, VAR_5);

 return (VAR_3 == VAR_4);
}
