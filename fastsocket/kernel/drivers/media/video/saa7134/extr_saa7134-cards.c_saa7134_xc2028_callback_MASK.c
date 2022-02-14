
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int board; } ;


 int VAR_0 ;




 int VAR_1 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct saa7134_dev*,int,int) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(struct saa7134_dev *VAR_2,
       int VAR_3, int VAR_4)
{
 switch (VAR_3) {
 case 128:
  FUNC_2(VAR_1 >> 2, 0x00008000, 0x00000000);
  FUNC_2(VAR_1 >> 2, 0x00008000, 0x00008000);
  switch (VAR_2->board) {
  case 130:
  case 129:
   FUNC_1(VAR_2, 23, 0);
   FUNC_0(10);
   FUNC_1(VAR_2, 23, 1);
  break;
  case 132:
   FUNC_1(VAR_2, 21, 0);
   FUNC_0(10);
   FUNC_1(VAR_2, 21, 1);
  break;
  case 131:
   FUNC_1(VAR_2, 18, 0);
   FUNC_0(10);
   FUNC_1(VAR_2, 18, 1);
  break;
  }
 return 0;
 }
 return -VAR_0;
}
