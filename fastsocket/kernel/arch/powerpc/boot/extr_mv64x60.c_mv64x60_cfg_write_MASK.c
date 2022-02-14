
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; int data; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int*,int) ;

void FUNC_1(u8 *VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
  u32 VAR_6)
{
 FUNC_0((u32 *)(VAR_1 + VAR_0[VAR_2].addr),
   (1 << 31) | (VAR_3 << 16) | (VAR_4 << 8) | VAR_5);
 FUNC_0((u32 *)(VAR_1 + VAR_0[VAR_2].data), VAR_6);
}
