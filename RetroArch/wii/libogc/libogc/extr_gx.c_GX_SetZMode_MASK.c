
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int peZMode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u8 VAR_3)
{
 VAR_0->peZMode = (VAR_0->peZMode&~0x1)|(VAR_1&1);
 VAR_0->peZMode = (VAR_0->peZMode&~0xe)|(FUNC_1(VAR_2,1,3));
 VAR_0->peZMode = (VAR_0->peZMode&~0x10)|(FUNC_1(VAR_3,4,1));
 FUNC_0(VAR_0->peZMode);
}
