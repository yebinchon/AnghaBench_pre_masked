
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 char const VAR_0 ;
 char const VAR_1 ;
 char const VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 char FUNC_0 (unsigned char) ;

__attribute__((used)) static bool FUNC_1 (const u8* VAR_6, char* VAR_7) {
 char VAR_8;
 bool VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 VAR_7[0] = '\0';
 if (VAR_6[0] != VAR_2) {
  if (VAR_6[0] == '.') {
   VAR_7[0] = '.';
   if (VAR_6[1] == '.') {
    VAR_7[1] = '.';
    VAR_7[2] = '\0';
   } else {
    VAR_7[1] = '\0';
   }
  } else {

   VAR_9 = VAR_6[VAR_3] & VAR_0;
   for (VAR_10 = 0; (VAR_10 < 8) && (VAR_6[VAR_5 + VAR_10] != ' '); VAR_10++) {
    VAR_8 = VAR_6[VAR_5 + VAR_10];
    VAR_7[VAR_10] = (VAR_9 ? FUNC_0((unsigned char)VAR_8) : VAR_8);
   }

   if (VAR_6[VAR_4] != ' ') {
    VAR_7[VAR_10++] = '.';
    VAR_9 = VAR_6[VAR_3] & VAR_1;
    for ( VAR_11 = 0; (VAR_11 < 3) && (VAR_6[VAR_4 + VAR_11] != ' '); VAR_11++) {
     VAR_8 = VAR_6[VAR_4 + VAR_11];
     VAR_7[VAR_10++] = (VAR_9 ? FUNC_0((unsigned char)VAR_8) : VAR_8);
    }
   }
   VAR_7[VAR_10] = '\0';
  }
 }

 return (VAR_7[0] != '\0');
}
