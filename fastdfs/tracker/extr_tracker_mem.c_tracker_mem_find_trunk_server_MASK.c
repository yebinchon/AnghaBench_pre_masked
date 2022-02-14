
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int active_count; int storage_port; int ** active_servers; int * pStoreServer; } ;
typedef int FDFSStorageDetail ;
typedef TYPE_1__ FDFSGroupInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int const) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(FDFSGroupInfo *VAR_1,
  const bool VAR_2)
{
 FDFSStorageDetail *VAR_3;
 FDFSStorageDetail **VAR_4;
 FDFSStorageDetail **VAR_5;
 int VAR_6;
 int64_t VAR_7;
 int64_t VAR_8;

 VAR_3 = VAR_1->pStoreServer;
 if (VAR_3 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_6 = FUNC_2(
            FUNC_0(VAR_3),
            VAR_1->storage_port, &VAR_8);
 if (VAR_6 != 0)
 {
  return VAR_6;
 }

 VAR_5 = VAR_1->active_servers + VAR_1->active_count;
 for (VAR_4=VAR_1->active_servers; VAR_4<VAR_5; VAR_4++)
 {
  if (*VAR_4 == VAR_3)
  {
   continue;
  }

  VAR_6 = FUNC_2(
                FUNC_0(*VAR_4),
                VAR_1->storage_port, &VAR_7);
  if (VAR_6 != 0)
  {
   continue;
  }

  if (VAR_7 > VAR_8)
  {
   VAR_3 = *VAR_4;
  }
 }

 return FUNC_1(VAR_1, VAR_3, VAR_2);
}
