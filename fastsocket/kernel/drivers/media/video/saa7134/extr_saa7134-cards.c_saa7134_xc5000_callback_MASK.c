
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct saa7134_dev *VAR_9,
       int VAR_10, int VAR_11)
{
 switch (VAR_9->board) {
 case 128:
 case 129:
 case 130:
  if (VAR_10 == VAR_8) {

   FUNC_2(VAR_7, 0x00);
   FUNC_0(10);
   FUNC_2(VAR_7, 0x01);
   FUNC_0(10);
  }
  break;
 default:
  FUNC_1(VAR_5 >> 2, 0x06e20000, 0x06e20000);
  FUNC_1(VAR_6 >> 2, 0x06a20000, 0x06a20000);
  FUNC_1(VAR_0 >> 2, 0x02, 0x02);
  FUNC_1(VAR_1 >> 2, 0x81, 0x81);
  FUNC_1(VAR_2 >> 2, 0x03187de7, 0x03187de7);
  FUNC_1(VAR_4 >> 2, 0x03, 0x03);
  FUNC_1(VAR_3 >> 2,
      0x0001e000, 0x0001e000);
  break;
 }
 return 0;
}
