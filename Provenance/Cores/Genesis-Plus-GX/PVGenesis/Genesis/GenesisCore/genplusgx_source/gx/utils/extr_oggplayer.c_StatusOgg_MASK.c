
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; scalar_t__ eof; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_0()
{
  if (VAR_0 == 0)
    return -1;
  else if (VAR_1.eof)
    return 255;
  else if (VAR_1.flag & 128)
    return 2;
  else
    return 1;
}
