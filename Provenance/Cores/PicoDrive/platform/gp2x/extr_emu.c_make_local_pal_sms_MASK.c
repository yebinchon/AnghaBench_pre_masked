
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short* cram; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 unsigned short *VAR_3 = VAR_0.cram;
 unsigned int *VAR_4 = (void *)VAR_1;
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0x40; VAR_5 > 0; VAR_5--) {
  VAR_6 = *VAR_3++;
  VAR_6 = ((VAR_6 & 0x0003) << 22) | ((VAR_6 & 0x000c) << 12) | ((VAR_6 & 0x0030) << 2);
  VAR_6 |= VAR_6 >> 2;
  VAR_6 |= VAR_6 >> 4;
  *VAR_4++ = VAR_6;
 }

 return 0x40;
}
