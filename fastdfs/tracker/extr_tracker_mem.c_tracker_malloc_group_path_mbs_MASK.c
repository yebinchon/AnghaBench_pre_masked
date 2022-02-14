
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc_size; int store_path_count; int ** all_servers; } ;
typedef int FDFSStorageDetail ;
typedef TYPE_1__ FDFSGroupInfo ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(FDFSGroupInfo *VAR_0)
{
 FDFSStorageDetail **VAR_1;
 FDFSStorageDetail **VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->all_servers + VAR_0->alloc_size;
 for (VAR_1=VAR_0->all_servers; VAR_1<VAR_2; VAR_1++)
 {
  if ((VAR_3=FUNC_0(*VAR_1, VAR_0->store_path_count)) != 0)

  {
   return VAR_3;
  }
 }

 return 0;
}
