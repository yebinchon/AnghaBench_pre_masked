
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct net_device {int flags; } ;
struct gfar_private {int device_flags; int bflock; int rx_csum_enable; int rx_ring_size; int txlock; int rxlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3, uint32_t VAR_4)
{
 struct gfar_private *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (!(VAR_5->device_flags & VAR_1))
  return -VAR_0;

 if (VAR_3->flags & VAR_2) {


  FUNC_5(&VAR_5->txlock, VAR_6);
  FUNC_4(&VAR_5->rxlock);

  FUNC_1(VAR_3);

  FUNC_6(&VAR_5->rxlock);
  FUNC_7(&VAR_5->txlock, VAR_6);

  FUNC_0(VAR_3, VAR_5->rx_ring_size);


  FUNC_9(VAR_3);
 }

 FUNC_5(&VAR_5->bflock, VAR_6);
 VAR_5->rx_csum_enable = VAR_4;
 FUNC_7(&VAR_5->bflock, VAR_6);

 if (VAR_3->flags & VAR_2) {
  VAR_7 = FUNC_8(VAR_3);
  FUNC_3(VAR_3);
 }
 return VAR_7;
}
