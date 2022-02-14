
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t* unsigned_integer; } ;
struct TYPE_7__ {TYPE_1__ target; } ;
struct TYPE_8__ {TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;
struct TYPE_9__ {int name; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static void FUNC_1(
      rarch_setting_t *VAR_1,
      char *VAR_2, size_t VAR_3)
{
   if (VAR_1)
      FUNC_0(VAR_2,
            VAR_0[*VAR_1->value.target.unsigned_integer].name,
            VAR_3);
}
