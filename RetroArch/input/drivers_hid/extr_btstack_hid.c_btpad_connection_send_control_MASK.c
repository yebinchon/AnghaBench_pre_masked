
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct btstack_hid_adapter {int * channels; } ;


 int FUNC_0 (int ,int *,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      uint8_t* VAR_1, size_t VAR_2)
{
   struct btstack_hid_adapter *VAR_3 = (struct btstack_hid_adapter*)VAR_0;

   if (VAR_3)
      FUNC_0(VAR_3->channels[0], VAR_1, VAR_2);
}
