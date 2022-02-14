
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_boot_kset {int kobj_list; int kset; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct iscsi_boot_kset*) ;
 int FUNC_2 (char const*,int *,int ) ;
 struct iscsi_boot_kset* FUNC_3 (int,int ) ;

struct iscsi_boot_kset *FUNC_4(const char *VAR_2)
{
 struct iscsi_boot_kset *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->kset = FUNC_2(VAR_2, ((void*)0), VAR_1);
 if (!VAR_3->kset) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 FUNC_0(&VAR_3->kobj_list);
 return VAR_3;
}
