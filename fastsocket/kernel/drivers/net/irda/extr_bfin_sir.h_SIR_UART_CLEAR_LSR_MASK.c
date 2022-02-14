
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfin_sir_port {scalar_t__ membase; scalar_t__ lsr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct bfin_sir_port *VAR_1)
{
 VAR_1->lsr = 0;
 FUNC_0(VAR_1->membase + VAR_0);
}
