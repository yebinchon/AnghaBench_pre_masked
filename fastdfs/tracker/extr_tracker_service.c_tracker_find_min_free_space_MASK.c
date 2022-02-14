
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ active_count; scalar_t__ free_mb; int total_mb; TYPE_1__** active_servers; } ;
struct TYPE_4__ {scalar_t__ free_mb; int total_mb; } ;
typedef TYPE_1__ FDFSStorageDetail ;
typedef TYPE_2__ FDFSGroupInfo ;



__attribute__((used)) static void FUNC_0(FDFSGroupInfo *VAR_0)
{
 FDFSStorageDetail **VAR_1;
 FDFSStorageDetail **VAR_2;

 if (VAR_0->active_count == 0)
 {
  return;
 }

 VAR_0->total_mb = (*(VAR_0->active_servers))->total_mb;
 VAR_0->free_mb = (*(VAR_0->active_servers))->free_mb;
 VAR_1 = VAR_0->active_servers + VAR_0->active_count;
 for (VAR_2=VAR_0->active_servers+1; VAR_2<VAR_1; VAR_2++)

 {
  if ((*VAR_2)->free_mb < VAR_0->free_mb)
  {
   VAR_0->total_mb = (*VAR_2)->total_mb;
   VAR_0->free_mb = (*VAR_2)->free_mb;
  }
 }
}
