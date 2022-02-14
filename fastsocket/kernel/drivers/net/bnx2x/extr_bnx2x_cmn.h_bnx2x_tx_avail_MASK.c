
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnx2x_fp_txdata {scalar_t__ tx_bd_prod; scalar_t__ tx_bd_cons; scalar_t__ tx_ring_size; } ;
struct bnx2x {int dummy; } ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline u16 FUNC_2(struct bnx2x *VAR_1,
     struct bnx2x_fp_txdata *VAR_2)
{
 s16 VAR_3;
 u16 VAR_4;
 u16 VAR_5;

 VAR_4 = VAR_2->tx_bd_prod;
 VAR_5 = VAR_2->tx_bd_cons;

 VAR_3 = FUNC_0(VAR_4, VAR_5);







 return (s16)(VAR_2->tx_ring_size) - VAR_3;
}
