
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__* VAR_14 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int const) ;
 int FUNC_6 (int const,int const) ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_7 (int const,int,int const) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_35 ;
 void* VAR_36 ;
 int FUNC_10 (scalar_t__,int ,int const) ;
 int VAR_37 ;

void FUNC_11(void)
{
 int const VAR_38 = VAR_5 == VAR_3 ? 0x2800
                     : VAR_5 == 128 ? 0x800
                     : 0x4000;
 int const VAR_39 = 0x10000 - VAR_38;
 VAR_2 = ((void*)0);
 VAR_36 = VAR_9;
 VAR_17 = VAR_9;
 if (VAR_5 == VAR_4) {
  VAR_13[3] = 0;
  if (VAR_10 & 4)
   VAR_14[3] = 0;
 }
 FUNC_10(VAR_18 + VAR_39, VAR_20, VAR_38);
 switch (VAR_5) {
 case 128:
  FUNC_7(0x0000, 0x00, 0xf800);
  FUNC_5(0x0000, 0x3fff);
  FUNC_6(0x4000, 0xffff);

  FUNC_4(0xc000, 0xcfff);
  FUNC_4(0xd400, 0xd4ff);
  FUNC_4(0xe800, 0xefff);
  break;
 default:
  {
   int const VAR_40 = VAR_21 > 64 ? 64 * 1024 : VAR_21 * 1024;
   int const VAR_41 = (VAR_39 < 0xd000 ? VAR_39 : 0xd000);
   int const VAR_42 = VAR_40 > VAR_41 ? VAR_41 : VAR_40;
   FUNC_3();
   FUNC_7(0x0000, 0x00, VAR_42);
   FUNC_5(0x0000, VAR_42 - 1);
   if (VAR_42 < VAR_41) {
    FUNC_7(VAR_42, 0xff, VAR_41 - VAR_42);
    FUNC_6(VAR_42, VAR_41 - 1);
   }
   if (VAR_41 < 0xd000)
    FUNC_6(VAR_41, 0xcfff);
   FUNC_6(0xd800, 0xffff);

   FUNC_4(0xd000, 0xd7ff);
   if (VAR_5 == VAR_3) {
    if (VAR_19 > 0) FUNC_4(0xff00, 0xffff);


    if (VAR_16 > 0) {
     FUNC_4(0xcf00, 0xcfff);
     if (VAR_15) FUNC_4(0x0f00, 0x0fff);

    }
   }
  }
  break;
 }
 FUNC_1();
 FUNC_8();
 FUNC_9();
 VAR_35 = 0;
 VAR_37 = 0x3f;
 FUNC_0();
 FUNC_2();
}
