
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_21__ {scalar_t__ head; } ;
struct TYPE_20__ {int fw_desc_available; TYPE_7__* fw_desc; TYPE_6__ rx_queue; TYPE_6__* tx_queue; TYPE_6__* cab_queue; TYPE_6__ tx_retry; } ;
struct TYPE_19__ {int int_desc_available; TYPE_7__* int_desc; } ;
struct TYPE_17__ {TYPE_6__ up_queue; TYPE_6__ down_queue; } ;
struct TYPE_23__ {TYPE_5__ wlan; TYPE_4__ usb; TYPE_2__ pta; } ;
struct TYPE_22__ {int dataSize; void* dataAddr; } ;
struct TYPE_18__ {int rsp; } ;
struct TYPE_16__ {int data; } ;
struct TYPE_15__ {TYPE_3__ reserved; int * block; TYPE_1__* data; TYPE_7__* terminator; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int) ;
 unsigned int VAR_11 ;
 int FUNC_2 (char*,unsigned int,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int) ;
 unsigned int VAR_12 ;
 int FUNC_5 (TYPE_7__*) ;
 TYPE_10__ VAR_13 ;
 int FUNC_6 (TYPE_6__*,int *) ;
 int FUNC_7 (int *,int,int ) ;
 TYPE_8__ VAR_14 ;
 int FUNC_8 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (unsigned int,int) ;

void FUNC_12(void)
{
 unsigned int VAR_15, VAR_16;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13.terminator); VAR_15++)
  FUNC_5(&VAR_13.terminator[VAR_15]);


 VAR_15 = 0;
 FUNC_8(&VAR_14.pta.up_queue, &VAR_13.terminator[VAR_15++]);
 FUNC_8(&VAR_14.pta.down_queue, &VAR_13.terminator[VAR_15++]);
 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
  FUNC_8(&VAR_14.wlan.tx_queue[VAR_16], &VAR_13.terminator[VAR_15++]);
 FUNC_8(&VAR_14.wlan.tx_retry, &VAR_13.terminator[VAR_15++]);
 FUNC_8(&VAR_14.wlan.rx_queue, &VAR_13.terminator[VAR_15++]);
 VAR_14.usb.int_desc = &VAR_13.terminator[VAR_15++];
 VAR_14.wlan.fw_desc = &VAR_13.terminator[VAR_15++];






 FUNC_1(VAR_9 != VAR_15);

 FUNC_2("Blocks:%d [tx:%d, rx:%d] Terminators:%d/%d\n",
     VAR_0, VAR_10,
     VAR_8, VAR_9, VAR_15);


 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  FUNC_7(&VAR_13.block[VAR_15], VAR_1, VAR_13.data[VAR_15].data);

  if (VAR_15 < VAR_10)
   FUNC_6(&VAR_14.pta.down_queue, &VAR_13.block[VAR_15]);
  else
   FUNC_6(&VAR_14.wlan.rx_queue, &VAR_13.block[VAR_15]);
 }


 FUNC_10(VAR_4, (uint32_t) VAR_14.pta.down_queue.head >> 16);
 FUNC_10(VAR_5, (uint32_t) VAR_14.pta.down_queue.head & 0xffff);
 FUNC_10(VAR_6, (uint32_t) VAR_14.pta.up_queue.head >> 16);
 FUNC_10(VAR_7, (uint32_t) VAR_14.pta.up_queue.head & 0xffff);

 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
  FUNC_11(VAR_15, (uint32_t) VAR_14.wlan.tx_queue[VAR_15].head);

 FUNC_10(VAR_3, (uint32_t) VAR_14.wlan.rx_queue.head);
 VAR_14.usb.int_desc->dataSize = VAR_1;
 VAR_14.usb.int_desc->dataAddr = (void *) &VAR_13.reserved.rsp;

 FUNC_9(FUNC_3(VAR_14.usb.int_desc), 0xff,
        VAR_2);
 FUNC_9(FUNC_4(VAR_14.usb.int_desc, VAR_2),
        0, VAR_1 - VAR_2);


 VAR_14.usb.int_desc_available = 1;

 FUNC_9(FUNC_3(VAR_14.wlan.fw_desc), 0, 128);
 VAR_14.wlan.fw_desc_available = 1;
}
