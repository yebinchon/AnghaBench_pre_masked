
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_bits_t ;
struct TYPE_2__ {int (* get_buttons ) (void*,unsigned int,int *) ;} ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (void*,unsigned int,int *) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_1, input_bits_t *VAR_2)
{
   if (VAR_0 && VAR_0->get_buttons)
      VAR_0->get_buttons((void*)FUNC_1(), VAR_1, VAR_2);
   else
      FUNC_0(VAR_2);
}
