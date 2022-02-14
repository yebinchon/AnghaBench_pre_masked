
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rm; } ;






 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static unsigned FUNC_1(int VAR_1, unsigned VAR_2)
{


 if (VAR_2 & (FUNC_0(3) - 1)) {
  switch (VAR_0.rm) {
  case 128:
   break;
  case 130:
   VAR_2 += 0x3 + ((VAR_2 >> 3) & 1);

   break;
  case 129:
   if (!VAR_1)
    VAR_2 += 0x8;
   break;
  case 131:
   if (VAR_1)
    VAR_2 += 0x8;
   break;
  }
 }
 return VAR_2;
}
