
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_bits_t ;
struct TYPE_2__ {int * slots; } ;
typedef TYPE_1__ btstack_hid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned VAR_1,
      input_bits_t *VAR_2)
{
  btstack_hid_t *VAR_3 = (btstack_hid_t*)VAR_0;
  if (VAR_3)
    FUNC_1(&VAR_3->slots[VAR_1], VAR_1, VAR_2);
  else
    FUNC_0(VAR_2);
}
