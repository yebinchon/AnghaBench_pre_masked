
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;
struct b43_txstatus {int cookie; int seq; int phy_stat; int frame_count; int rts_count; int supp_reason; int pm_indicated; int intermediate; int for_ampdu; int acked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,struct b43_txstatus*) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2)
{
 u32 VAR_3, VAR_4;
 u16 VAR_5;
 struct b43_txstatus VAR_6;

 while (1) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  if (!(VAR_3 & 0x00000001))
   break;
  VAR_4 = FUNC_1(VAR_2, VAR_1);

  VAR_6.cookie = (VAR_3 >> 16);
  VAR_6.seq = (VAR_4 & 0x0000FFFF);
  VAR_6.phy_stat = ((VAR_4 & 0x00FF0000) >> 16);
  VAR_5 = (VAR_3 & 0x0000FFFF);
  VAR_6.frame_count = ((VAR_5 & 0xF000) >> 12);
  VAR_6.rts_count = ((VAR_5 & 0x0F00) >> 8);
  VAR_6.supp_reason = ((VAR_5 & 0x001C) >> 2);
  VAR_6.pm_indicated = !!(VAR_5 & 0x0080);
  VAR_6.intermediate = !!(VAR_5 & 0x0040);
  VAR_6.for_ampdu = !!(VAR_5 & 0x0020);
  VAR_6.acked = !!(VAR_5 & 0x0002);

  FUNC_0(VAR_2, &VAR_6);
 }
}
