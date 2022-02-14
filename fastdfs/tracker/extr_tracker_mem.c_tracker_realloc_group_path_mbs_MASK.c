
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc_size; int store_path_count; int ** all_servers; } ;
typedef int FDFSStorageDetail ;
typedef TYPE_1__ FDFSGroupInfo ;


 int FUNC_0 (int *,int,int const) ;

__attribute__((used)) static int FUNC_1(FDFSGroupInfo *VAR_0, const int VAR_1)

{
 FDFSStorageDetail **VAR_2;
 FDFSStorageDetail **VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->all_servers + VAR_0->alloc_size;
 for (VAR_2=VAR_0->all_servers; VAR_2<VAR_3; VAR_2++)
 {
  if ((VAR_4=FUNC_0(*VAR_2, VAR_0->store_path_count, VAR_1)) != 0)

  {
   return VAR_4;
  }
 }

 VAR_0->store_path_count = VAR_1;

 return 0;
}
