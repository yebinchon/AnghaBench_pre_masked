
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t* unsigned_integer; } ;
struct TYPE_6__ {TYPE_1__ target; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_2(
      rarch_setting_t *VAR_4,
      char *VAR_5, size_t VAR_6)
{
   const char *VAR_7[3];

   VAR_7[0] = FUNC_0(VAR_2);
   VAR_7[1] = FUNC_0(VAR_1);
   VAR_7[2] = FUNC_0(VAR_3);

   FUNC_1(VAR_5, VAR_7[*VAR_4->value.target.unsigned_integer % VAR_0], VAR_6);
}
