
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* user_ldt_t ;
struct user_ldt {int dummy; } ;
struct real_descriptor {int dummy; } ;
struct TYPE_6__ {int count; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,size_t) ;
 int FUNC_1 (size_t) ;

user_ldt_t
FUNC_2(
 user_ldt_t VAR_0)
{
 if (VAR_0 != ((void*)0)) {
     size_t VAR_1 = sizeof(struct user_ldt) + (VAR_0->count * sizeof(struct real_descriptor));
     user_ldt_t VAR_2 = (user_ldt_t)FUNC_1(VAR_1);
     if (VAR_2 != ((void*)0))
  FUNC_0(VAR_0, VAR_2, VAR_1);
     return VAR_2;
 }

 return 0;
}
