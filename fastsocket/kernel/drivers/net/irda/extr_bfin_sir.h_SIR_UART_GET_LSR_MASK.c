
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfin_sir_port {unsigned int lsr; scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct bfin_sir_port *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_5->membase + VAR_3);
 VAR_5->lsr |= (VAR_6 & (VAR_0|VAR_1|VAR_4|VAR_2));
 return VAR_6 | VAR_5->lsr;
}
