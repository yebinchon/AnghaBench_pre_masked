
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static u_char *
FUNC_0(u_char * VAR_0, u_char VAR_1)
{

 VAR_0[0] = 0;
 VAR_0[1] = 0x40;
 VAR_0[2] = 0x80;
 if (VAR_1 & 32)

  VAR_0[2] += 16;
 else

  VAR_0[2] += 24;

 if (VAR_1 & 16)

  VAR_0[2] += 96;
 else

  VAR_0[2] += 32;

 if (VAR_1 & 8)

  VAR_0[2] += 2;
 else

  VAR_0[2] += 3;

 switch (VAR_1 & 0x07) {
  case 0:
   VAR_0[0] = 66;

   break;
  case 1:
   VAR_0[0] = 88;

   break;
  case 2:
   VAR_0[0] = 87;

   break;
  case 3:
   VAR_0[0] = 67;

   break;
  case 4:
   VAR_0[0] = 69;

   break;
  case 5:
   VAR_0[0] = 72;

   break;
  case 6:
   VAR_0[0] = 73;

   break;
  case 7:
   VAR_0[0] = 75;

   break;
 }
 return VAR_0 + 3;
}
