
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__* wirelessPad_id; } ;
typedef TYPE_1__ syssramex ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (size_t) ;

void FUNC_2(u32 VAR_0,u32 VAR_1)
{
 u32 VAR_2;
 syssramex *VAR_3;

 VAR_2 = 0;
 VAR_3 = FUNC_0();
 if(VAR_3->wirelessPad_id[VAR_0]!=(u16)VAR_1) {
  VAR_3->wirelessPad_id[VAR_0] = (u16)VAR_1;
  VAR_2 = 1;
 }
 FUNC_1(VAR_2);
}
