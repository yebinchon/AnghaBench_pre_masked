
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ available; } ;
struct TYPE_5__ {int display; TYPE_1__ xkb; } ;
struct TYPE_6__ {TYPE_2__ x11; } ;
typedef int KeySym ;


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
 int VAR_71 ;
 int VAR_72 ;
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
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (int ,int,int ,int) ;
 TYPE_3__ VAR_120 ;

__attribute__((used)) static int FUNC_3(int VAR_121)
{
    int VAR_122;


    if (VAR_121 < 8 || VAR_121 > 255)
        return VAR_112;

    if (VAR_120.x11.xkb.available)
    {




        VAR_122 = FUNC_2(VAR_120.x11.display, VAR_121, 0, 1);
        switch (VAR_122)
        {
            case 213: return VAR_60;
            case 212: return VAR_61;
            case 211: return VAR_62;
            case 210: return VAR_63;
            case 209: return VAR_64;
            case 208: return VAR_65;
            case 207: return VAR_66;
            case 206: return VAR_67;
            case 205: return VAR_68;
            case 204: return VAR_69;
            case 188:
            case 202: return VAR_71;
            case 196: return VAR_74;
            case 197: return VAR_73;
            default: break;
        }




        VAR_122 = FUNC_2(VAR_120.x11.display, VAR_121, 0, 0);
    }
    else
    {
        int VAR_123;
        KeySym* VAR_124;

        VAR_124 = FUNC_1(VAR_120.x11.display, VAR_121, 1, &VAR_123);
        VAR_122 = VAR_124[0];
        FUNC_0(VAR_124);
    }

    switch (VAR_122)
    {
        case 242: return VAR_25;
        case 168: return VAR_110;
        case 172: return VAR_82;
        case 171: return VAR_102;
        case 247: return VAR_81;
        case 246: return VAR_101;
        case 183:
        case 251: return VAR_79;
        case 181:
        case 215:
        case 182:
        case 250: return VAR_99;
        case 170: return VAR_83;
        case 169: return VAR_103;
        case 184: return VAR_85;
        case 180: return VAR_88;
        case 248: return VAR_16;
        case 176: return VAR_95;
        case 173: return VAR_105;
        case 177: return VAR_93;
        case 245: return VAR_19;
        case 249: return VAR_14;
        case 175: return VAR_23;
        case 216: return VAR_55;
        case 243: return VAR_22;
        case 178: return VAR_92;
        case 179: return VAR_91;
        case 214: return VAR_57;
        case 185: return VAR_78;
        case 174: return VAR_98;
        case 244: return VAR_20;
        case 167: return VAR_113;
        case 241: return VAR_27;
        case 230: return VAR_38;
        case 223: return VAR_45;
        case 222: return VAR_46;
        case 221: return VAR_47;
        case 220: return VAR_48;
        case 219: return VAR_49;
        case 218: return VAR_50;
        case 217: return VAR_51;
        case 240: return VAR_28;
        case 239: return VAR_29;
        case 238: return VAR_30;
        case 237: return VAR_31;
        case 236: return VAR_32;
        case 235: return VAR_33;
        case 234: return VAR_34;
        case 233: return VAR_35;
        case 232: return VAR_36;
        case 231: return VAR_37;
        case 229: return VAR_39;
        case 228: return VAR_40;
        case 227: return VAR_41;
        case 226: return VAR_42;
        case 225: return VAR_43;
        case 224: return VAR_44;


        case 200: return VAR_72;
        case 192: return VAR_75;
        case 187: return VAR_76;
        case 203: return VAR_70;


        case 194: return VAR_60;
        case 198: return VAR_61;
        case 199: return VAR_62;
        case 191: return VAR_63;
        case 193: return VAR_64;
        case 189: return VAR_66;
        case 195: return VAR_67;
        case 186: return VAR_68;
        case 190: return VAR_69;
        case 201: return VAR_71;
        case 196: return VAR_74;
        case 197: return VAR_73;





        case 166: return VAR_10;
        case 164: return VAR_12;
        case 160: return VAR_15;
        case 158: return VAR_18;
        case 157: return VAR_21;
        case 155: return VAR_26;
        case 154: return VAR_52;
        case 152: return VAR_54;
        case 151: return VAR_56;
        case 150: return VAR_58;
        case 149: return VAR_59;
        case 148: return VAR_77;
        case 146: return VAR_84;
        case 144: return VAR_87;
        case 143: return VAR_89;
        case 142: return VAR_90;
        case 140: return VAR_96;
        case 139: return VAR_97;
        case 138: return VAR_104;
        case 134: return VAR_109;
        case 133: return VAR_111;
        case 132: return VAR_114;
        case 131: return VAR_115;
        case 130: return VAR_117;
        case 129: return VAR_118;
        case 128: return VAR_119;
        case 260: return VAR_1;
        case 259: return VAR_2;
        case 258: return VAR_3;
        case 257: return VAR_4;
        case 256: return VAR_5;
        case 255: return VAR_6;
        case 254: return VAR_7;
        case 253: return VAR_8;
        case 252: return VAR_9;
        case 261: return VAR_0;
        case 135: return VAR_108;
        case 145: return VAR_86;
        case 156: return VAR_24;
        case 162: return VAR_80;
        case 161: return VAR_100;
        case 163: return VAR_13;
        case 137: return VAR_106;
        case 165: return VAR_11;
        case 153: return VAR_53;
        case 159: return VAR_17;
        case 141: return VAR_94;
        case 136: return VAR_107;
        case 147: return VAR_116;
        default: break;
    }


    return VAR_112;
}
