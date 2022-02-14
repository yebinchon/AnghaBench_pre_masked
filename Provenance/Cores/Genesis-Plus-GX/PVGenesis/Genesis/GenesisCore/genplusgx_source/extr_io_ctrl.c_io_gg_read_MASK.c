
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* pad; } ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned int* VAR_2 ;

unsigned int FUNC_0(unsigned int VAR_3)
{
  switch (VAR_3)
  {
    case 0:
      return (VAR_2[0] & ~(VAR_1.pad[0] & VAR_0));

    case 1:
      return ((VAR_2[1] & ~(VAR_2[2] & 0x7F)) | (VAR_2[2] & 0x7F));

    case 2:
      return VAR_2[2];

    case 3:
      return VAR_2[3];

    case 4:
      return VAR_2[4];

    case 5:
      return VAR_2[5];

    default:
      return 0xFF;
  }
}
