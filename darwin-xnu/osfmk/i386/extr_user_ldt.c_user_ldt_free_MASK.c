
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* user_ldt_t ;
struct user_ldt {int dummy; } ;
struct real_descriptor {int dummy; } ;
struct TYPE_4__ {int count; } ;


 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(
 user_ldt_t VAR_0)
{
 FUNC_0(VAR_0, sizeof(struct user_ldt) + (VAR_0->count * sizeof(struct real_descriptor)));
}
