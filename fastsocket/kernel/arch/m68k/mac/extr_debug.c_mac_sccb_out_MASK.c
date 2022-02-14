
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cha_b_ctrl; char cha_b_data; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(char VAR_2)
{
 int VAR_3;

 do {
  for (VAR_3 = VAR_1; VAR_3 > 0; --VAR_3)
   FUNC_0();
 } while (!(VAR_0.cha_b_ctrl & 0x04));
 for (VAR_3 = VAR_1; VAR_3 > 0; --VAR_3)
  FUNC_0();
 VAR_0.cha_b_data = VAR_2;
}
