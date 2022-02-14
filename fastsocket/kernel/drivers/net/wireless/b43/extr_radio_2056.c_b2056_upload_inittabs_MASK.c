
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b2056_inittabs_pts {int rx_length; int rx; int tx_length; int tx; int syn_length; int syn; } ;


 size_t FUNC_0 (struct b2056_inittabs_pts*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 struct b2056_inittabs_pts* VAR_5 ;
 int FUNC_2 (struct b43_wldev*,int,int,int ,int ,int ) ;

void FUNC_3(struct b43_wldev *VAR_6,
      bool VAR_7, bool VAR_8)
{
 const struct b2056_inittabs_pts *VAR_9;

 if (VAR_6->phy.rev >= FUNC_0(VAR_5)) {
  FUNC_1(1);
  return;
 }
 VAR_9 = &VAR_5[VAR_6->phy.rev];

 FUNC_2(VAR_6, VAR_7, VAR_8,
    VAR_2, VAR_9->syn, VAR_9->syn_length);
 FUNC_2(VAR_6, VAR_7, VAR_8,
    VAR_3, VAR_9->tx, VAR_9->tx_length);
 FUNC_2(VAR_6, VAR_7, VAR_8,
    VAR_4, VAR_9->tx, VAR_9->tx_length);
 FUNC_2(VAR_6, VAR_7, VAR_8,
    VAR_0, VAR_9->rx, VAR_9->rx_length);
 FUNC_2(VAR_6, VAR_7, VAR_8,
    VAR_1, VAR_9->rx, VAR_9->rx_length);
}
