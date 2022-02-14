
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct il_tx_queue {int swq_id; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(struct il_tx_queue *VAR_0, u8 VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_1 > 3);
 FUNC_0(VAR_2 > 31);

 VAR_0->swq_id = (VAR_2 << 2) | VAR_1;
}
