
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ store_server; } ;
struct TYPE_6__ {scalar_t__ active_count; TYPE_1__** active_servers; TYPE_1__* pStoreServer; } ;
struct TYPE_5__ {scalar_t__ upload_priority; } ;
typedef TYPE_1__ FDFSStorageDetail ;
typedef TYPE_2__ FDFSGroupInfo ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_0(FDFSGroupInfo *VAR_2)
{
 if (VAR_2->active_count == 0)
 {
  VAR_2->pStoreServer = ((void*)0);
  return;
 }

 if (VAR_1.store_server == VAR_0)
 {
  FDFSStorageDetail **VAR_3;
  FDFSStorageDetail **VAR_4;
  FDFSStorageDetail *VAR_5;

  VAR_5 = *(VAR_2->active_servers);
  VAR_3 = VAR_2->active_servers + VAR_2->active_count;
  for (VAR_4=VAR_2->active_servers+1; VAR_4<VAR_3; VAR_4++)

  {
   if ((*VAR_4)->upload_priority < VAR_5->upload_priority)

   {
    VAR_5 = *VAR_4;
   }
  }

  VAR_2->pStoreServer = VAR_5;
 }
 else
 {
  VAR_2->pStoreServer = *(VAR_2->active_servers);
 }
}
