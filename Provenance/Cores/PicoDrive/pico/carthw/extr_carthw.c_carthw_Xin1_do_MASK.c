
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int romsize; scalar_t__ rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,scalar_t__,int ) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(u32 VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;

 VAR_4 = VAR_7;
 VAR_7 &= VAR_8;
 VAR_7 <<= VAR_9;
 VAR_10 = VAR_3.romsize - VAR_7;
 if (VAR_10 <= 0) {
  FUNC_1(VAR_0|VAR_1, "X-in-1: missing bank @ %06x", VAR_7);
  return;
 }

 VAR_10 = (VAR_10 + VAR_2) & ~VAR_2;
 FUNC_0(VAR_6, 0x000000, VAR_10 - 1, VAR_3.rom + VAR_7, 0);
 FUNC_0(VAR_5, 0x000000, VAR_10 - 1, VAR_3.rom + VAR_7, 0);
}
