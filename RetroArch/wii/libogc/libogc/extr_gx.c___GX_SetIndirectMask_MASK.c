
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tevIndMask; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(u32 VAR_1)
{
 VAR_0->tevIndMask = ((VAR_0->tevIndMask&~0xff)|(VAR_1&0xff));
 FUNC_0(VAR_0->tevIndMask);
}
