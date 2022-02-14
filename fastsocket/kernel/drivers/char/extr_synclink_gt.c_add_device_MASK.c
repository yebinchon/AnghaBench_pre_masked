
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct slgt_info {size_t line; int max_frame_size; int irq_level; int phys_reg_addr; int device_name; TYPE_2__ params; TYPE_1__* pdev; struct slgt_info* next_device; } ;
struct TYPE_3__ {int device; } ;


 size_t VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct slgt_info*) ;
 int* VAR_2 ;
 int FUNC_1 (char*,char*,int ,int ,int ,int) ;
 size_t VAR_3 ;
 struct slgt_info* VAR_4 ;
 int FUNC_2 (int ,char*,char*,size_t) ;
 char* VAR_5 ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_6)
{
 char *VAR_7;

 VAR_6->next_device = ((void*)0);
 VAR_6->line = VAR_3;
 FUNC_2(VAR_6->device_name, "%s%d", VAR_5, VAR_6->line);

 if (VAR_6->line < VAR_0) {
  if (VAR_2[VAR_6->line])
   VAR_6->max_frame_size = VAR_2[VAR_6->line];
 }

 VAR_3++;

 if (!VAR_4)
  VAR_4 = VAR_6;
 else {
  struct slgt_info *VAR_8 = VAR_4;
  while(VAR_8->next_device)
   VAR_8 = VAR_8->next_device;
  VAR_8->next_device = VAR_6;
 }

 if (VAR_6->max_frame_size < 4096)
  VAR_6->max_frame_size = 4096;
 else if (VAR_6->max_frame_size > 65535)
  VAR_6->max_frame_size = 65535;

 switch(VAR_6->pdev->device) {
 case 128:
  VAR_7 = "GT";
  break;
 case 130:
  VAR_7 = "GT2";
  break;
 case 129:
  VAR_7 = "GT4";
  break;
 case 131:
  VAR_7 = "AC";
  VAR_6->params.mode = VAR_1;
  break;
 default:
  VAR_7 = "(unknown model)";
 }
 FUNC_1("SyncLink %s %s IO=%08x IRQ=%d MaxFrameSize=%u\n",
  VAR_7, VAR_6->device_name, VAR_6->phys_reg_addr,
  VAR_6->irq_level, VAR_6->max_frame_size);




}
