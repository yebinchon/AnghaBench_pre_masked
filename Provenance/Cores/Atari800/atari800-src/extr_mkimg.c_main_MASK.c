
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int State ;
typedef int FILE ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (unsigned char*,int,int,int *) ;
 int FUNC_4 (unsigned char*,int,int,int *) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*,int*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

int FUNC_10(int VAR_0, char *VAR_1[])
{
 unsigned char VAR_2[65536];
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = -1;
 int VAR_10 = -1;
 int VAR_11;
 FILE *VAR_12;
 int VAR_13;

 State VAR_14 = 131;

 for (VAR_13 = 1; VAR_13 < VAR_0; VAR_13++) {
  if (FUNC_9(VAR_1[VAR_13], "-input") == 0)
   VAR_3 = VAR_1[++VAR_13];
  else if (FUNC_9(VAR_1[VAR_13], "-image") == 0)
   VAR_4 = VAR_1[++VAR_13];
  else if (FUNC_9(VAR_1[VAR_13], "-header") == 0)
   VAR_5 = VAR_1[++VAR_13];
  else if (VAR_9 == -1)
   FUNC_8(VAR_1[VAR_13], "%x", &VAR_9);
  else if (VAR_10 == -1)
   FUNC_8(VAR_1[VAR_13], "%x", &VAR_10);
  else
   VAR_6 = 1;
 }

 if (!VAR_3 || (!VAR_4 && !VAR_5) ||
  VAR_6 || (VAR_9 == -1) || (VAR_10 == -1)) {
  FUNC_7("Usage: %s -input in_fname {-image image_fname|-header header_fname} hexaddr1 hexaddr2\n",
      VAR_1[0]);
  return 0;
 }
 FUNC_5(VAR_2, 0, 65536);

 VAR_12 = FUNC_1(VAR_3, "rb");
 if (!VAR_12) {
  FUNC_6(VAR_3);
  return 1;
 }
 while (1) {
  unsigned char VAR_15;

  if (FUNC_3(&VAR_15, 1, 1, VAR_12) != 1)
   break;

  switch (VAR_14) {
  case 131:
   if (VAR_15 == 0xff)
    VAR_14 = 130;
   else
    FUNC_7("Error: Expecting Header1\n");
   break;
  case 130:
   if (VAR_15 == 0xff)
    VAR_14 = 128;
   else
    FUNC_7("Error: Expecting Header2\n");
   break;
  case 128:
   VAR_7 = (VAR_7 & 0xff00) | VAR_15;
   VAR_14 = 129;
   break;
  case 129:
   VAR_7 = (VAR_7 & 0x00ff) | (VAR_15 << 8);
   VAR_14 = 132;
   FUNC_7("StartAddr = %x\n", VAR_7);
   if (VAR_7 == 0xffff) {
    FUNC_7("Oops thats a header\n");
    VAR_14 = 128;
   }
   break;
  case 132:
   VAR_8 = (VAR_8 & 0xff00) | VAR_15;
   VAR_14 = 133;
   break;
  case 133:
   VAR_8 = (VAR_8 & 0x00ff) | (VAR_15 << 8);
   VAR_14 = 134;
   VAR_11 = VAR_7;
   FUNC_7("FinishAddr = %x\n", VAR_8);
   break;
  case 134:
   VAR_2[VAR_11++] = VAR_15;
   if (VAR_11 > VAR_8)
    VAR_14 = 128;
   break;
  default:
   FUNC_7("Error: Invalid State\n");
   return 1;
  }
 }

 FUNC_0(VAR_12);





 if (VAR_4) {
  VAR_12 = FUNC_1(VAR_4, "wb");
  if (!VAR_12) {
   FUNC_6(VAR_4);
   return 1;
  }
  FUNC_4(&VAR_2[VAR_9], 1, VAR_10 - VAR_9 + 1, VAR_12);

  FUNC_0(VAR_12);
 }
 if (VAR_5) {
  FILE *VAR_16;
  char *VAR_17;
  int VAR_18;

  VAR_16 = FUNC_1(VAR_5, "wb");
  if (!VAR_16) {
   FUNC_6(VAR_5);
   return 1;
  }

  for (VAR_17 = VAR_5; *VAR_17; VAR_17++) {
   if (!( (*VAR_17 >= 'a' && *VAR_17 <= 'z')
       || (*VAR_17 >= 'A' && *VAR_17 <= 'Z')
       || (*VAR_17 >= '0' && *VAR_17 <= '9') ))
    *VAR_17 = '_';
  }

  FUNC_2(VAR_16, "#ifndef _%s_\n", VAR_5);
  FUNC_2(VAR_16, "#define _%s_\n\n", VAR_5);

  FUNC_2(VAR_16, "static unsigned char %s[] =\n{\n\t", VAR_5);

  for (VAR_13 = VAR_9, VAR_18 = 0; VAR_13 < VAR_10; VAR_13++) {
   FUNC_2(VAR_16, "0x%02x,", VAR_2[VAR_13]);

   if (++VAR_18 == 8) {
    FUNC_2(VAR_16, "\n\t");
    VAR_18 = 0;
   }
  }

  FUNC_2(VAR_16, "0x%02x\n", VAR_2[VAR_10]);
  FUNC_2(VAR_16, "};\n");

  FUNC_2(VAR_16, "\n#endif\n");

  FUNC_0(VAR_16);
 }
 return 0;
}
