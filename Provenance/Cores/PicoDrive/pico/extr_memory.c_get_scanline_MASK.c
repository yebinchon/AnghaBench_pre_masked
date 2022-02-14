
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scanline; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{
  if (VAR_3) {
    int VAR_4 = FUNC_0();
    while (VAR_4 - VAR_2 >= 228)
      VAR_1++, VAR_2 += 228;
    return VAR_1;
  }

  return VAR_0.m.scanline;
}
