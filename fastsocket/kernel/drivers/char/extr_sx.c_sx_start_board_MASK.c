
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx_board {int irq; scalar_t__ eisa_base; } ;


 scalar_t__ FUNC_0 (struct sx_board*) ;
 scalar_t__ FUNC_1 (struct sx_board*) ;
 scalar_t__ FUNC_2 (struct sx_board*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct sx_board*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sx_board *VAR_10)
{
 if (FUNC_2(VAR_10)) {
  FUNC_4(VAR_10, VAR_8, VAR_9);
 } else if (FUNC_0(VAR_10)) {
  FUNC_4(VAR_10, VAR_2, VAR_3);
  FUNC_3((VAR_10->irq << 4) | 4, VAR_10->eisa_base + 0xc02);
 } else if (FUNC_1(VAR_10)) {
  FUNC_4(VAR_10, VAR_1, 0);
  FUNC_4(VAR_10, VAR_0, 0);
 } else {


  FUNC_4(VAR_10, VAR_6, VAR_7);
  FUNC_4(VAR_10, VAR_4, VAR_5);
 }
 return 1;
}
