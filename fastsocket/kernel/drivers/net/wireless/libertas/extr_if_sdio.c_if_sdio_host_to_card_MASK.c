
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lbs_private {int dnld_sent; struct if_sdio_card* card; } ;
struct if_sdio_packet {int nb; int* buffer; struct if_sdio_packet* next; } ;
struct if_sdio_card {int packet_worker; int workqueue; int lock; struct if_sdio_packet* packets; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 struct if_sdio_packet* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct lbs_private *VAR_6,
  u8 VAR_7, u8 *VAR_8, u16 VAR_9)
{
 int VAR_10;
 struct if_sdio_card *VAR_11;
 struct if_sdio_packet *VAR_12, *VAR_13;
 u16 VAR_14;
 unsigned long VAR_15;

 FUNC_1(VAR_5, "type %d, bytes %d", VAR_7, VAR_9);

 VAR_11 = VAR_6->card;

 if (VAR_9 > (65536 - sizeof(struct if_sdio_packet) - 4)) {
  VAR_10 = -VAR_2;
  goto out;
 }






 VAR_14 = FUNC_6(VAR_11->func, VAR_9 + 4);

 VAR_12 = FUNC_0(sizeof(struct if_sdio_packet) + VAR_14,
   VAR_4);
 if (!VAR_12) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_12->next = ((void*)0);
 VAR_12->nb = VAR_14;




 VAR_12->buffer[0] = (VAR_9 + 4) & 0xff;
 VAR_12->buffer[1] = ((VAR_9 + 4) >> 8) & 0xff;
 VAR_12->buffer[2] = VAR_7;
 VAR_12->buffer[3] = 0;

 FUNC_4(VAR_12->buffer + 4, VAR_8, VAR_9);

 FUNC_7(&VAR_11->lock, VAR_15);

 if (!VAR_11->packets)
  VAR_11->packets = VAR_12;
 else {
  VAR_13 = VAR_11->packets;
  while (VAR_13->next)
   VAR_13 = VAR_13->next;
  VAR_13->next = VAR_12;
 }

 switch (VAR_7) {
 case 129:
  VAR_6->dnld_sent = VAR_0;
  break;
 case 128:
  VAR_6->dnld_sent = VAR_1;
  break;
 default:
  FUNC_3("unknown packet type %d\n", (int)VAR_7);
 }

 FUNC_8(&VAR_11->lock, VAR_15);

 FUNC_5(VAR_11->workqueue, &VAR_11->packet_worker);

 VAR_10 = 0;

out:
 FUNC_2(VAR_5, "ret %d", VAR_10);

 return VAR_10;
}
