
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_pcl {TYPE_2__* buffer; scalar_t__ pcl_status; void* async_error_next; void* next; } ;
struct TYPE_3__ {int next; } ;
struct lynx_send_data {int channel; int pcl_start; int pcl; void* data_dma; void* header_dma; int pcl_queue; TYPE_1__ queue; } ;
struct ti_lynx {int dev; int id; struct lynx_send_data async; struct lynx_send_data iso_send; } ;
struct hpsb_packet {int header_size; int data_size; int speed_code; int type; int data; int header; int driver_list; } ;
struct TYPE_4__ {int control; void* pointer; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (int ,int ,char*) ;
 struct hpsb_packet* FUNC_2 (int ) ;



 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (struct ti_lynx*,int ,struct ti_pcl*) ;
 int FUNC_7 (struct ti_lynx*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ti_lynx *VAR_8, int VAR_9)
{
        struct ti_pcl VAR_10;
        struct lynx_send_data *VAR_11;
        struct hpsb_packet *VAR_12;




 VAR_11 = &VAR_8->async;

        if (!FUNC_3(&VAR_11->pcl_queue)) {
                FUNC_1(VAR_0, VAR_8->id, "trying to queue a new packet in nonempty fifo");
                FUNC_0();
        }

        VAR_12 = FUNC_2(VAR_11->queue.next);
 FUNC_4(&VAR_12->driver_list, &VAR_11->pcl_queue);

        VAR_11->header_dma = FUNC_5(VAR_8->dev, VAR_12->header,
                                       VAR_12->header_size, VAR_1);
        if (VAR_12->data_size) {
                VAR_11->data_dma = FUNC_5(VAR_8->dev, VAR_12->data,
                                             VAR_12->data_size,
                                             VAR_1);
        } else {
                VAR_11->data_dma = 0;
        }

        VAR_10.next = VAR_7;
        VAR_10.async_error_next = VAR_7;
        VAR_10.pcl_status = 0;
        VAR_10.buffer[0].control = VAR_12->speed_code << 14 | VAR_12->header_size;

        VAR_10.buffer[0].control |= VAR_2;

        VAR_10.buffer[0].pointer = VAR_11->header_dma;
        VAR_10.buffer[1].control = VAR_6 | VAR_12->data_size;
        VAR_10.buffer[1].pointer = VAR_11->data_dma;

        switch (VAR_12->type) {
        case 130:
                VAR_10.buffer[0].control |= VAR_4;
                break;





        case 128:
                VAR_10.buffer[0].control |= VAR_3;
                break;
        }

        FUNC_6(VAR_8, VAR_11->pcl, &VAR_10);
        FUNC_7(VAR_8, VAR_11->pcl_start, VAR_11->channel);
}
