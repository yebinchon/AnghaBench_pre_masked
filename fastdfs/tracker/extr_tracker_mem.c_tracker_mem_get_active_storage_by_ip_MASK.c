
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int group_name; } ;
struct TYPE_6__ {char const* id; } ;
typedef TYPE_1__ FDFSStorageIdInfo ;
typedef int FDFSStorageDetail ;
typedef TYPE_2__ FDFSGroupInfo ;


 TYPE_1__* FUNC_0 (int ,char const*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_2__*,char const*) ;

__attribute__((used)) static FDFSStorageDetail *FUNC_2( FDFSGroupInfo *VAR_1, const char *VAR_2)

{
 FDFSStorageIdInfo *VAR_3;

 if (!VAR_0)
 {
  return FUNC_1(VAR_1, VAR_2);
 }

 VAR_3 = FUNC_0(VAR_1->group_name, VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }
 return FUNC_1(VAR_1, VAR_3->id);
}
