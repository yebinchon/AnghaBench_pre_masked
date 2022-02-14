
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int boardnr; } ;



 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cx88_core *VAR_2,
          int VAR_3, int VAR_4)
{
 switch (VAR_3) {
 case 128:
  switch (VAR_2->boardnr) {
  case 129:


   FUNC_1(VAR_1, 0x00001000);
   FUNC_0(VAR_1, 0x00000010);
   FUNC_4(100);
   FUNC_1(VAR_1, 0x00000010);
   FUNC_4(100);
   break;
  default:
   FUNC_2(VAR_1, 0x101000);
   FUNC_3(5);
   FUNC_1(VAR_1, 0x101010);
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
