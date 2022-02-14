
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lpphy_stx_table_entry {int rf_shift; int phy_shift; int mask; scalar_t__ phy_offset; int rf_addr; } ;
struct b43_wldev {int dummy; } ;


 unsigned int FUNC_0 (struct lpphy_stx_table_entry*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 struct lpphy_stx_table_entry* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1)
{
 const struct lpphy_stx_table_entry *VAR_2;
 unsigned int VAR_3;
 u16 VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  VAR_4 = FUNC_3(VAR_1, VAR_2->rf_addr);
  VAR_4 >>= VAR_2->rf_shift;
  VAR_4 <<= VAR_2->phy_shift;
  FUNC_2(VAR_1, FUNC_1(0xF2 + VAR_2->phy_offset),
    ~(VAR_2->mask << VAR_2->phy_shift), VAR_4);
 }
}
