
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * slots; } ;
typedef TYPE_1__ iohidmanager_hid_t ;
typedef int input_bits_t ;


 int FUNC_0 (int *) ;
 void FUNC_1 (int *,unsigned int,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      unsigned VAR_1, input_bits_t *VAR_2)
{
  iohidmanager_hid_t *VAR_3 = (iohidmanager_hid_t*)VAR_0;
  if (VAR_3)
    return FUNC_1(&VAR_3->slots[VAR_1], VAR_1, VAR_2);
  else
    FUNC_0(VAR_2);
}
