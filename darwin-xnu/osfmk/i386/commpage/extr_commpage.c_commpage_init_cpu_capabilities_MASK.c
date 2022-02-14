
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int vector_unit; int cache_line_size; } ;
typedef TYPE_1__ ml_cpu_info_t ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int) ;
 scalar_t__ VAR_61 ;

__attribute__((used)) static void
FUNC_8( void )
{
 uint64_t VAR_62;
 int VAR_63;
 ml_cpu_info_t VAR_64;

 VAR_62 = 0;
 FUNC_4(&VAR_64);

 switch (VAR_64.vector_unit) {
  case 9:
   VAR_62 |= VAR_31;

  case 8:
   VAR_62 |= VAR_56;

  case 7:
   VAR_62 |= VAR_55;

  case 6:
   VAR_62 |= VAR_57;

  case 5:
   VAR_62 |= VAR_54;

  case 4:
   VAR_62 |= VAR_53;

  case 3:
   VAR_62 |= VAR_52;

  case 2:
   VAR_62 |= VAR_46;
  default:
   break;
 }
 switch (VAR_64.cache_line_size) {
  case 128:
   VAR_62 |= VAR_25;
   break;
  case 64:
   VAR_62 |= VAR_27;
   break;
  case 32:
   VAR_62 |= VAR_26;
   break;
  default:
   break;
 }
 VAR_63 = FUNC_0();

 VAR_62 |= (VAR_63 << VAR_58);

 VAR_62 |= VAR_28;




 if (VAR_63 == 1) VAR_62 |= VAR_60;
 if (FUNC_1()) VAR_62 |= VAR_24;
 if (VAR_61 <= VAR_22) VAR_62 |= VAR_59;

 if (FUNC_2() & VAR_0) VAR_62 |= VAR_30;

 if (FUNC_2() & VAR_1) VAR_62 |= VAR_43;

 if (FUNC_2() & VAR_3) VAR_62 |= VAR_48;

 if (FUNC_2() & VAR_2) VAR_62 |= VAR_44;


 if (FUNC_3() & VAR_13) VAR_62 |= VAR_40;

 if (FUNC_3() & VAR_14) VAR_62 |= VAR_41;

 if (FUNC_3() & VAR_19) VAR_62 |= VAR_50;

 if (FUNC_3() & VAR_16) VAR_62 |= VAR_45;

 if (FUNC_3() & VAR_5) VAR_62 |= VAR_32;

 if (FUNC_3() & VAR_18) VAR_62 |= VAR_49;

 if (FUNC_3() & VAR_4) VAR_62 |= VAR_29;
 if (FUNC_5()) {
  if (FUNC_3() & VAR_9) VAR_62 |= VAR_36;

  if (FUNC_3() & VAR_7) VAR_62 |= VAR_34;

  if (FUNC_3() & VAR_8) VAR_62 |= VAR_35;

  if (FUNC_3() & VAR_6) VAR_62 |= VAR_33;

  if (FUNC_3() & VAR_12) VAR_62 |= VAR_39;

  if (FUNC_3() & VAR_10) VAR_62 |= VAR_37;

  if (FUNC_3() & VAR_11) VAR_62 |= VAR_38;

 }


 uint64_t VAR_65 = FUNC_6(VAR_21);
 if ((VAR_65 & 1ULL) && (FUNC_3() & VAR_15)) VAR_62 |= VAR_42;



 VAR_23 = VAR_62;
}
