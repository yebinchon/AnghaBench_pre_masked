
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* input; } ;
struct cx88_core {int boardnr; TYPE_2__ board; } ;
struct TYPE_3__ {int gpio0; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct cx88_core *VAR_3)
{
 switch (VAR_3->boardnr) {
 case 135:







  FUNC_2(VAR_0, 0x0000ef88);
  FUNC_5(1000);
  FUNC_0(VAR_0, 0x00000088);
  FUNC_5(50);
  FUNC_1(VAR_0, 0x00000088);
  FUNC_5(1000);
  break;

 case 131:
 case 132:
  FUNC_2(VAR_2, 0xcf7);
  FUNC_3(50);
  FUNC_2(VAR_2, 0xef5);
  FUNC_3(50);
  FUNC_2(VAR_2, 0xcf7);
  FUNC_4(10);
  break;

 case 136:

  FUNC_1(VAR_0, 0x00001010);
  break;

 case 134:
 case 133:

  FUNC_2(VAR_0, VAR_3->board.input[0].gpio0);
  FUNC_5(1000);
  FUNC_0(VAR_0, 0x00000080);
  FUNC_5(50);
  FUNC_1(VAR_0, 0x00000080);
  FUNC_5(1000);
  break;

 case 128:
 case 129:

  FUNC_1(VAR_1, 0x1010);
  FUNC_3(50);
  FUNC_0(VAR_1, 0x10);
  FUNC_3(50);
  FUNC_1(VAR_1, 0x10);
  FUNC_3(50);
  break;

 case 130:
  FUNC_2(VAR_0, 0x00003230);
  FUNC_2(VAR_0, 0x00003210);
  FUNC_4(1);
  FUNC_2(VAR_0, 0x00001230);
  break;
 }
}
