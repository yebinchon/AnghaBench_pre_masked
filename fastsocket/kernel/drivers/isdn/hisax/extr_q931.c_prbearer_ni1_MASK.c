
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static
int
FUNC_2(char *VAR_0, u_char * VAR_1)
{
 char *VAR_2 = VAR_0;
 u_char VAR_3;

 VAR_1++;
 VAR_3 = *VAR_1++;
 VAR_2 += FUNC_1(VAR_2, "    octet 3  ");
 VAR_2 += FUNC_0(VAR_2, *VAR_1, 8, 8);
 switch (*VAR_1++) {
  case 0x80:
   VAR_2 += FUNC_1(VAR_2, " Speech");
   break;
  case 0x88:
   VAR_2 += FUNC_1(VAR_2, " Unrestricted digital information");
   break;
  case 0x90:
   VAR_2 += FUNC_1(VAR_2, " 3.1 kHz audio");
   break;
  default:
   VAR_2 += FUNC_1(VAR_2, " Unknown information-transfer capability");
 }
 *VAR_2++ = '\n';
 VAR_2 += FUNC_1(VAR_2, "    octet 4  ");
 VAR_2 += FUNC_0(VAR_2, *VAR_1, 8, 8);
 switch (*VAR_1++) {
  case 0x90:
   VAR_2 += FUNC_1(VAR_2, " 64 kbps, circuit mode");
   break;
  case 0xc0:
   VAR_2 += FUNC_1(VAR_2, " Packet mode");
   break;
  default:
   VAR_2 += FUNC_1(VAR_2, " Unknown transfer mode");
 }
 *VAR_2++ = '\n';
 if (VAR_3 > 2) {
  VAR_2 += FUNC_1(VAR_2, "    octet 5  ");
  VAR_2 += FUNC_0(VAR_2, *VAR_1, 8, 8);
  switch (*VAR_1++) {
   case 0x21:
    VAR_2 += FUNC_1(VAR_2, " Rate adaption\n");
    VAR_2 += FUNC_1(VAR_2, "    octet 5a ");
    VAR_2 += FUNC_0(VAR_2, *VAR_1, 8, 8);
    break;
   case 0xa2:
    VAR_2 += FUNC_1(VAR_2, " u-law");
    break;
   default:
    VAR_2 += FUNC_1(VAR_2, " Unknown UI layer 1 protocol");
  }
  *VAR_2++ = '\n';
 }
 return (VAR_2 - VAR_0);
}
