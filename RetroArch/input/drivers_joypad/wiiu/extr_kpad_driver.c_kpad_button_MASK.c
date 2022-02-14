
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int button_state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_3(unsigned VAR_1, uint16_t VAR_2)
{
   int VAR_3;
   if (!FUNC_1(VAR_1))
      return 0;

   VAR_3 = FUNC_2(VAR_1);
   if(VAR_3 < 0)
      return 0;

   return VAR_0[VAR_3].button_state
      & (FUNC_0(1) << VAR_2);
}
