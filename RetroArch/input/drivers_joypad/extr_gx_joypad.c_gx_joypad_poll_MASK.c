
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_4__ {int btns_h; } ;
typedef TYPE_1__ WPADData ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned int VAR_0 ;
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
 int VAR_22 ;
 int VAR_23 ;
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
 int FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int VAR_54 ;
 int VAR_55 ;
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;
 size_t VAR_59 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (unsigned int,int*) ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 unsigned int VAR_71 ;
 unsigned int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 scalar_t__ FUNC_12 (unsigned int) ;
 scalar_t__ VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int*** VAR_97 ;
 int FUNC_16 (int) ;
 int VAR_98 ;
 int VAR_99 ;
 scalar_t__ FUNC_17 (unsigned int) ;
 int FUNC_18 (int,unsigned int) ;
 int FUNC_19 (unsigned int,int) ;
 int VAR_100 ;
 int* VAR_101 ;
 int* VAR_102 ;
 int FUNC_20 (int ,int *) ;

__attribute__((used)) static void FUNC_21(void)
{
   unsigned VAR_103, VAR_104, VAR_105;
   uint8_t VAR_106 = 0;
   uint8_t VAR_107 = 0;
   uint64_t VAR_108;
   uint64_t VAR_109;

   VAR_101[0] = 0;
   VAR_101[1] = 0;
   VAR_101[2] = 0;
   VAR_101[3] = 0;

   VAR_107 = FUNC_3();
   for (VAR_105 = 0; VAR_105 < VAR_0; VAR_105++)
   {
      uint32_t VAR_110 = 0, VAR_111 = VAR_92;
      uint64_t *VAR_112 = &VAR_101[VAR_105];

      if (VAR_107 & (1 << VAR_105))
      {
         int16_t VAR_113, VAR_114, VAR_115, VAR_116;
         uint64_t VAR_117 = 0;

         VAR_110 = FUNC_2(VAR_105);

         *VAR_112 |= (VAR_110 & VAR_42) ? (FUNC_10(1) << VAR_16) : 0;
         *VAR_112 |= (VAR_110 & VAR_43) ? (FUNC_10(1) << VAR_17) : 0;
         *VAR_112 |= (VAR_110 & VAR_49) ? (FUNC_10(1) << VAR_26) : 0;
         *VAR_112 |= (VAR_110 & VAR_50) ? (FUNC_10(1) << VAR_27) : 0;
         *VAR_112 |= (VAR_110 & VAR_48) ? (FUNC_10(1) << VAR_25) : 0;
         *VAR_112 |= (VAR_110 & VAR_44) ? (FUNC_10(1) << VAR_18) : 0;
         *VAR_112 |= (VAR_110 & VAR_45) ? (FUNC_10(1) << VAR_20) : 0;
         *VAR_112 |= (VAR_110 & VAR_46) ? (FUNC_10(1) << VAR_22) : 0;
         *VAR_112 |= (VAR_110 & VAR_47) ? (FUNC_10(1) << VAR_24) : 0;
         *VAR_112 |= (VAR_110 & VAR_53) ? (FUNC_10(1) << VAR_28) : 0;
         *VAR_112 |= ((VAR_110 & VAR_51) || FUNC_8(VAR_105) > 127) ? (FUNC_10(1) << VAR_21) : 0;
         *VAR_112 |= ((VAR_110 & VAR_52) || FUNC_9(VAR_105) > 127) ? (FUNC_10(1) << VAR_23) : 0;

         VAR_113 = (int16_t)FUNC_4(VAR_105) * 256;
         VAR_114 = (int16_t)FUNC_5(VAR_105) * -256;
         VAR_115 = (int16_t)FUNC_6(VAR_105) * 256;
         VAR_116 = (int16_t)FUNC_7(VAR_105) * -256;

         VAR_97[VAR_105][VAR_58][VAR_56] = VAR_113;
         VAR_97[VAR_105][VAR_58][VAR_57] = VAR_114;
         VAR_97[VAR_105][VAR_59][VAR_56] = VAR_115;
         VAR_97[VAR_105][VAR_59][VAR_57] = VAR_116;

         VAR_117 = (FUNC_10(1) << VAR_24) | (FUNC_10(1) << VAR_28) |
                      (FUNC_10(1) << VAR_21) | (FUNC_10(1) << VAR_23);

         if ((*VAR_112 & VAR_117) == VAR_117)
            *VAR_112 |= (FUNC_10(1) << VAR_19);

         VAR_111 = VAR_91;
      }
      if(FUNC_17(VAR_105))
         VAR_106++;



      FUNC_16(VAR_106);

      if (VAR_111 != VAR_102[VAR_105])
         FUNC_19(VAR_105, VAR_111);

      for (VAR_103 = 0; VAR_103 < 2; VAR_103++)
         for (VAR_104 = 0; VAR_104 < 2; VAR_104++)
            if (VAR_97[VAR_105][VAR_103][VAR_104] == -0x8000)
               VAR_97[VAR_105][VAR_103][VAR_104] = -0x7fff;
   }

   VAR_108 = VAR_101[0];

   FUNC_0(VAR_100, VAR_55);
   if (VAR_98)
   {
      VAR_108 |= (FUNC_10(1) << VAR_19);
      VAR_98 = 0;
   }

   VAR_109 = FUNC_10(1) << VAR_19;




   if (VAR_109 & VAR_108)
      FUNC_1(VAR_100, VAR_55);
}
