
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2,
        int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;




 switch(VAR_2) {
 case 132:
  VAR_5 = (*VAR_0++ - 16) * 76310;
  VAR_11 = (*VAR_0 - 16) * 76310;
  VAR_8 = ((*(VAR_1+1-VAR_3)) & 0x7c) << 1;
  VAR_9 = ((*(VAR_1-VAR_3)) & 0xe0) >> 4 |
      ((*(VAR_1+1-VAR_3)) & 0x03) << 6;
  VAR_10 = ((*(VAR_1-VAR_3)) & 0x1f) << 3;
  VAR_6 = (-53294 * VAR_8 - 104635 * VAR_9 + 157929 * VAR_10) / 5756495;
  VAR_7 = (157968 * VAR_8 - 132278 * VAR_9 - 25690 * VAR_10) / 5366159;
  VAR_8 = 104635 * VAR_7;
  VAR_9 = -25690 * VAR_6 - 53294 * VAR_7;
  VAR_10 = 132278 * VAR_6;
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_5) & 0xf8) << 2) | (FUNC_1(VAR_10+VAR_5) >> 3);
  *VAR_1++ = ((FUNC_1(VAR_8+VAR_5) & 0xf8) >> 1) | (FUNC_1(VAR_9+VAR_5) >> 6);
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_11) & 0xf8) << 2) | (FUNC_1(VAR_10+VAR_11) >> 3);
  *VAR_1 = ((FUNC_1(VAR_8+VAR_11) & 0xf8) >> 1) | (FUNC_1(VAR_9+VAR_11) >> 6);
  return 4;
 case 131:
  VAR_5 = (*VAR_0++ - 16) * 76310;
  VAR_11 = (*VAR_0 - 16) * 76310;
  VAR_8 = (*(VAR_1+1-VAR_3)) & 0xf8;
  VAR_9 = ((*(VAR_1-VAR_3)) & 0xe0) >> 3 |
      ((*(VAR_1+1-VAR_3)) & 0x07) << 5;
  VAR_10 = ((*(VAR_1-VAR_3)) & 0x1f) << 3;
  VAR_6 = (-53294 * VAR_8 - 104635 * VAR_9 + 157929 * VAR_10) / 5756495;
  VAR_7 = (157968 * VAR_8 - 132278 * VAR_9 - 25690 * VAR_10) / 5366159;
  VAR_8 = 104635 * VAR_7;
  VAR_9 = -25690 * VAR_6 - 53294 * VAR_7;
  VAR_10 = 132278 * VAR_6;
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_5) & 0xfc) << 3) | (FUNC_1(VAR_10+VAR_5) >> 3);
  *VAR_1++ = (FUNC_1(VAR_8+VAR_5) & 0xf8) | (FUNC_1(VAR_9+VAR_5) >> 5);
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_11) & 0xfc) << 3) | (FUNC_1(VAR_10+VAR_11) >> 3);
  *VAR_1 = (FUNC_1(VAR_8+VAR_11) & 0xf8) | (FUNC_1(VAR_9+VAR_11) >> 5);
  return 4;
  break;
 case 134:
 case 133:
  VAR_5 = (*VAR_0++ - 16) * 76310;
  VAR_11 = (*VAR_0 - 16) * 76310;
  if (VAR_4) {
   VAR_8 = *(VAR_1+2-VAR_3);
   VAR_9 = *(VAR_1+1-VAR_3);
   VAR_10 = *(VAR_1-VAR_3);
  } else {
   VAR_8 = *(VAR_1-VAR_3);
   VAR_9 = *(VAR_1+1-VAR_3);
   VAR_10 = *(VAR_1+2-VAR_3);
  }
  VAR_6 = (-53294 * VAR_8 - 104635 * VAR_9 + 157929 * VAR_10) / 5756495;
  VAR_7 = (157968 * VAR_8 - 132278 * VAR_9 - 25690 * VAR_10) / 5366159;
  VAR_8 = 104635 * VAR_7;
  VAR_9 = -25690 * VAR_6 + -53294 * VAR_7;
  VAR_10 = 132278 * VAR_6;
  if (VAR_4) {
   *VAR_1++ = FUNC_1(VAR_10+VAR_5);
   *VAR_1++ = FUNC_1(VAR_9+VAR_5);
   *VAR_1++ = FUNC_1(VAR_8+VAR_5);
   if(VAR_2 == 133)
    VAR_1++;
   *VAR_1++ = FUNC_1(VAR_10+VAR_11);
   *VAR_1++ = FUNC_1(VAR_9+VAR_11);
   *VAR_1 = FUNC_1(VAR_8+VAR_11);
  } else {
   *VAR_1++ = FUNC_1(VAR_8+VAR_5);
   *VAR_1++ = FUNC_1(VAR_9+VAR_5);
   *VAR_1++ = FUNC_1(VAR_10+VAR_5);
   if(VAR_2 == 133)
    VAR_1++;
   *VAR_1++ = FUNC_1(VAR_8+VAR_11);
   *VAR_1++ = FUNC_1(VAR_9+VAR_11);
   *VAR_1 = FUNC_1(VAR_10+VAR_11);
  }
  if(VAR_2 == 133)
   return 8;
  return 6;
 case 129:
 case 128:
  VAR_5 = *VAR_0++;
  VAR_6 = *(VAR_1+1-VAR_3);
  VAR_11 = *VAR_0;
  VAR_7 = *(VAR_1+3-VAR_3);
  *VAR_1++ = VAR_5;
  *VAR_1++ = VAR_6;
  *VAR_1++ = VAR_11;
  *VAR_1 = VAR_7;
  return 4;
 case 130:
  VAR_6 = *(VAR_1-VAR_3);
  VAR_5 = *VAR_0++;
  VAR_7 = *(VAR_1+2-VAR_3);
  VAR_11 = *VAR_0;
  *VAR_1++ = VAR_6;
  *VAR_1++ = VAR_5;
  *VAR_1++ = VAR_7;
  *VAR_1 = VAR_11;
  return 4;
 case 135:
  *VAR_1++ = *VAR_0++;
  *VAR_1 = *VAR_0;
  return 2;
 default:
  FUNC_0("Empty: %d\n", VAR_2);
  return 0;
 }
}
