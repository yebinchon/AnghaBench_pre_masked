
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int romsize; scalar_t__ rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int,scalar_t__,int ) ;
 int FUNC_2 (int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void FUNC_3(u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8, VAR_9;

 if ((VAR_6 & 0xfffff0) != 0xa130f0) {
  FUNC_0(VAR_6, VAR_7);
  return;
 }

 VAR_6 &= 0x0e;
 if (VAR_6 == 0)
  return;

 VAR_5[VAR_6 >> 1] = VAR_7;
 VAR_9 = VAR_7 << 19;
 VAR_8 = VAR_6 << 18;
 if (VAR_9 + 0x80000 > VAR_2.romsize) {
  FUNC_2(VAR_0|VAR_1, "ssf2: missing bank @ %06x", VAR_9);
  return;
 }

 FUNC_1(VAR_4, VAR_8, VAR_8 + 0x80000 - 1, VAR_2.rom + VAR_9, 0);
 FUNC_1(VAR_3, VAR_8, VAR_8 + 0x80000 - 1, VAR_2.rom + VAR_9, 0);
}
