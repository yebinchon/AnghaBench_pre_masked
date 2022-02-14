
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int bitstream; int bitbuf; int numbits; int rx_state; int in_hdlc_rx; int buffer; int bp; scalar_t__ len; int hbuf; } ;
struct hdlcdrv_state {scalar_t__ magic; TYPE_1__ hdlcrx; int bitbuf_hdlc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hdlcdrv_state*,int,int) ;
 int FUNC_2 (struct net_device*,struct hdlcdrv_state*) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct net_device *VAR_1, struct hdlcdrv_state *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (!VAR_2 || VAR_2->magic != VAR_0)
  return;
 if (FUNC_6(0, &VAR_2->hdlcrx.in_hdlc_rx))
  return;

 while (!FUNC_4(&VAR_2->hdlcrx.hbuf)) {
  VAR_10 = FUNC_5(&VAR_2->hdlcrx.hbuf);




         VAR_2->hdlcrx.bitstream >>= 16;
  VAR_2->hdlcrx.bitstream |= VAR_10 << 16;
  VAR_2->hdlcrx.bitbuf >>= 16;
  VAR_2->hdlcrx.bitbuf |= VAR_10 << 16;
  VAR_2->hdlcrx.numbits += 16;
  for(VAR_3 = 15, VAR_4 = 0x1fc00, VAR_5 = 0x1fe00, VAR_6 = 0x0fc00,
      VAR_7 = 0x1f800, VAR_8 = 0xf800, VAR_9 = 0xffff;
      VAR_3 >= 0;
      VAR_3--, VAR_4 <<= 1, VAR_5 <<= 1, VAR_6 <<= 1, VAR_7 <<= 1,
      VAR_8 <<= 1, VAR_9 = (VAR_9 << 1) | 1) {
   if ((VAR_2->hdlcrx.bitstream & VAR_4) == VAR_4)
    VAR_2->hdlcrx.rx_state = 0;
   else if ((VAR_2->hdlcrx.bitstream & VAR_5) == VAR_6) {

    if (VAR_2->hdlcrx.rx_state) {
     FUNC_1(VAR_2, VAR_2->hdlcrx.bitbuf
         << (8+VAR_3),
         VAR_2->hdlcrx.numbits
         -8-VAR_3);
     FUNC_2(VAR_1, VAR_2);
    }
    VAR_2->hdlcrx.len = 0;
    VAR_2->hdlcrx.bp = VAR_2->hdlcrx.buffer;
    VAR_2->hdlcrx.rx_state = 1;
    VAR_2->hdlcrx.numbits = VAR_3;
   } else if ((VAR_2->hdlcrx.bitstream & VAR_7) == VAR_8) {

    VAR_2->hdlcrx.numbits--;
    VAR_2->hdlcrx.bitbuf = (VAR_2->hdlcrx.bitbuf & (~VAR_9)) |
     ((VAR_2->hdlcrx.bitbuf & VAR_9) << 1);
   }
  }
  VAR_2->hdlcrx.numbits -= FUNC_1(VAR_2, VAR_2->hdlcrx.bitbuf,
             VAR_2->hdlcrx.numbits);
 }
 FUNC_0(0, &VAR_2->hdlcrx.in_hdlc_rx);
}
