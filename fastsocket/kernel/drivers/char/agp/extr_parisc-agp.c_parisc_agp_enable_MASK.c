
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct agp_bridge_data {int dummy; } ;
struct _parisc_agp_info {scalar_t__ lba_cap_offset; scalar_t__ lba_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct agp_bridge_data*,int,int) ;
 int FUNC_1 (int,int) ;
 struct _parisc_agp_info VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct agp_bridge_data *VAR_4, u32 VAR_5)
{
 struct _parisc_agp_info *VAR_6 = &VAR_3;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_6->lba_regs + VAR_6->lba_cap_offset + VAR_2);

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_7);
 VAR_7 |= 0x00000100;

 FUNC_3(VAR_7, VAR_6->lba_regs + VAR_6->lba_cap_offset + VAR_1);

 FUNC_1(VAR_7, (VAR_5 & VAR_0) != 0);
}
