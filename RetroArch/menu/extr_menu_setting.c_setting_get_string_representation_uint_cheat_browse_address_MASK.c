
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int* unsigned_integer; } ;
struct TYPE_7__ {TYPE_1__ target; } ;
struct TYPE_8__ {TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;
struct TYPE_9__ {unsigned int browse_address; int match_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_5__ VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(rarch_setting_t *VAR_3,
      char *VAR_4, size_t VAR_5)
{
   unsigned int VAR_6 = VAR_2.browse_address;
   unsigned int VAR_7 = 0;
   unsigned int VAR_8 = 0;
   unsigned int VAR_9 = 0;

   if (VAR_3)
      FUNC_2(VAR_4, VAR_5, FUNC_1(VAR_1),
            *VAR_3->value.target.unsigned_integer, *VAR_3->value.target.unsigned_integer);

   FUNC_0(VAR_0, VAR_2.match_idx, &VAR_6, &VAR_7, &VAR_8, &VAR_9);

   FUNC_2(VAR_4, VAR_5, "Prev: %u Curr: %u", VAR_8, VAR_9);

}
