
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iphdr {int dummy; } ;
struct TYPE_8__ {int tot_len; } ;
struct hso_net {int rx_parse_state; unsigned int rx_buf_missing; int rx_buf_size; TYPE_7__* net; TYPE_3__* skb_rx_buf; TYPE_1__ rx_ip_hdr; } ;
struct TYPE_9__ {int rx_bytes; int rx_packets; } ;
struct TYPE_11__ {TYPE_2__ stats; int dev; } ;
struct TYPE_10__ {int ip_summed; int protocol; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 unsigned short VAR_1 ;
 int FUNC_1 (unsigned char*,int ) ;
 int VAR_2 ;



 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,unsigned short) ;
 int FUNC_4 (unsigned char*,...) ;
 int FUNC_5 (int,int) ;
 TYPE_3__* FUNC_6 (TYPE_7__*,unsigned short) ;
 int FUNC_7 (TYPE_3__*) ;
 unsigned short FUNC_8 (int ) ;
 unsigned char* FUNC_9 (TYPE_3__*,unsigned short) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_11(struct hso_net *VAR_3, unsigned char *VAR_4,
   unsigned int VAR_5, unsigned char VAR_6)
{
 unsigned short VAR_7;
 unsigned short VAR_8 = 0;
 unsigned short VAR_9;
 unsigned char *VAR_10;


 FUNC_0("Rx %d bytes", VAR_5);
 FUNC_1(VAR_4, FUNC_5(128, (int)VAR_5));

 while (VAR_5) {
  switch (VAR_3->rx_parse_state) {
  case 129:


   VAR_7 =
       (VAR_5 <
        VAR_3->rx_buf_missing) ? VAR_5 : VAR_3->
       rx_buf_missing;

   FUNC_4(((unsigned char *)(&VAR_3->rx_ip_hdr)) +
          VAR_3->rx_buf_size, VAR_4 + VAR_8,
          VAR_7);

   VAR_3->rx_buf_size += VAR_7;
   VAR_8 += VAR_7;
   VAR_3->rx_buf_missing -= VAR_7;
   VAR_5 -= VAR_7;

   if (!VAR_3->rx_buf_missing) {


    VAR_9 = FUNC_8(VAR_3->rx_ip_hdr.tot_len);

    if ((VAR_9 > VAR_1) ||
        (VAR_9 < sizeof(struct iphdr))) {
     FUNC_3(&VAR_3->net->dev,
      "Invalid frame (%d) length\n",
      VAR_9);
     VAR_3->rx_parse_state = 128;
     continue;
    }

    VAR_3->skb_rx_buf = FUNC_6(VAR_3->net,
            VAR_9);
    if (!VAR_3->skb_rx_buf) {

     FUNC_0("could not allocate memory");
     VAR_3->rx_parse_state = 128;
     return;
    }



    VAR_10 =
        FUNC_9(VAR_3->skb_rx_buf,
         sizeof(struct iphdr));
    FUNC_4(VAR_10, (char *)&(VAR_3->rx_ip_hdr),
           sizeof(struct iphdr));


    VAR_3->rx_buf_size = sizeof(struct iphdr);


    VAR_3->rx_buf_missing =
        VAR_9 - sizeof(struct iphdr);
    VAR_3->rx_parse_state = 130;
   }
   break;

  case 130:
   VAR_7 = (VAR_5 < VAR_3->rx_buf_missing)
     ? VAR_5 : VAR_3->rx_buf_missing;




   VAR_10 = FUNC_9(VAR_3->skb_rx_buf, VAR_7);
   FUNC_4(VAR_10, VAR_4 + VAR_8, VAR_7);

   VAR_3->rx_buf_missing -= VAR_7;
   VAR_5 -= VAR_7;
   VAR_8 += VAR_7;
   VAR_3->rx_buf_size += VAR_7;
   if (!VAR_3->rx_buf_missing) {


    VAR_3->skb_rx_buf->protocol = FUNC_2(VAR_2);

    VAR_3->skb_rx_buf->ip_summed =
     VAR_0;

    FUNC_10(VAR_3->skb_rx_buf);


    FUNC_7(VAR_3->skb_rx_buf);

    VAR_3->skb_rx_buf = ((void*)0);


    VAR_3->net->stats.rx_packets++;

    VAR_3->net->stats.rx_bytes += VAR_3->rx_buf_size;

    VAR_3->rx_buf_size = 0;
    VAR_3->rx_buf_missing = sizeof(struct iphdr);
    VAR_3->rx_parse_state = 129;
   }
   break;

  case 128:
   FUNC_0(" W_S");
   VAR_5 = 0;
   break;
  default:
   FUNC_0(" ");
   VAR_5--;
   break;
  }
 }


 if (VAR_6) {
  if (VAR_3->rx_parse_state == 128) {
   VAR_3->rx_parse_state = 129;
   VAR_3->rx_buf_size = 0;
   VAR_3->rx_buf_missing = sizeof(struct iphdr);
  }
 }
}
