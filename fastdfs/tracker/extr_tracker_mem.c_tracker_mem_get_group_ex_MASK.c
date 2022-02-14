
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int target_groups ;
struct TYPE_8__ {int group_name; } ;
struct TYPE_7__ {int count; int sorted_groups; } ;
typedef TYPE_1__ FDFSGroups ;
typedef TYPE_2__ FDFSGroupInfo ;


 scalar_t__ FUNC_0 (TYPE_2__**,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_0 ;

FDFSGroupInfo *FUNC_3(FDFSGroups *VAR_1, const char *VAR_2)

{
 FDFSGroupInfo VAR_3;
 FDFSGroupInfo *VAR_4;
 FDFSGroupInfo **VAR_5;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(VAR_3.group_name, VAR_2);
 VAR_4 = &VAR_3;
 VAR_5 = (FDFSGroupInfo **)FUNC_0(&VAR_4, VAR_1->sorted_groups, VAR_1->count, sizeof(FDFSGroupInfo *), VAR_0);




 if (VAR_5 != ((void*)0))
 {
  return *VAR_5;
 }
 else
 {
  return ((void*)0);
 }
}
