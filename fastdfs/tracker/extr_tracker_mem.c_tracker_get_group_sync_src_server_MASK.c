
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int active_count; TYPE_1__** active_servers; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_1__ FDFSStorageDetail ;
typedef TYPE_2__ FDFSGroupInfo ;


 scalar_t__ FUNC_0 (int ,int ) ;

FDFSStorageDetail *FUNC_1(FDFSGroupInfo *VAR_0, FDFSStorageDetail *VAR_1)

{
 FDFSStorageDetail **VAR_2;
 FDFSStorageDetail **VAR_3;

 VAR_3 = VAR_0->active_servers + VAR_0->active_count;
 for (VAR_2=VAR_0->active_servers; VAR_2<VAR_3; VAR_2++)
 {
  if (FUNC_0((*VAR_2)->id, VAR_1->id) == 0)
  {
   continue;
  }

  return *VAR_2;
 }

 return ((void*)0);
}
