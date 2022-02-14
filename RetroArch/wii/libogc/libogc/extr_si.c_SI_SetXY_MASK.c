
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int poll; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_3(u16 VAR_2,u8 VAR_3)
{
 u32 VAR_4;
 FUNC_0(VAR_4);
 VAR_1.poll = (VAR_1.poll&~0x3ffff00)|FUNC_2(VAR_2,16,10)|FUNC_2(VAR_3,8,8);
 VAR_0[12] = VAR_1.poll;
 FUNC_1(VAR_4);
}
