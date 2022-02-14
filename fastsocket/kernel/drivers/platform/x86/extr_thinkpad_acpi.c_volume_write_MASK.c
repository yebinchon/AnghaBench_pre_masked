
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (char**) ;
 int FUNC_4 (char*,char*,int*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(char *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11;
 int VAR_12, VAR_13;
 char *VAR_14;

 while ((VAR_14 = FUNC_3(&VAR_6))) {
  if (!FUNC_0(VAR_5, &VAR_10))
   return -VAR_1;
  VAR_13 = VAR_11 = VAR_10 & 0x40;
  VAR_12 = VAR_10 = VAR_10 & 0xf;

  if (FUNC_5(VAR_14, "up") == 0) {
   if (VAR_11)
    VAR_13 = 0;
   else
    VAR_12 = VAR_10 == 15 ? 15 : VAR_10 + 1;
  } else if (FUNC_5(VAR_14, "down") == 0) {
   if (VAR_11)
    VAR_13 = 0;
   else
    VAR_12 = VAR_10 == 0 ? 0 : VAR_10 - 1;
  } else if (FUNC_4(VAR_14, "level %d", &VAR_12) == 1 &&
      VAR_12 >= 0 && VAR_12 <= 15) {

  } else if (FUNC_5(VAR_14, "mute") == 0) {
   VAR_13 = 0x40;
  } else
   return -VAR_0;

  if (VAR_12 != VAR_10) {


   VAR_7 = (VAR_12 > VAR_10) ?
     VAR_4 : VAR_2;
   VAR_8 = VAR_12 > VAR_10 ? 1 : -1;

   if (VAR_11 && (FUNC_2(VAR_7) ||
         !FUNC_1(VAR_5, VAR_10)))
    return -VAR_1;

   for (VAR_9 = VAR_10; VAR_9 != VAR_12; VAR_9 += VAR_8)
    if (FUNC_2(VAR_7) ||
        !FUNC_1(VAR_5, VAR_9 + VAR_8))
     return -VAR_1;

   if (VAR_11 &&
       (FUNC_2(VAR_3) ||
        !FUNC_1(VAR_5, VAR_12 + VAR_11))) {
    return -VAR_1;
   }
  }

  if (VAR_13 != VAR_11) {


   VAR_7 = (VAR_13) ?
       VAR_3 : VAR_4;

   if (FUNC_2(VAR_7) ||
       !FUNC_1(VAR_5, VAR_10 + VAR_13))
    return -VAR_1;
  }
 }

 return 0;
}
