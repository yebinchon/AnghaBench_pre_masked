
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3_napi {int tx_prod; int tx_cons; scalar_t__ tx_pending; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline u32 FUNC_1(struct tg3_napi *VAR_1)
{

 FUNC_0();
 return VAR_1->tx_pending -
        ((VAR_1->tx_prod - VAR_1->tx_cons) & (VAR_0 - 1));
}
