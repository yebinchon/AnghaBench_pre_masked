
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hpsb_packet {scalar_t__ generation; scalar_t__ node_id; size_t data_size; size_t header_size; scalar_t__ type; int speed_code; int header; scalar_t__ expect_response; int data; int queue; scalar_t__ sendtime; int refcnt; scalar_t__ no_waiter; int state; struct hpsb_host* host; } ;
struct hpsb_host {scalar_t__ node_id; int* speed; TYPE_1__* driver; int pending_packets; scalar_t__ in_bus_reset; scalar_t__ is_shutdown; } ;
typedef int quadlet_t ;
struct TYPE_2__ {int (* transmit_packet ) (struct hpsb_host*,struct hpsb_packet*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct hpsb_host*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct hpsb_host*,int *,size_t,int ) ;
 int FUNC_7 (struct hpsb_host*,struct hpsb_packet*,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (size_t,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,size_t) ;
 int VAR_11 ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct hpsb_host*,struct hpsb_packet*) ;

int FUNC_15(struct hpsb_packet *VAR_12)
{
 struct hpsb_host *VAR_13 = VAR_12->host;

 if (VAR_13->is_shutdown)
  return -VAR_4;
 if (VAR_13->in_bus_reset ||
     (VAR_12->generation != FUNC_5(VAR_13)))
  return -VAR_3;

 VAR_12->state = VAR_9;


 FUNC_2(VAR_12->no_waiter && VAR_12->expect_response);

 if (!VAR_12->no_waiter || VAR_12->expect_response) {
  unsigned long VAR_14;

  FUNC_3(&VAR_12->refcnt);



  VAR_12->sendtime = VAR_10 + 10 * VAR_7;
  FUNC_12(&VAR_11, VAR_14);
  FUNC_10(&VAR_12->queue, &VAR_13->pending_packets);
  FUNC_13(&VAR_11, VAR_14);
 }

 if (VAR_12->node_id == VAR_13->node_id) {


  quadlet_t *VAR_15;
  size_t VAR_16 = VAR_12->data_size + VAR_12->header_size;

  VAR_15 = FUNC_9(VAR_16, VAR_6);
  if (!VAR_15) {
   FUNC_0("unable to allocate memory for concatenating header and data");
   return -VAR_5;
  }

  FUNC_11(VAR_15, VAR_12->header, VAR_12->header_size);

  if (VAR_12->data_size)
   FUNC_11(((u8*)VAR_15) + VAR_12->header_size, VAR_12->data, VAR_12->data_size);

  FUNC_4("send packet local", VAR_12->header, VAR_12->header_size, -1);

  FUNC_7(VAR_13, VAR_12, VAR_12->expect_response ? VAR_1 : VAR_0);
  FUNC_6(VAR_13, VAR_15, VAR_16, 0);

  FUNC_8(VAR_15);

  return 0;
 }

 if (VAR_12->type == VAR_8 &&
     FUNC_1(VAR_12->node_id) != VAR_2)
  VAR_12->speed_code =
   VAR_13->speed[FUNC_1(VAR_12->node_id)];

 FUNC_4("send packet", VAR_12->header, VAR_12->header_size, VAR_12->speed_code);

 return VAR_13->driver->transmit_packet(VAR_13, VAR_12);
}
