
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* zram; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned char) ;
 int FUNC_1 (unsigned int,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2, unsigned char VAR_3)
{
  FUNC_0(VAR_0, "z80 write [%04x] %02x", VAR_2, VAR_3);
  if (VAR_2 >= 0xc000)
    VAR_1.zram[VAR_2 & 0x1fff] = VAR_3;
  if (VAR_2 >= 0xfff8)
    FUNC_1(VAR_2, VAR_3);
}
