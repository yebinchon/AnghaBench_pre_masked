
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int dispCopyTL; int dispCopyWH; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u16 VAR_1,u16 VAR_2,u16 VAR_3,u16 VAR_4)
{
 VAR_0->dispCopyTL = (VAR_0->dispCopyTL&~0x00ffffff)|FUNC_0(VAR_1,VAR_2);
 VAR_0->dispCopyTL = (VAR_0->dispCopyTL&~0xff000000)|(FUNC_1(0x49,24,8));
 VAR_0->dispCopyWH = (VAR_0->dispCopyWH&~0x00ffffff)|FUNC_0((VAR_3-1),(VAR_4-1));
 VAR_0->dispCopyWH = (VAR_0->dispCopyWH&~0xff000000)|(FUNC_1(0x4a,24,8));
}
