
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enabled; } ;


 TYPE_1__ VAR_0 ;
 unsigned char FUNC_0 () ;
 unsigned char** VAR_1 ;

__attribute__((used)) static unsigned char FUNC_1(unsigned int VAR_2)
{
  if ((VAR_2 == 0x8000) && VAR_0.enabled)
  {
    return FUNC_0();
  }

  return VAR_1[VAR_2 >> 10][VAR_2 & 0x03FF];
}
