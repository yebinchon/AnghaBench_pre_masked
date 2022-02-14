
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct macio_chip*,int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct macio_chip *VAR_5, int VAR_6)
{
 if (VAR_6) {
  FUNC_1(0x38, VAR_3[2]);
  (void)FUNC_0(0x38);
  FUNC_3(1);
  FUNC_1(0x3c, VAR_3[3]);
  (void)FUNC_0(0x38);
  FUNC_3(10);
  FUNC_2(VAR_5, VAR_1);
 } else {
  FUNC_1(0x38, VAR_3[0] | VAR_0);
  (void)FUNC_0(0x38);
  FUNC_3(1);
  FUNC_1(0x3c, VAR_3[1]);
  (void)FUNC_0(0x38);
  FUNC_3(1);
  FUNC_1(0x34, VAR_4);
  (void)FUNC_0(0x38);
  FUNC_3(10);
  FUNC_2(VAR_5, VAR_2);
 }
}
