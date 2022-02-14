
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct class_compat {int kobj; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct class_compat*) ;
 struct class_compat* FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,int *) ;

struct class_compat *FUNC_3(const char *VAR_2)
{
 struct class_compat *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct class_compat), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->kobj = FUNC_2(VAR_2, &VAR_1->kobj);
 if (!VAR_3->kobj) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
