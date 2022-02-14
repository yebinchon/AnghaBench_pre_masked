
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int target_storage ;
struct TYPE_8__ {int count; int sorted_servers; } ;
struct TYPE_7__ {int id; } ;
typedef TYPE_1__ FDFSStorageDetail ;
typedef TYPE_2__ FDFSGroupInfo ;


 scalar_t__ FUNC_0 (TYPE_1__**,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_0 ;

FDFSStorageDetail *FUNC_3(FDFSGroupInfo *VAR_1, const char *VAR_2)

{
 FDFSStorageDetail VAR_3;
 FDFSStorageDetail *VAR_4;
 FDFSStorageDetail **VAR_5;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(VAR_3.id, VAR_2);
 VAR_4 = &VAR_3;
 VAR_5 = (FDFSStorageDetail **)FUNC_0(&VAR_4, VAR_1->sorted_servers, VAR_1->count, sizeof(FDFSStorageDetail *), VAR_0);




 if (VAR_5 != ((void*)0))
 {
  return *VAR_5;
 }
 else
 {
  return ((void*)0);
 }
}
