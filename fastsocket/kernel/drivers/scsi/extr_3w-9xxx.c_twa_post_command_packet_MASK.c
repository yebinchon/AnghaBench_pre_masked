
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_10__ {int* command_packet_phys; scalar_t__ pending_request_count; scalar_t__* state; scalar_t__ max_pending_request_count; int* pending_queue; size_t pending_tail; scalar_t__ posted_request_count; scalar_t__ max_posted_request_count; TYPE_1__* tw_pci_dev; } ;
struct TYPE_9__ {scalar_t__ device; } ;
typedef TYPE_2__ TW_Device_Extension ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(TW_Device_Extension *VAR_8, int VAR_9, char VAR_10)
{
 u32 VAR_11;
 dma_addr_t VAR_12;
 int VAR_13 = 1;

 VAR_12 = VAR_8->command_packet_phys[VAR_9];


 if ((VAR_8->tw_pci_dev->device == VAR_0) ||
     (VAR_8->tw_pci_dev->device == VAR_1)) {
  VAR_12 += VAR_3;
  FUNC_7((u32)VAR_12, FUNC_1(VAR_8));
 }

 VAR_11 = FUNC_4(FUNC_2(VAR_8));

 if (FUNC_5(VAR_11))
  FUNC_6(VAR_8, VAR_11);

 if (((VAR_8->pending_request_count > 0) && (VAR_8->state[VAR_9] != VAR_6)) || (VAR_11 & VAR_5)) {


  if (!VAR_10) {
   VAR_13 = VAR_2;
   goto out;
  }


  if (VAR_8->state[VAR_9] != VAR_6) {
   VAR_8->state[VAR_9] = VAR_6;
   VAR_8->pending_request_count++;
   if (VAR_8->pending_request_count > VAR_8->max_pending_request_count) {
    VAR_8->max_pending_request_count = VAR_8->pending_request_count;
   }
   VAR_8->pending_queue[VAR_8->pending_tail] = VAR_9;
   VAR_8->pending_tail = (VAR_8->pending_tail + 1) % VAR_4;
  }
  FUNC_3(VAR_8);
  goto out;
 } else {
  if ((VAR_8->tw_pci_dev->device == VAR_0) ||
      (VAR_8->tw_pci_dev->device == VAR_1)) {

   FUNC_7((u32)((u64)VAR_12 >> 32), FUNC_1(VAR_8) + 0x4);
  } else {
   if (sizeof(dma_addr_t) > 4) {
    VAR_12 += VAR_3;
    FUNC_7((u32)VAR_12, FUNC_0(VAR_8));
    FUNC_7((u32)((u64)VAR_12 >> 32), FUNC_0(VAR_8) + 0x4);
   } else {
    FUNC_7(VAR_3 + VAR_12, FUNC_0(VAR_8));
   }
  }
  VAR_8->state[VAR_9] = VAR_7;
  VAR_8->posted_request_count++;
  if (VAR_8->posted_request_count > VAR_8->max_posted_request_count) {
   VAR_8->max_posted_request_count = VAR_8->posted_request_count;
  }
 }
 VAR_13 = 0;
out:
 return VAR_13;
}
