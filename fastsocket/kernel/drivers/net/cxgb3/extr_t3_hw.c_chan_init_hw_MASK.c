
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,int ,int ,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_17, unsigned int VAR_18)
{
 int VAR_19;

 if (VAR_18 != 3) {
  FUNC_3(VAR_17, VAR_5, VAR_12, 0);
  FUNC_3(VAR_17, VAR_6, VAR_8, 0);
  FUNC_4(VAR_17, VAR_0, VAR_13 | VAR_9 |
        (VAR_18 == 1 ? VAR_14 | VAR_10 :
           VAR_15 | VAR_11));
  FUNC_4(VAR_17, VAR_1,
        VAR_18 == 1 ? 0xffffffff : 0);
 } else {
  FUNC_3(VAR_17, VAR_5, 0, VAR_12);
  FUNC_3(VAR_17, VAR_6, 0, VAR_8);
  FUNC_4(VAR_17, VAR_7,
        FUNC_1(16) | FUNC_0(16));
  FUNC_4(VAR_17, VAR_0, VAR_14 | VAR_15 |
        VAR_13 | VAR_10 | VAR_11 |
        VAR_9);
  FUNC_4(VAR_17, VAR_1, 0x80008000);
  FUNC_3(VAR_17, VAR_2, 0, VAR_16);
  FUNC_4(VAR_17, VAR_3,
        FUNC_2(0xaa));
  for (VAR_19 = 0; VAR_19 < 16; VAR_19++)
   FUNC_4(VAR_17, VAR_4,
         (VAR_19 << 16) | 0x1010);
 }
}
