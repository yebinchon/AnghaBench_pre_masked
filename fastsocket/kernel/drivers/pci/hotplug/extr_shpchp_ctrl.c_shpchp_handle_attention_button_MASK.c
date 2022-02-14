
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct slot {int presence_save; TYPE_1__* hpc_ops; } ;
struct controller {scalar_t__ slot_device_offset; } ;
struct TYPE_2__ {int (* get_adapter_status ) (struct slot*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct controller*,char*) ;
 int FUNC_1 (struct controller*,char*,int ) ;
 int FUNC_2 (struct slot*,int ) ;
 struct slot* FUNC_3 (struct controller*,scalar_t__) ;
 int FUNC_4 (struct slot*) ;
 int FUNC_5 (struct slot*,int *) ;

u8 FUNC_6(u8 VAR_1, struct controller *VAR_2)
{
 struct slot *VAR_3;
 u32 VAR_4;


 FUNC_0(VAR_2, "Attention button interrupt received\n");

 VAR_3 = FUNC_3(VAR_2, VAR_1 + VAR_2->slot_device_offset);
 VAR_3->hpc_ops->get_adapter_status(VAR_3, &(VAR_3->presence_save));




 FUNC_1(VAR_2, "Button pressed on Slot(%s)\n", FUNC_4(VAR_3));
 VAR_4 = VAR_0;

 FUNC_2(VAR_3, VAR_4);

 return 0;

}
