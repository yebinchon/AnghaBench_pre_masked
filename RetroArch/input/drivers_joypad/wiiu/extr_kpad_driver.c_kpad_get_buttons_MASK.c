
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_bits_t ;
struct TYPE_2__ {int button_state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_4(unsigned VAR_1, input_bits_t *VAR_2)
{
   int VAR_3 = FUNC_3(VAR_1);

   if (!FUNC_2(VAR_1) || VAR_3 < 0)
      FUNC_0(VAR_2);
   else
      FUNC_1(VAR_2, VAR_0[VAR_3].button_state);
}
