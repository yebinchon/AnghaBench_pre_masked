
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int dispCopyDst; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u16 VAR_1,u16 VAR_2)
{
 VAR_0->dispCopyDst = (VAR_0->dispCopyDst&~0x3ff)|(FUNC_1(VAR_1,4,10));
 VAR_0->dispCopyDst = (VAR_0->dispCopyDst&~0xff000000)|(FUNC_0(0x4d,24,8));
}
