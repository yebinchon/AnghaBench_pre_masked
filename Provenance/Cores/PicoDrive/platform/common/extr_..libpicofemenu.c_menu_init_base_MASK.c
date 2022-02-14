
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 unsigned char* VAR_4 ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 unsigned char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (unsigned char*,char*,int ,int,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

void FUNC_14(void)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned char *VAR_14, *VAR_15;
 char VAR_16[256];
 FILE *VAR_17;

 if (VAR_7 != ((void*)0))
  FUNC_5(VAR_7);

 VAR_7 = FUNC_0((VAR_1 ? 256 * 320 : 128 * 160) / 2, 1);
 if (VAR_7 == ((void*)0))
  return;


 for (VAR_11 = 0, VAR_14 = VAR_7; VAR_11 < 256; VAR_11++)
 {
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  {
   unsigned char VAR_18 = VAR_4[VAR_11*8+VAR_12];
   if (VAR_18&0x80) *VAR_14 = 0xf0;
   if (VAR_18&0x40) *VAR_14 |= 0x0f; VAR_14++;
   if (VAR_18&0x20) *VAR_14 = 0xf0;
   if (VAR_18&0x10) *VAR_14 |= 0x0f; VAR_14++;
   if (VAR_18&0x08) *VAR_14 = 0xf0;
   if (VAR_18&0x04) *VAR_14 |= 0x0f; VAR_14++;
   if (VAR_18&0x02) *VAR_14 = 0xf0;
   if (VAR_18&0x01) *VAR_14 |= 0x0f; VAR_14++;
  }
  VAR_14 += 8*2/2;
 }

 if (VAR_1) {

  VAR_15 = VAR_7 + 128 * 160 / 2 - 4;
  VAR_14 = VAR_7 + 256 * 320 / 2 - 1;
  for (VAR_11 = 255; VAR_11 >= 0; VAR_11--)
  {
   for (VAR_12 = 9; VAR_12 >= 0; VAR_12--, VAR_15 -= 4)
   {
    for (VAR_10 = 3; VAR_10 >= 0; VAR_10--) {
     int VAR_19 = VAR_15[VAR_10] & 0x0f;
     *VAR_14-- = VAR_19 | (VAR_19 << 4);
     VAR_19 = (VAR_15[VAR_10] >> 4) & 0x0f;
     *VAR_14-- = VAR_19 | (VAR_19 << 4);
    }
    for (VAR_10 = 3; VAR_10 >= 0; VAR_10--) {
     int VAR_20 = VAR_15[VAR_10] & 0x0f;
     *VAR_14-- = VAR_20 | (VAR_20 << 4);
     VAR_20 = (VAR_15[VAR_10] >> 4) & 0x0f;
     *VAR_14-- = VAR_20 | (VAR_20 << 4);
    }
   }
  }
 }


 VAR_13 = FUNC_9(VAR_16, sizeof(VAR_16));
 FUNC_12(VAR_16 + VAR_13, "font.png");
 FUNC_10(VAR_7, VAR_16, VAR_2,
  VAR_1 ? 256 : 128, VAR_1 ? 320 : 160);

 FUNC_7(VAR_7, VAR_7 + ((int)'>') * VAR_6 * VAR_5 / 2,
  VAR_6 * VAR_5 / 2);
 FUNC_12(VAR_16 + VAR_13, "selector.png");
 FUNC_10(VAR_7, VAR_16, VAR_3, VAR_6, VAR_5);


 FUNC_12(VAR_16 + VAR_13, "skin.txt");
 VAR_17 = FUNC_4(VAR_16, "r");
 if (VAR_17 != ((void*)0))
 {
  FUNC_6("found skin.txt\n");
  while (!FUNC_2(VAR_17))
  {
   if (FUNC_3(VAR_16, sizeof(VAR_16), VAR_17) == ((void*)0))
    break;
   if (VAR_16[0] == '#' || VAR_16[0] == '/') continue;
   if (VAR_16[0] == '\r' || VAR_16[0] == '\n') continue;
   if (FUNC_13(VAR_16, "text_color=", 11) == 0)
   {
    int VAR_21 = FUNC_8(VAR_16+11);
    if (VAR_21 >= 0) VAR_9 = VAR_21;
    else FUNC_6("skin.txt: parse error for text_color\n");
   }
   else if (FUNC_13(VAR_16, "selection_color=", 16) == 0)
   {
    int VAR_22 = FUNC_8(VAR_16+16);
    if (VAR_22 >= 0) VAR_8 = VAR_22;
    else FUNC_6("skin.txt: parse error for selection_color\n");
   }
   else
    FUNC_6("skin.txt: parse error: %s\n", VAR_16);
  }
  FUNC_1(VAR_17);
 }


 FUNC_11(VAR_0, "");
}
