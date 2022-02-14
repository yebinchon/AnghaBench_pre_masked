
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx88_core {int input; } ;
struct TYPE_2__ {int type; } ;




 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;

 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cx88_core *VAR_2,
      int VAR_3, int VAR_4)
{
 switch (VAR_3) {
 case 128:
  switch (FUNC_0(VAR_2->input).type) {
  case 130:
   break;
  case 129:
   FUNC_1(VAR_1, 0x030302);
   FUNC_2(50);
   break;
  default:
   FUNC_1(VAR_1, 0x030301);
   FUNC_2(50);
  }
  FUNC_1(VAR_1, 0x101010);
  FUNC_2(50);
  FUNC_1(VAR_1, 0x101000);
  FUNC_2(50);
  FUNC_1(VAR_1, 0x101010);
  FUNC_2(50);
  return 0;
 }
 return -VAR_0;
}
