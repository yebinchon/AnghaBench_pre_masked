
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2_napi {int* hw_tx_cons_ptr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline u16
FUNC_2(struct bnx2_napi *VAR_1)
{
 u16 VAR_2;


 FUNC_0();
 VAR_2 = *VAR_1->hw_tx_cons_ptr;
 FUNC_0();
 if (FUNC_1((VAR_2 & VAR_0) == VAR_0))
  VAR_2++;
 return VAR_2;
}
