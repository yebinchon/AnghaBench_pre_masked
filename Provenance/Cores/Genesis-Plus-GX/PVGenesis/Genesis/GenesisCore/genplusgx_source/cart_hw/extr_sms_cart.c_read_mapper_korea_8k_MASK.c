
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fcr; } ;


 TYPE_1__ VAR_0 ;
 unsigned char** VAR_1 ;

__attribute__((used)) static unsigned char FUNC_0(unsigned int VAR_2)
{
  unsigned char VAR_3 = VAR_1[VAR_2 >> 10][VAR_2 & 0x03FF];


  unsigned char VAR_4 = VAR_2 >> 14;


  if (((VAR_4 == 1) && (VAR_0.fcr[2] & 0x80)) || ((VAR_4 == 2) && (VAR_0.fcr[0] & 0x80)))
  {

    VAR_3 = (((VAR_3 >> 7) & 0x01) | ((VAR_3 >> 5) & 0x02) |
            ((VAR_3 >> 3) & 0x04) | ((VAR_3 >> 1) & 0x08) |
            ((VAR_3 << 1) & 0x10) | ((VAR_3 << 3) & 0x20) |
            ((VAR_3 << 5) & 0x40) | ((VAR_3 << 7) & 0x80));
  }

  return VAR_3;
}
