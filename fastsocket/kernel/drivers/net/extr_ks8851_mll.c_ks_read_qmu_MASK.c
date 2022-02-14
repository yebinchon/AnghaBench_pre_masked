
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ks_net {int extra_byte; int rc_rxqcr; int hw_addr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ks_net*,int *,int) ;
 int FUNC_3 (struct ks_net*,int ,int ) ;
 int FUNC_4 (struct ks_net*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(struct ks_net *VAR_4, u16 *VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_4->extra_byte & 0x1 ;
 u32 VAR_8 = VAR_4->extra_byte - VAR_7;


 FUNC_3(VAR_4, VAR_0, VAR_2);
 FUNC_4(VAR_4, VAR_1, (VAR_4->rc_rxqcr | VAR_3) & 0xff);
 if (FUNC_5(VAR_7))
  FUNC_1(VAR_4->hw_addr);
 FUNC_2(VAR_4, VAR_5, VAR_8 + 2 + 2);


 FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_6, 4));


 FUNC_4(VAR_4, VAR_1, VAR_4->rc_rxqcr);
}
