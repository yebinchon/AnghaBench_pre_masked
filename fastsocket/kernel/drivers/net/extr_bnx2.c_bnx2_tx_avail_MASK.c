
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2_tx_ring_info {int tx_prod; int tx_cons; } ;
struct bnx2 {int tx_ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline u32 FUNC_2(struct bnx2 *VAR_2, struct bnx2_tx_ring_info *VAR_3)
{
 u32 VAR_4;


 FUNC_0();




 VAR_4 = VAR_3->tx_prod - VAR_3->tx_cons;
 if (FUNC_1(VAR_4 >= VAR_1)) {
  VAR_4 &= 0xffff;
  if (VAR_4 == VAR_1)
   VAR_4 = VAR_0;
 }
 return (VAR_2->tx_ring_size - VAR_4);
}
