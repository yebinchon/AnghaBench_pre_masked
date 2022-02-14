
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_frame_errors; int rx_crc_errors; int rx_errors; int rx_packets; int rx_dropped; } ;
struct ioc3_private {int rx_ci; int rx_pi; int flags; struct sk_buff** rx_skbs; TYPE_1__ stats; scalar_t__ rxr; struct ioc3* regs; } ;
struct ioc3_erxbuf {scalar_t__ w0; scalar_t__ err; } ;
struct ioc3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ioc3_erxbuf*,int) ;
 int FUNC_5 (struct sk_buff*,int,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct ioc3_private*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_13(struct ioc3_private *VAR_11)
{
 struct sk_buff *VAR_12, *VAR_13;
 struct ioc3 *VAR_14 = VAR_11->regs;
 int VAR_15, VAR_16, VAR_17;
 struct ioc3_erxbuf *VAR_18;
 unsigned long *VAR_19;
 u32 VAR_20, VAR_21;

 VAR_19 = (unsigned long *) VAR_11->rxr;
 VAR_15 = VAR_11->rx_ci;
 VAR_16 = VAR_11->rx_pi;

 VAR_12 = VAR_11->rx_skbs[VAR_15];
 VAR_18 = (struct ioc3_erxbuf *) (VAR_12->data - VAR_10);
 VAR_20 = FUNC_0(VAR_18->w0);

 while (VAR_20 & VAR_6) {
  VAR_21 = FUNC_0(VAR_18->err);
  if (VAR_21 & VAR_4) {
   VAR_17 = ((VAR_20 >> VAR_1) & 0x7ff) - 4;
   FUNC_12(VAR_12, VAR_17);
   VAR_12->protocol = FUNC_2(VAR_12, FUNC_9(VAR_11));

   VAR_13 = FUNC_3(VAR_9, VAR_7);
   if (!VAR_13) {


    VAR_11->stats.rx_dropped++;
    VAR_13 = VAR_12;
    goto next;
   }

   if (FUNC_7(VAR_11->flags & VAR_8))
    FUNC_5(VAR_12,
     VAR_20 & VAR_5, VAR_17);

   FUNC_8(VAR_12);

   VAR_11->rx_skbs[VAR_15] = ((void*)0);


   FUNC_10(VAR_13, (1664 + VAR_10));
   VAR_18 = (struct ioc3_erxbuf *) VAR_13->data;
   FUNC_11(VAR_13, VAR_10);

   VAR_11->stats.rx_packets++;
   VAR_11->stats.rx_bytes += VAR_17;
  } else {



    VAR_13 = VAR_12;
    VAR_11->stats.rx_errors++;
  }
  if (VAR_21 & VAR_2)
   VAR_11->stats.rx_crc_errors++;
  if (VAR_21 & VAR_3)
   VAR_11->stats.rx_frame_errors++;
next:
  VAR_11->rx_skbs[VAR_16] = VAR_13;
  VAR_19[VAR_16] = FUNC_1(FUNC_4(VAR_18, 1));
  VAR_18->w0 = 0;
  VAR_16 = (VAR_16 + 1) & 511;


  VAR_15 = (VAR_15 + 1) & 511;
  VAR_12 = VAR_11->rx_skbs[VAR_15];
  VAR_18 = (struct ioc3_erxbuf *) (VAR_12->data - VAR_10);
  VAR_20 = FUNC_0(VAR_18->w0);
 }
 FUNC_6((VAR_16 << 3) | VAR_0);
 VAR_11->rx_pi = VAR_16;
 VAR_11->rx_ci = VAR_15;
}
