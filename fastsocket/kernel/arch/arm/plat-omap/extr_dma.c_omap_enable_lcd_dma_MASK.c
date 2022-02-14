
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int active; int ext_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(void)
{
 u16 VAR_4;






 if (VAR_2 || !VAR_3.ext_ctrl)
  return;

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 |= 1 << 8;
 FUNC_1(VAR_4, VAR_1);

 VAR_3.active = 1;

 VAR_4 = FUNC_0(VAR_0);
 VAR_4 |= 1 << 7;
 FUNC_1(VAR_4, VAR_0);
}
