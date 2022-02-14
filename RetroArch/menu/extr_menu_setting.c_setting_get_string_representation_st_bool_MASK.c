
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int off_label; int on_label; } ;
struct TYPE_6__ {scalar_t__* boolean; } ;
struct TYPE_7__ {TYPE_1__ target; } ;
struct TYPE_9__ {TYPE_3__ boolean; TYPE_2__ value; } ;
typedef TYPE_4__ rarch_setting_t ;


 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static void FUNC_1(rarch_setting_t *VAR_0,
      char *VAR_1, size_t VAR_2)
{
   if (VAR_0)
      FUNC_0(VAR_1, *VAR_0->value.target.boolean ? VAR_0->boolean.on_label :
            VAR_0->boolean.off_label, VAR_2);
}
