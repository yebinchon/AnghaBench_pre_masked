
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnx2x_fp_txdata {scalar_t__ tx_pkt_cons; int * tx_cons_sb; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct bnx2x_fp_txdata *VAR_0)
{
 u16 VAR_1;


 FUNC_0();
 VAR_1 = FUNC_1(*VAR_0->tx_cons_sb);
 return VAR_1 != VAR_0->tx_pkt_cons;
}
