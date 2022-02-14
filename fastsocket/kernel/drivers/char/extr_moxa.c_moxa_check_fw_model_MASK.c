
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct moxa_board_conf {int boardType; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct moxa_board_conf *VAR_1, u8 VAR_2)
{
 switch (VAR_1->boardType) {
 case 130:
 case 129:
  if (VAR_2 != 1)
   goto err;
  break;
 case 128:
  if (VAR_2 != 3)
   goto err;
  break;
 default:
  if (VAR_2 != 2)
   goto err;
  break;
 }
 return 0;
err:
 return -VAR_0;
}
