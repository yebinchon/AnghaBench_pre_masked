
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(u16 VAR_1, u16 VAR_2, u8 VAR_3, char *VAR_4)
{
 char *VAR_5 = ((void*)0);

 if (VAR_1 == VAR_0) {
  switch (VAR_2)
  {
  case 136:
   switch (VAR_3)
   {
   case 0x00:
    VAR_5 = "BRE040 A0";
    break;
   case 0x01:
    VAR_5 = "BRE040 A1";
    break;
   default:
    VAR_5 = "BRE040";
    break;
   }
   break;
  }
  goto out;
 }

 switch (VAR_2)
 {
 case 142:
  VAR_5 = "LSIFC909 B1";
  break;
 case 141:
  VAR_5 = "LSIFC919 B0";
  break;
 case 139:
  VAR_5 = "LSIFC929 B0";
  break;
 case 140:
  if (VAR_3 < 0x80)
   VAR_5 = "LSIFC919X A0";
  else
   VAR_5 = "LSIFC919XL A1";
  break;
 case 138:
  if (VAR_3 < 0x80)
   VAR_5 = "LSIFC929X A0";
  else
   VAR_5 = "LSIFC929XL A1";
  break;
 case 137:
  VAR_5 = "LSIFC939X A1";
  break;
 case 135:
  VAR_5 = "LSIFC949X A1";
  break;
 case 136:
  switch (VAR_3)
  {
  case 0x00:
   VAR_5 = "LSIFC949E A0";
   break;
  case 0x01:
   VAR_5 = "LSIFC949E A1";
   break;
  default:
   VAR_5 = "LSIFC949E";
   break;
  }
  break;
 case 133:
  switch (VAR_3)
  {
  case 0x00:
   VAR_5 = "LSI53C1030 A0";
   break;
  case 0x01:
   VAR_5 = "LSI53C1030 B0";
   break;
  case 0x03:
   VAR_5 = "LSI53C1030 B1";
   break;
  case 0x07:
   VAR_5 = "LSI53C1030 B2";
   break;
  case 0x08:
   VAR_5 = "LSI53C1030 C0";
   break;
  case 0x80:
   VAR_5 = "LSI53C1030T A0";
   break;
  case 0x83:
   VAR_5 = "LSI53C1030T A2";
   break;
  case 0x87:
   VAR_5 = "LSI53C1030T A3";
   break;
  case 0xc1:
   VAR_5 = "LSI53C1020A A1";
   break;
  default:
   VAR_5 = "LSI53C1030";
   break;
  }
  break;
 case 134:
  switch (VAR_3)
  {
  case 0x03:
   VAR_5 = "LSI53C1035 A2";
   break;
  case 0x04:
   VAR_5 = "LSI53C1035 B0";
   break;
  default:
   VAR_5 = "LSI53C1035";
   break;
  }
  break;
 case 132:
  switch (VAR_3)
  {
  case 0x00:
   VAR_5 = "LSISAS1064 A1";
   break;
  case 0x01:
   VAR_5 = "LSISAS1064 A2";
   break;
  case 0x02:
   VAR_5 = "LSISAS1064 A3";
   break;
  case 0x03:
   VAR_5 = "LSISAS1064 A4";
   break;
  default:
   VAR_5 = "LSISAS1064";
   break;
  }
  break;
 case 131:
  switch (VAR_3)
  {
  case 0x00:
   VAR_5 = "LSISAS1064E A0";
   break;
  case 0x01:
   VAR_5 = "LSISAS1064E B0";
   break;
  case 0x02:
   VAR_5 = "LSISAS1064E B1";
   break;
  case 0x04:
   VAR_5 = "LSISAS1064E B2";
   break;
  case 0x08:
   VAR_5 = "LSISAS1064E B3";
   break;
  default:
   VAR_5 = "LSISAS1064E";
   break;
  }
  break;
 case 130:
  switch (VAR_3)
  {
  case 0x00:
   VAR_5 = "LSISAS1068 A0";
   break;
  case 0x01:
   VAR_5 = "LSISAS1068 B0";
   break;
  case 0x02:
   VAR_5 = "LSISAS1068 B1";
   break;
  default:
   VAR_5 = "LSISAS1068";
   break;
  }
  break;
 case 129:
  switch (VAR_3)
  {
  case 0x00:
   VAR_5 = "LSISAS1068E A0";
   break;
  case 0x01:
   VAR_5 = "LSISAS1068E B0";
   break;
  case 0x02:
   VAR_5 = "LSISAS1068E B1";
   break;
  case 0x04:
   VAR_5 = "LSISAS1068E B2";
   break;
  case 0x08:
   VAR_5 = "LSISAS1068E B3";
   break;
  default:
   VAR_5 = "LSISAS1068E";
   break;
  }
  break;
 case 128:
  switch (VAR_3)
  {
  case 0x00:
   VAR_5 = "LSISAS1078 A0";
   break;
  case 0x01:
   VAR_5 = "LSISAS1078 B0";
   break;
  case 0x02:
   VAR_5 = "LSISAS1078 C0";
   break;
  case 0x03:
   VAR_5 = "LSISAS1078 C1";
   break;
  case 0x04:
   VAR_5 = "LSISAS1078 C2";
   break;
  default:
   VAR_5 = "LSISAS1078";
   break;
  }
  break;
 }

 out:
 if (VAR_5)
  FUNC_0(VAR_4, "%s", VAR_5);
}
