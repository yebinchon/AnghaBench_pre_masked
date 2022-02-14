
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bba_priv {scalar_t__ state; int tq_xmit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __inline__ void FUNC_4(struct bba_priv *VAR_2)
{
 u32 VAR_3;

 FUNC_2(VAR_3);
 while(VAR_2->state==VAR_0) {
  FUNC_0(VAR_1,("__bba_tx_stop(pending tx)\n"));
  FUNC_1(VAR_2->tq_xmit);
 }
 VAR_2->state = VAR_0;
 FUNC_3(VAR_3);
}
