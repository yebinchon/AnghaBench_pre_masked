
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_chip {int dummy; } ;


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
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct macio_chip*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 void** VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static void FUNC_6(struct macio_chip *VAR_16, int VAR_17)
{
 if (VAR_17) {
  FUNC_5(VAR_16, VAR_12);
  VAR_14[2] = FUNC_2(0x38);
  VAR_14[3] = FUNC_2(0x3c);
 } else {
  FUNC_5(VAR_16, VAR_13);
  VAR_14[0] = FUNC_2(0x38);
  VAR_14[1] = FUNC_2(0x3c);
  VAR_15 = FUNC_2(0x34);

  FUNC_1(VAR_0, VAR_9);
  FUNC_0(VAR_0, VAR_8);


  FUNC_0(VAR_0, VAR_5);
  FUNC_0(VAR_0, VAR_4);


  FUNC_0(VAR_0, VAR_1 | VAR_2);
 }

 FUNC_4(VAR_3,
  FUNC_3(VAR_3) & ~1);
 FUNC_1(VAR_0, VAR_7);
 FUNC_0(VAR_0, VAR_10|VAR_11|VAR_6);


 (void)FUNC_2(VAR_0);
}
