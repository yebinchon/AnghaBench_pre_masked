
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ store_server; } ;
struct TYPE_4__ {int current_write_server; int active_count; int * pStoreServer; int ** active_servers; } ;
typedef int FDFSStorageDetail ;
typedef TYPE_1__ FDFSGroupInfo ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

FDFSStorageDetail *FUNC_0(FDFSGroupInfo *VAR_2)
{
 int VAR_3;
 if (VAR_1.store_server == VAR_0)
 {
  VAR_3 = VAR_2->current_write_server++;
  if (VAR_2->current_write_server >= VAR_2->active_count)

  {
   VAR_2->current_write_server = 0;
  }

  if (VAR_3 >= VAR_2->active_count)
  {
   VAR_3 = 0;
  }
  return *(VAR_2->active_servers + VAR_3);
 }
 else
 {
  return VAR_2->pStoreServer;
 }
}
