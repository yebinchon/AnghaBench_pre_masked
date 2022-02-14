
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int base_addr; int name; } ;
struct TYPE_8__ {int* raw; } ;
struct TYPE_9__ {int length; TYPE_2__ data; int command; } ;
typedef TYPE_3__ pcb_struct ;
struct TYPE_7__ {scalar_t__ direction; } ;
struct TYPE_10__ {int hcr_val; scalar_t__ send_pcb_semaphore; int lock; TYPE_1__ current_dma; scalar_t__ dmaing; } ;
typedef TYPE_4__ elp_device ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,struct net_device*) ;
 int FUNC_6 (char*,int ,...) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int,scalar_t__*) ;
 scalar_t__ FUNC_13 (int,unsigned long) ;

__attribute__((used)) static bool FUNC_14(struct net_device *VAR_3, pcb_struct * VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 elp_device *VAR_7 = FUNC_3(VAR_3);
 unsigned long VAR_8;

 FUNC_1(VAR_3);

 if (VAR_7->dmaing && VAR_7->current_dma.direction == 0)
  return 0;


 if (FUNC_12(1, &VAR_7->send_pcb_semaphore)) {
  if (VAR_1 >= 3) {
   FUNC_6("%s: send_pcb entered while threaded\n", VAR_3->name);
  }
  return 0;
 }





 FUNC_9(VAR_3, 0);

 if (FUNC_8(VAR_3->base_addr, VAR_4->command))
  goto abort;

 FUNC_10(&VAR_7->lock, VAR_8);

 if (FUNC_7(VAR_3->base_addr, VAR_4->length))
  goto sti_abort;

 for (VAR_5 = 0; VAR_5 < VAR_4->length; VAR_5++) {
  if (FUNC_7(VAR_3->base_addr, VAR_4->data.raw[VAR_5]))
   goto sti_abort;
 }

 FUNC_5(VAR_7->hcr_val | 3, VAR_3);
 FUNC_4(2 + VAR_4->length, VAR_3->base_addr);


 FUNC_11(&VAR_7->lock, VAR_8);

 for (VAR_6 = VAR_2 + 5*VAR_0/100; FUNC_13(VAR_2, VAR_6);) {
  switch (FUNC_0(VAR_3->base_addr)) {
  case 129:
   VAR_7->send_pcb_semaphore = 0;
   return 1;

  case 128:



   goto abort;
  }
 }

 if (VAR_1 >= 1)
  FUNC_6("%s: timeout waiting for PCB acknowledge (status %02x)\n",
   VAR_3->name, FUNC_2(VAR_3->base_addr));
 goto abort;

      sti_abort:
 FUNC_11(&VAR_7->lock, VAR_8);
      abort:
 VAR_7->send_pcb_semaphore = 0;
 return 0;
}
