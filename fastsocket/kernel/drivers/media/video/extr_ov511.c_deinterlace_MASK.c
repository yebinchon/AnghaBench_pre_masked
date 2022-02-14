
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov511_frame {int rawheight; int const rawwidth; int width; int height; } ;


 int FUNC_0 (int,char*,int const) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct ov511_frame *VAR_1, int VAR_2,
     unsigned char *VAR_3, unsigned char *VAR_4)
{
 const int VAR_5 = VAR_1->rawheight / 2;
 const int VAR_6 = VAR_5 * VAR_1->rawwidth;
 const int VAR_7 = VAR_1->width;
 int VAR_8, VAR_9;
 unsigned char *VAR_10, *VAR_11, *VAR_12;

 FUNC_0(5, "fieldheight=%d", VAR_5);

 if (VAR_1->rawheight != VAR_1->height) {
  FUNC_1("invalid height");
  return;
 }

 if ((VAR_1->rawwidth * 2) != VAR_1->width) {
  FUNC_1("invalid width");
  return;
 }


 VAR_11 = VAR_3;
 VAR_10 = VAR_11 + VAR_6;
 VAR_12 = VAR_4;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  for (VAR_8 = 0; VAR_8 < VAR_1->rawwidth; VAR_8++) {
   *VAR_12 = *VAR_10;
   *(VAR_12+1) = *VAR_10++;
   *(VAR_12+VAR_7) = *VAR_11;
   *(VAR_12+VAR_7+1) = *VAR_11++;
   VAR_12 += 2;
  }
  VAR_12 += VAR_7;
 }

 if (VAR_2 == VAR_0) {

  VAR_11 = VAR_3 + VAR_6 * 2;
  VAR_10 = VAR_11 + VAR_6 / 4;
  for (VAR_9 = 0; VAR_9 < VAR_5 / 2; VAR_9++) {
   for (VAR_8 = 0; VAR_8 < VAR_1->rawwidth / 2; VAR_8++) {
    *VAR_12 = *VAR_10;
    *(VAR_12+1) = *VAR_10++;
    *(VAR_12+VAR_7/2) = *VAR_11;
    *(VAR_12+VAR_7/2+1) = *VAR_11++;
    VAR_12 += 2;
   }
   VAR_12 += VAR_7/2;
  }

  VAR_11 = VAR_3 + VAR_6 * 2 + VAR_6 / 2;
  VAR_10 = VAR_11 + VAR_6 / 4;
  for (VAR_9 = 0; VAR_9 < VAR_5 / 2; VAR_9++) {
   for (VAR_8 = 0; VAR_8 < VAR_1->rawwidth / 2; VAR_8++) {
    *VAR_12 = *VAR_10;
    *(VAR_12+1) = *VAR_10++;
    *(VAR_12+VAR_7/2) = *VAR_11;
    *(VAR_12+VAR_7/2+1) = *VAR_11++;
    VAR_12 += 2;
   }
   VAR_12 += VAR_7/2;
  }
 }
}
