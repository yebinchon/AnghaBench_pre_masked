
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_task {scalar_t__ outstanding_pkts; int hdr; int max_payload; int skb; struct hpsb_packet* packet; } ;
struct hpsb_packet {scalar_t__ tcode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct packet_task*,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct hpsb_packet*) ;
 int FUNC_4 (struct packet_task*,int) ;
 int FUNC_5 (struct hpsb_packet*) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
 struct packet_task *VAR_4 = (struct packet_task *)VAR_3;
 struct hpsb_packet *VAR_5 = VAR_4->packet;
 int VAR_6 = 0;

 if (VAR_5->tcode != VAR_2)
  VAR_6 = FUNC_5(VAR_5);

 FUNC_3(VAR_5);

 VAR_4->outstanding_pkts--;
 if (VAR_4->outstanding_pkts > 0 && !VAR_6) {
  int VAR_7, VAR_8;


  VAR_7 = FUNC_2(VAR_4->skb, VAR_4->max_payload,
            &VAR_4->hdr);
  VAR_8 = FUNC_4(VAR_4, VAR_7);
  if (VAR_8) {
   if (VAR_8 == -VAR_0)
    FUNC_0(VAR_1, "Out of tlabels\n");

   FUNC_1(VAR_4, 1);
  }
 } else {
  FUNC_1(VAR_4, VAR_6);
 }
}
