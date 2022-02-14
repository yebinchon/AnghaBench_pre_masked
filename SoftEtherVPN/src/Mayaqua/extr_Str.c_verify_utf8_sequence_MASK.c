
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, int *VAR_1) {
 unsigned int VAR_2 = 0;
 *VAR_1 = FUNC_1(VAR_0[0]);

 if (*VAR_1 == 1) {
  VAR_2 = VAR_0[0];
 }
 else if (*VAR_1 == 2 && FUNC_0(VAR_0[1])) {
  VAR_2 = VAR_0[0] & 0x1F;
  VAR_2 = (VAR_2 << 6) | (VAR_0[1] & 0x3F);
 }
 else if (*VAR_1 == 3 && FUNC_0(VAR_0[1]) && FUNC_0(VAR_0[2])) {
  VAR_2 = ((unsigned char)VAR_0[0]) & 0xF;
  VAR_2 = (VAR_2 << 6) | (VAR_0[1] & 0x3F);
  VAR_2 = (VAR_2 << 6) | (VAR_0[2] & 0x3F);
 }
 else if (*VAR_1 == 4 && FUNC_0(VAR_0[1]) && FUNC_0(VAR_0[2]) && FUNC_0(VAR_0[3])) {
  VAR_2 = VAR_0[0] & 0x7;
  VAR_2 = (VAR_2 << 6) | (VAR_0[1] & 0x3F);
  VAR_2 = (VAR_2 << 6) | (VAR_0[2] & 0x3F);
  VAR_2 = (VAR_2 << 6) | (VAR_0[3] & 0x3F);
 }
 else {
  return 0;
 }


 if ((VAR_2 < 0x80 && *VAR_1 > 1) ||
  (VAR_2 < 0x800 && *VAR_1 > 2) ||
  (VAR_2 < 0x10000 && *VAR_1 > 3)) {
   return 0;
 }


 if (VAR_2 > 0x10FFFF) {
  return 0;
 }


 if (VAR_2 >= 0xD800 && VAR_2 <= 0xDFFF) {
  return 0;
 }

 return 1;
}
