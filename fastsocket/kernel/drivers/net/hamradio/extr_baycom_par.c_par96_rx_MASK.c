
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct parport {TYPE_4__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int descram; int dcd_shreg; int dcd_count; } ;
struct TYPE_7__ {TYPE_2__ par96; } ;
struct baycom_state {int options; int hdrv; TYPE_3__ modem; TYPE_1__* pdev; } ;
struct TYPE_8__ {int (* read_status ) (struct parport*) ;int (* write_data ) (struct parport*,int) ;} ;
struct TYPE_5__ {struct parport* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*,int) ;
 int FUNC_4 (struct parport*,int) ;
 int FUNC_5 (struct parport*) ;

__attribute__((used)) static __inline__ void FUNC_6(struct net_device *VAR_10, struct baycom_state *VAR_11)
{
 int VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 struct parport *VAR_17 = VAR_11->pdev->port;




 for(VAR_13 = VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11->modem.par96.descram = (VAR_11->modem.par96.descram << 1);
  if (VAR_17->ops->read_status(VAR_17) & VAR_8)
   VAR_11->modem.par96.descram |= 1;
  VAR_16 = VAR_11->modem.par96.descram ^
   (VAR_11->modem.par96.descram >> 1);

  VAR_17->ops->write_data(VAR_17, VAR_9 | VAR_7);
  VAR_16 ^= ((VAR_16 >> VAR_5) ^
     (VAR_16 >> VAR_6));
  VAR_13 >>= 1;
  if (!(VAR_16 & 1))
   VAR_13 |= 0x8000;
  VAR_17->ops->write_data(VAR_17, VAR_9 | VAR_7 | VAR_2);
 }
 FUNC_0(&VAR_11->hdrv, VAR_13);



 if (VAR_11->options & VAR_0) {
  VAR_11->modem.par96.dcd_shreg = (VAR_11->modem.par96.dcd_shreg >> 16)
   | (VAR_13 << 16);

  for(VAR_14 = 0x1fe00, VAR_15 = 0xfc00, VAR_12 = 0;
      VAR_12 < VAR_3; VAR_12++, VAR_14 <<= 1, VAR_15 <<= 1)
   if ((VAR_11->modem.par96.dcd_shreg & VAR_14) == VAR_15)
    VAR_11->modem.par96.dcd_count = VAR_1+4;

  for(VAR_14 = 0x1fe00, VAR_15 = 0x1fe00, VAR_12 = 0;
      VAR_12 < VAR_3; VAR_12++, VAR_14 <<= 1, VAR_15 <<= 1)
   if (((VAR_11->modem.par96.dcd_shreg & VAR_14) == VAR_15) &&
       (VAR_11->modem.par96.dcd_count >= 0))
    VAR_11->modem.par96.dcd_count -= VAR_1-10;

  if (VAR_11->modem.par96.dcd_count >= 0)
   VAR_11->modem.par96.dcd_count -= 2;
  FUNC_1(&VAR_11->hdrv, VAR_11->modem.par96.dcd_count > 0);
 } else {
  FUNC_1(&VAR_11->hdrv, !!(VAR_17->ops->read_status(VAR_17) & VAR_4));
 }
}
