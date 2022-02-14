
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int byte ;
typedef int FILE ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int *,int,int ) ;
 int * FUNC_7 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_8 (const char *VAR_4, byte **VAR_5, byte **VAR_6, int *VAR_7, int *VAR_8)
{
 byte *VAR_9;
 FILE *VAR_10;
 int VAR_11;
    int VAR_12;
    int VAR_13;
 int VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;
 byte VAR_19[1024];
 qboolean VAR_20;

 VAR_10 = FUNC_4 (VAR_4, "rb");
 if (!VAR_10) {
  FUNC_0 ("Couldn't read %s", VAR_4);
 }

 VAR_11 = FUNC_3 (VAR_10);
 if (VAR_11 != 'B' + ('M'<<8) ) {
  FUNC_0 ("%s is not a bmp file", VAR_4);
 }

 VAR_12 = FUNC_2 (VAR_10);
 FUNC_3(VAR_10);
 FUNC_3(VAR_10);
 VAR_13 = FUNC_2 (VAR_10);



 VAR_14 = FUNC_2 (VAR_10);
 if (VAR_14 == 40) {

        VAR_15 = FUNC_2(VAR_10);
        VAR_16= FUNC_2(VAR_10);
        VAR_17 = FUNC_3(VAR_10);
        VAR_18 = FUNC_3(VAR_10);

  FUNC_6 (VAR_10, 24, VAR_0);

  if (VAR_6) {
   FUNC_5 (VAR_19, 1, 1024, VAR_10);
   *VAR_6 = FUNC_7(768);

   for (VAR_11 = 0 ; VAR_11 < 256 ; VAR_11++) {
    (*VAR_6)[VAR_11 * 3 + 0] = VAR_19[VAR_11 * 4 + 2];
    (*VAR_6)[VAR_11 * 3 + 1] = VAR_19[VAR_11 * 4 + 1];
    (*VAR_6)[VAR_11 * 3 + 2] = VAR_19[VAR_11 * 4 + 0];
   }
  }
 } else if (VAR_14 == 12) {

        VAR_15 = FUNC_3(VAR_10);
        VAR_16= FUNC_3(VAR_10);
        VAR_17 = FUNC_3(VAR_10);
        VAR_18 = FUNC_3(VAR_10);

  if (VAR_6) {
   FUNC_5 (VAR_19, 1, 768, VAR_10);
   *VAR_6 = FUNC_7(768);

   for (VAR_11 = 0 ; VAR_11 < 256 ; VAR_11++) {
    (*VAR_6)[VAR_11 * 3 + 0] = VAR_19[VAR_11 * 3 + 2];
    (*VAR_6)[VAR_11 * 3 + 1] = VAR_19[VAR_11 * 3 + 1];
    (*VAR_6)[VAR_11 * 3 + 2] = VAR_19[VAR_11 * 3 + 0];
   }
  }
 } else {
  FUNC_0 ("%s had strange struct size", VAR_4);
 }

 if (VAR_17 != 1) {
  FUNC_0 ("%s was not a single plane image", VAR_4);
 }

 if (VAR_18 != 8) {
  FUNC_0 ("%s was not an 8 bit image", VAR_4);
 }

 if (VAR_16 < 0) {
  VAR_16 = -VAR_16;
  VAR_20 = VAR_3;
 } else {
  VAR_20 = VAR_2;
 }

 if (VAR_7)
  *VAR_7 = VAR_15;
 if (VAR_8)
  *VAR_8 = VAR_16;

 if (!VAR_5) {
  FUNC_1 (VAR_10);
  return;
 }

 VAR_9 = FUNC_7 ( VAR_15 * VAR_16 );
 *VAR_5 = VAR_9;
 FUNC_6 (VAR_10, VAR_13, VAR_1);

 if (VAR_20) {
  for (VAR_11 = 0 ; VAR_11 < VAR_16 ; VAR_11++) {
   FUNC_5 (VAR_9 + VAR_15 * (VAR_16 - 1 - VAR_11), 1, VAR_15, VAR_10);
  }
 } else {
  FUNC_5 (VAR_9, 1, VAR_15*VAR_16, VAR_10);
 }

 FUNC_1 (VAR_10);
}
