
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_func {int presence_save; int switch_save; } ;
struct event_info {int hp_slot; int event_type; } ;
struct controller {size_t next_event; int ctrl_int_comp; struct event_info* event_queue; scalar_t__ slot_device_offset; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_func* FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u8 FUNC_2(u8 VAR_2, struct controller * VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;
 u16 VAR_6;
 struct pci_func *VAR_7;
 struct event_info *VAR_8;

 if (!VAR_2)
  return 0;


 FUNC_1("cpqsbd:  Switch interrupt received.\n");

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  if (VAR_2 & (0x1L << VAR_4)) {



   VAR_7 = FUNC_0(VAR_3->bus,
    (VAR_4 + VAR_3->slot_device_offset), 0);




   VAR_8 = &(VAR_3->event_queue[VAR_3->next_event]);
   VAR_3->next_event = (VAR_3->next_event + 1) % 10;
   VAR_8->hp_slot = VAR_4;

   VAR_5++;

   VAR_6 = VAR_3->ctrl_int_comp >> 16;
   VAR_7->presence_save = (VAR_6 >> VAR_4) & 0x01;
   VAR_7->presence_save |= (VAR_6 >> (VAR_4 + 7)) & 0x02;

   if (VAR_3->ctrl_int_comp & (0x1L << VAR_4)) {




    VAR_7->switch_save = 0;

    VAR_8->event_type = VAR_1;
   } else {




    VAR_7->switch_save = 0x10;

    VAR_8->event_type = VAR_0;
   }
  }
 }

 return VAR_5;
}
