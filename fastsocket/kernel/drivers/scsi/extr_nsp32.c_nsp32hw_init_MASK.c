
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int BaseAddress; int trans_method; int clock; } ;
typedef TYPE_1__ nsp32_hw_data ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned short VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 unsigned long VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned long VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 unsigned char VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned char FUNC_1 (unsigned int,int ) ;
 unsigned long FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ,int) ;
 int FUNC_4 (unsigned int,int ,unsigned long) ;
 int FUNC_5 (int ,char*) ;
 unsigned short FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (unsigned int,int ,int ) ;
 int FUNC_8 (unsigned int,int ,int ) ;
 int FUNC_9 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_10(nsp32_hw_data *VAR_49)
{
 unsigned int VAR_50 = VAR_49->BaseAddress;
 unsigned short VAR_51;
 unsigned long VAR_52;
 unsigned char VAR_53;

 VAR_52 = FUNC_2(VAR_50, VAR_7);
 if ((VAR_52 & 0xff00) == 0) {
  VAR_52 |= (0x20 << 8);
  FUNC_4(VAR_50, VAR_7, VAR_52 & 0xffff);
 }

 FUNC_8(VAR_50, VAR_23, VAR_24);
 FUNC_8(VAR_50, VAR_47, 0);
 FUNC_9(VAR_50, VAR_4, 0);
 FUNC_8(VAR_50, VAR_38, 0);

 do {
  VAR_51 = FUNC_6(VAR_50, VAR_26);
  FUNC_0(VAR_32, "irq_stat 0x%x", VAR_51);
 } while (VAR_51 & VAR_22);





 if ((VAR_49->trans_method & VAR_35) ||
     (VAR_49->trans_method & VAR_34)) {
  FUNC_3(VAR_50, VAR_13, 0x40);
  FUNC_3(VAR_50, VAR_12, 0x40);
 } else if (VAR_49->trans_method & VAR_33) {
  FUNC_3(VAR_50, VAR_13, 0x10);
  FUNC_3(VAR_50, VAR_12, 0x60);
 } else {
  FUNC_0(VAR_32, "unknown transfer mode");
 }

 FUNC_0(VAR_32, "full 0x%x emp 0x%x",
    FUNC_1(VAR_50, VAR_13),
    FUNC_1(VAR_50, VAR_12));

 FUNC_3(VAR_50, VAR_8, VAR_49->clock);
 FUNC_3(VAR_50, VAR_5, VAR_30 | VAR_42);
 FUNC_7(VAR_50, VAR_36, 0);
 FUNC_4(VAR_50, VAR_31,
      (VAR_37 |
       VAR_9 |
       VAR_29 |
       VAR_2 |
       VAR_1 |
       VAR_3));

 FUNC_3(VAR_50, VAR_44, 0);
 VAR_53 = FUNC_1(VAR_50, VAR_44);
 if (!(VAR_53 & VAR_41)) {
  FUNC_5(VAR_27, "term power on");
  FUNC_3(VAR_50, VAR_44, VAR_6);
 }

 FUNC_8(VAR_50, VAR_45, VAR_46);
 FUNC_8(VAR_50, VAR_45, VAR_46);

 FUNC_7(VAR_50, VAR_43, 0);
 FUNC_7(VAR_50, VAR_0, 0);
 FUNC_8(VAR_50, VAR_40, VAR_39);





 FUNC_4(VAR_50, VAR_25, VAR_21 |
                        VAR_19 |
                        VAR_15 |
                        VAR_18 |
                        VAR_17 |
                        VAR_14 |

                        VAR_20 |
                        VAR_16 );
 FUNC_8(VAR_50, VAR_23, 0);


 FUNC_3(VAR_50, VAR_11, VAR_28);
 FUNC_3(VAR_50, VAR_10, VAR_28);

 return VAR_48;
}
