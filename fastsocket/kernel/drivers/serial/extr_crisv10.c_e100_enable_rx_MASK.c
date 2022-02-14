
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int* ioport; int rx_ctrl; } ;


 int FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_1(struct e100_serial *VAR_3)
{


 VAR_3->ioport[VAR_0] =
  (VAR_3->rx_ctrl |= FUNC_0(VAR_1, VAR_2));

}
