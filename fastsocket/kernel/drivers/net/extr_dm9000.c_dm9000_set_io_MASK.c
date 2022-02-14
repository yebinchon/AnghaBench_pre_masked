
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {int inblk; int outblk; int dumpblk; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct board_info *VAR_9, int VAR_10)
{




 switch (VAR_10) {
 case 1:
  VAR_9->dumpblk = VAR_2;
  VAR_9->outblk = VAR_8;
  VAR_9->inblk = VAR_5;
  break;


 case 3:
  FUNC_0(VAR_9->dev, ": 3 byte IO, falling back to 16bit\n");
 case 2:
  VAR_9->dumpblk = VAR_0;
  VAR_9->outblk = VAR_6;
  VAR_9->inblk = VAR_3;
  break;

 case 4:
 default:
  VAR_9->dumpblk = VAR_1;
  VAR_9->outblk = VAR_7;
  VAR_9->inblk = VAR_4;
  break;
 }
}
