
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
 case 131:
 case 134:
 case 133:
  if (VAR_3) {
   VAR_6 = *VAR_0++ - 128;
   VAR_5 = (*VAR_0++ - 16) * 76310;
   VAR_7 = *VAR_0++ - 128;
   VAR_11 = (*VAR_0 - 16) * 76310;
  } else {
   VAR_5 = (*VAR_0++ - 16) * 76310;
   VAR_6 = *VAR_0++ - 128;
   VAR_11 = (*VAR_0++ - 16) * 76310;
   VAR_7 = *VAR_0 - 128;
  }
  VAR_8 = 104635 * VAR_7;
  VAR_9 = -25690 * VAR_6 + -53294 * VAR_7;
  VAR_10 = 132278 * VAR_6;
  break;
 default:
  VAR_5 = *VAR_0++;
  VAR_6 = *VAR_0++;
  VAR_11 = *VAR_0++;
  VAR_7 = *VAR_0;

  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = 0;
  break;
 }
 switch(VAR_2) {
 case 132:
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_5) & 0xf8) << 2) | (FUNC_1(VAR_10+VAR_5) >> 3);
  *VAR_1++ = ((FUNC_1(VAR_8+VAR_5) & 0xf8) >> 1) | (FUNC_1(VAR_9+VAR_5) >> 6);
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_11) & 0xf8) << 2) | (FUNC_1(VAR_10+VAR_11) >> 3);
  *VAR_1 = ((FUNC_1(VAR_8+VAR_11) & 0xf8) >> 1) | (FUNC_1(VAR_9+VAR_11) >> 6);
  return 4;
 case 131:
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_5) & 0xfc) << 3) | (FUNC_1(VAR_10+VAR_5) >> 3);
  *VAR_1++ = (FUNC_1(VAR_8+VAR_5) & 0xf8) | (FUNC_1(VAR_9+VAR_5) >> 5);
  *VAR_1++ = ((FUNC_1(VAR_9+VAR_11) & 0xfc) << 3) | (FUNC_1(VAR_10+VAR_11) >> 3);
  *VAR_1 = (FUNC_1(VAR_8+VAR_11) & 0xf8) | (FUNC_1(VAR_9+VAR_11) >> 5);
  return 4;
 case 134:
  if (VAR_4) {
   *VAR_1++ = FUNC_1(VAR_10+VAR_5);
   *VAR_1++ = FUNC_1(VAR_9+VAR_5);
   *VAR_1++ = FUNC_1(VAR_8+VAR_5);
   *VAR_1++ = FUNC_1(VAR_10+VAR_11);
   *VAR_1++ = FUNC_1(VAR_9+VAR_11);
   *VAR_1 = FUNC_1(VAR_8+VAR_11);
  } else {
   *VAR_1++ = FUNC_1(VAR_8+VAR_5);
   *VAR_1++ = FUNC_1(VAR_9+VAR_5);
   *VAR_1++ = FUNC_1(VAR_10+VAR_5);
   *VAR_1++ = FUNC_1(VAR_8+VAR_11);
   *VAR_1++ = FUNC_1(VAR_9+VAR_11);
   *VAR_1 = FUNC_1(VAR_10+VAR_11);
  }
  return 6;
 case 133:
  if (VAR_4) {
   *VAR_1++ = FUNC_1(VAR_10+VAR_5);
   *VAR_1++ = FUNC_1(VAR_9+VAR_5);
   *VAR_1++ = FUNC_1(VAR_8+VAR_5);
   VAR_1++;
   *VAR_1++ = FUNC_1(VAR_10+VAR_11);
   *VAR_1++ = FUNC_1(VAR_9+VAR_11);
   *VAR_1 = FUNC_1(VAR_8+VAR_11);
  } else {
   *VAR_1++ = FUNC_1(VAR_8+VAR_5);
   *VAR_1++ = FUNC_1(VAR_9+VAR_5);
   *VAR_1++ = FUNC_1(VAR_10+VAR_5);
   VAR_1++;
   *VAR_1++ = FUNC_1(VAR_8+VAR_11);
   *VAR_1++ = FUNC_1(VAR_9+VAR_11);
   *VAR_1 = FUNC_1(VAR_10+VAR_11);
  }
  return 8;
 case 135:
  *VAR_1++ = VAR_5;
  *VAR_1 = VAR_11;
  return 2;
 case 129:
 case 128:
  *VAR_1++ = VAR_5;
  *VAR_1++ = VAR_6;
  *VAR_1++ = VAR_11;
  *VAR_1 = VAR_7;
  return 4;
 case 130:
  *VAR_1++ = VAR_6;
  *VAR_1++ = VAR_5;
  *VAR_1++ = VAR_7;
  *VAR_1 = VAR_11;
  return 4;
 default:
  FUNC_0("Empty: %d\n", VAR_2);
  return 0;
 }
}
