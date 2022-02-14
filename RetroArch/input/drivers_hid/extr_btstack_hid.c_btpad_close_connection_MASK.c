
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btstack_hid_adapter {scalar_t__ handle; } ;


 int FUNC_0 (int *,scalar_t__,int) ;
 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct btstack_hid_adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct btstack_hid_adapter* VAR_2)
{
   if (!VAR_2)
      return;

   if (VAR_2->handle)
      FUNC_0(&VAR_0[VAR_1],
            VAR_2->handle, 0x15);

   FUNC_1(VAR_2, 0, sizeof(struct btstack_hid_adapter));
}
