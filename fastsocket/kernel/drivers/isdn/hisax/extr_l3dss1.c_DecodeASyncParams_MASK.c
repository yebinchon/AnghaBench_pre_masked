
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static u_char
FUNC_0(u_char VAR_0, u_char * VAR_1)
{
 u_char VAR_2;

 switch (VAR_1[5]) {
  case 66:

   break;

  case 88:

   VAR_0 += 1;
   break;
  case 87:

   VAR_0 += 2;
   break;
  case 67:

   VAR_0 += 3;
   break;
  case 69:

   VAR_0 += 4;
   break;
  case 72:

   VAR_0 += 5;
   break;
  case 73:

   VAR_0 += 6;
   break;
  case 75:

   VAR_0 += 7;
   break;
 }

 VAR_2 = VAR_1[7] & 0x7f;
 if ((VAR_2 & 16) && (!(VAR_2 & 8)))

  VAR_0 += 32;

 if ((VAR_2 & 96) == 96)

  VAR_0 += 16;

 if ((VAR_2 & 2) && (!(VAR_2 & 1)))

  VAR_0 += 8;

 return VAR_0;
}
