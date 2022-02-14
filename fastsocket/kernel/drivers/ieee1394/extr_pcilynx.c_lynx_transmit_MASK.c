
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lynx_send_data {int queue_lock; int pcl_queue; int queue; } ;
struct ti_lynx {int id; struct lynx_send_data iso_send; struct lynx_send_data async; } ;
struct hpsb_packet {int data_size; int type; scalar_t__ tcode; int driver_list; int * header; } ;
struct hpsb_host {struct ti_lynx* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;



 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ti_lynx*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct hpsb_host *VAR_5, struct hpsb_packet *VAR_6)
{
        struct ti_lynx *VAR_7 = VAR_5->hostdata;
        struct lynx_send_data *VAR_8;
        unsigned long VAR_9;

        if (VAR_6->data_size >= 4096) {
                FUNC_0(VAR_2, VAR_7->id, "transmit packet data too big (%Zd)",
                      VAR_6->data_size);
                return -VAR_1;
        }

        switch (VAR_6->type) {
        case 130:
        case 128:
                VAR_8 = &VAR_7->async;
                break;





        default:
                FUNC_0(VAR_2, VAR_7->id, "invalid packet type %d",
                      VAR_6->type);
                return -VAR_0;
        }

        if (VAR_6->tcode == VAR_4
            || VAR_6->tcode == VAR_3) {
                FUNC_1(&VAR_6->header[3]);
        }

        FUNC_5(&VAR_8->queue_lock, VAR_9);

 FUNC_2(&VAR_6->driver_list, &VAR_8->queue);
 if (FUNC_3(&VAR_8->pcl_queue))
                FUNC_4(VAR_7, VAR_6->type);

        FUNC_6(&VAR_8->queue_lock, VAR_9);

        return 0;
}
