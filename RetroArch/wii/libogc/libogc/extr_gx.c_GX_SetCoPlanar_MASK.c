
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int genMode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1)
{
 VAR_0->genMode = (VAR_0->genMode&~0x80000)|(FUNC_1(VAR_1,19,1));
 FUNC_0(0xFE080000);
 FUNC_0(VAR_0->genMode);
}
