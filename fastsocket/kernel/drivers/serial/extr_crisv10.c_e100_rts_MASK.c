
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int line; int rx_ctrl; int * ioport; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static inline void
FUNC_3(struct e100_serial *VAR_2, int VAR_3)
{

 unsigned long VAR_4;
 FUNC_1(VAR_4);
 VAR_2->rx_ctrl &= ~VAR_0;
 VAR_2->rx_ctrl |= (VAR_3 ? 0 : VAR_0);
 VAR_2->ioport[VAR_1] = VAR_2->rx_ctrl;
 FUNC_0(VAR_4);




}
