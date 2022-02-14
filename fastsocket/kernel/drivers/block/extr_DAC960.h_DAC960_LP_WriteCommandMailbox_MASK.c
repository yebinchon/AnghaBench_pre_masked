
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * Words; } ;
typedef TYPE_1__ DAC960_V2_CommandMailbox_T ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline
void FUNC_3(DAC960_V2_CommandMailbox_T
         *VAR_0,
       DAC960_V2_CommandMailbox_T
         *VAR_1)
{
  FUNC_1(&VAR_0->Words[1], &VAR_1->Words[1],
  sizeof(DAC960_V2_CommandMailbox_T) - sizeof(unsigned int));
  FUNC_2();
  VAR_0->Words[0] = VAR_1->Words[0];
  FUNC_0();
}
