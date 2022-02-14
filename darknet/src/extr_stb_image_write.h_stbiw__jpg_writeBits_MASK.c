
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__write_context ;


 int FUNC_0 (int *,unsigned char) ;

__attribute__((used)) static void FUNC_1(stbi__write_context *VAR_0, int *VAR_1, int *VAR_2, const unsigned short *VAR_3) {
   int VAR_4 = *VAR_1, VAR_5 = *VAR_2;
   VAR_5 += VAR_3[1];
   VAR_4 |= VAR_3[0] << (24 - VAR_5);
   while(VAR_5 >= 8) {
      unsigned char VAR_6 = (VAR_4 >> 16) & 255;
      FUNC_0(VAR_0, VAR_6);
      if(VAR_6 == 255) {
         FUNC_0(VAR_0, 0);
      }
      VAR_4 <<= 8;
      VAR_5 -= 8;
   }
   *VAR_1 = VAR_4;
   *VAR_2 = VAR_5;
}
