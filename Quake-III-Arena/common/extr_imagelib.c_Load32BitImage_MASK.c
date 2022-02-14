
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,int**,int**,int*,int*) ;
 int FUNC_2 (char const*,int**,int*,int*) ;
 int FUNC_3 (char*,char*) ;
 int* FUNC_4 (int) ;

void FUNC_5 (const char *VAR_0, unsigned **VAR_1, int *VAR_2, int *VAR_3)
{
 char VAR_4[128];
 byte *VAR_5;
 byte *VAR_6;
 byte *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_0 (VAR_0, VAR_4);
 if (!FUNC_3 (VAR_4, "tga")) {
  FUNC_2 (VAR_0, (byte **)VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_1 (VAR_0, &VAR_6, &VAR_5, VAR_2, VAR_3);
  if (!VAR_1) {
   return;
  }
  VAR_8 = *VAR_2 * *VAR_3;
  VAR_7 = FUNC_4(VAR_8 * 4);
  *VAR_1 = (unsigned *)VAR_7;
  for (VAR_9 = 0 ; VAR_9 < VAR_8 ; VAR_9++) {
   VAR_10 = VAR_6[VAR_9];
   VAR_7[VAR_9*4 + 0] = VAR_5[ VAR_10 * 3 + 0 ];
   VAR_7[VAR_9*4 + 1] = VAR_5[ VAR_10 * 3 + 1 ];
   VAR_7[VAR_9*4 + 2] = VAR_5[ VAR_10 * 3 + 2 ];
   VAR_7[VAR_9*4 + 3] = 0xff;
  }
 }
}
