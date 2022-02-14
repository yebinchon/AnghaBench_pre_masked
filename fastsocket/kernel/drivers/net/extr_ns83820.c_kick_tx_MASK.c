
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ns83820 {scalar_t__ base; int tx_free_idx; int tx_idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct ns83820*,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct ns83820 *VAR_2)
{
 FUNC_0("kick_tx(%p): tx_idx=%d free_idx=%d\n",
  VAR_2, VAR_2->tx_idx, VAR_2->tx_free_idx);
 FUNC_1(VAR_1, VAR_2->base + VAR_0);
}
