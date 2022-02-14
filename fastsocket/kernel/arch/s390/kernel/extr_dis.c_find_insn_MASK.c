
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {size_t format; unsigned char opfrag; } ;


 size_t VAR_0 ;
 unsigned char** VAR_1 ;
 struct insn* VAR_2 ;
 struct insn* VAR_3 ;
 struct insn* VAR_4 ;
 struct insn* VAR_5 ;
 struct insn* VAR_6 ;
 struct insn* VAR_7 ;
 struct insn* VAR_8 ;
 struct insn* VAR_9 ;
 struct insn* VAR_10 ;
 struct insn* VAR_11 ;
 struct insn* VAR_12 ;
 struct insn* VAR_13 ;
 struct insn* VAR_14 ;
 struct insn* VAR_15 ;
 struct insn* VAR_16 ;

__attribute__((used)) static struct insn *FUNC_0(unsigned char *VAR_17)
{
 unsigned char VAR_18 = VAR_17[1];
 unsigned char VAR_19;
 struct insn *VAR_20;

 switch (VAR_17[0]) {
 case 0x01:
  VAR_20 = VAR_3;
  break;
 case 0xa5:
  VAR_20 = VAR_4;
  break;
 case 0xa7:
  VAR_20 = VAR_5;
  break;
 case 0xb2:
  VAR_20 = VAR_6;
  break;
 case 0xb3:
  VAR_20 = VAR_7;
  break;
 case 0xb9:
  VAR_20 = VAR_8;
  break;
 case 0xc0:
  VAR_20 = VAR_9;
  break;
 case 0xc2:
  VAR_20 = VAR_10;
  break;
 case 0xc8:
  VAR_20 = VAR_11;
  break;
 case 0xe3:
  VAR_20 = VAR_12;
  VAR_18 = VAR_17[5];
  break;
 case 0xe5:
  VAR_20 = VAR_13;
  break;
 case 0xeb:
  VAR_20 = VAR_14;
  VAR_18 = VAR_17[5];
  break;
 case 0xec:
  VAR_20 = VAR_15;
  VAR_18 = VAR_17[5];
  break;
 case 0xed:
  VAR_20 = VAR_16;
  VAR_18 = VAR_17[5];
  break;
 default:
  VAR_20 = VAR_2;
  VAR_18 = VAR_17[0];
  break;
 }
 while (VAR_20->format != VAR_0) {
  VAR_19 = VAR_1[VAR_20->format][0];
  if (VAR_20->opfrag == (VAR_18 & VAR_19))
   return VAR_20;
  VAR_20++;
 }
 return ((void*)0);
}
