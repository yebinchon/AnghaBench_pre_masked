
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_n {int txrx_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_5)
{
 struct b43_phy_n *VAR_6 = VAR_5->phy.n;

 bool VAR_7 = 0;
 u16 VAR_8 = 0x33;

 if (VAR_6->txrx_chain == 0) {
  VAR_8 = 0x11;
  VAR_7 = 1;
 } else if (VAR_6->txrx_chain == 1) {
  VAR_8 = 0x22;
  VAR_7 = 1;
 }

 FUNC_1(VAR_5, VAR_0,
   ~(VAR_2 | VAR_1),
   VAR_8);

 if (VAR_7)
  FUNC_2(VAR_5, VAR_3,
    VAR_4);
 else
  FUNC_0(VAR_5, VAR_3,
    ~VAR_4);
}
