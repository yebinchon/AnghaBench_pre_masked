
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov511_frame {unsigned int rawwidth; unsigned int rawheight; } ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned int const) ;

__attribute__((used)) static void
FUNC_1(struct ov511_frame *VAR_0,
       unsigned char *VAR_1, unsigned char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 unsigned char *VAR_6, *VAR_7, *VAR_8;
 const unsigned int VAR_9 = VAR_0->rawwidth * VAR_0->rawheight;
 const unsigned int VAR_10 = VAR_0->rawwidth / 2;


 VAR_6 = VAR_1;
 VAR_8 = VAR_2 + VAR_9;
 for (VAR_5 = 0; VAR_5 < VAR_0->rawheight - 1; VAR_5 += 16) {
  VAR_7 = VAR_8;
  for (VAR_4 = 0; VAR_4 < VAR_0->rawwidth - 1; VAR_4 += 16) {
   FUNC_0(VAR_6, VAR_7, VAR_10);
   FUNC_0(VAR_6 + 64, VAR_7 + VAR_9/4, VAR_10);
   VAR_6 += 384;
   VAR_7 += 8;
  }
  VAR_8 += 8 * VAR_10;
 }


 VAR_6 = VAR_1 + 128;
 VAR_8 = VAR_2;
 VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0->rawheight - 1; VAR_5 += 8) {
  VAR_7 = VAR_8;
  for (VAR_4 = 0; VAR_4 < VAR_0->rawwidth - 1; VAR_4 += 8) {
   FUNC_0(VAR_6, VAR_7, VAR_0->rawwidth);
   VAR_6 += 64;
   VAR_7 += 8;
   if ((++VAR_3) > 3) {
    VAR_3 = 0;
    VAR_6 += 128;
   }
  }
  VAR_8 += 8 * VAR_0->rawwidth;
 }
}
