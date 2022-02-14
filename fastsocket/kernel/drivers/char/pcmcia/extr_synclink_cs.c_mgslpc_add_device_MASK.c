
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int line; int max_frame_size; int irq_level; int io_base; int device_name; struct TYPE_5__* next_device; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(MGSLPC_INFO *VAR_4)
{
 VAR_4->next_device = ((void*)0);
 VAR_4->line = VAR_2;
 FUNC_2(VAR_4->device_name,"ttySLP%d",VAR_4->line);

 if (VAR_4->line < VAR_0) {
  if (VAR_1[VAR_4->line])
   VAR_4->max_frame_size = VAR_1[VAR_4->line];
 }

 VAR_2++;

 if (!VAR_3)
  VAR_3 = VAR_4;
 else {
  MGSLPC_INFO *VAR_5 = VAR_3;
  while( VAR_5->next_device )
   VAR_5 = VAR_5->next_device;
  VAR_5->next_device = VAR_4;
 }

 if (VAR_4->max_frame_size < 4096)
  VAR_4->max_frame_size = 4096;
 else if (VAR_4->max_frame_size > 65535)
  VAR_4->max_frame_size = 65535;

 FUNC_1( "SyncLink PC Card %s:IO=%04X IRQ=%d\n",
  VAR_4->device_name, VAR_4->io_base, VAR_4->irq_level);




}
