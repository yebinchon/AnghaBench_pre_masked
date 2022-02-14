
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct ivtv *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0, VAR_4 = 16, VAR_5 = 4; VAR_3 < 16; VAR_3++, VAR_4 += 24, VAR_5 += 12) {
  if ((FUNC_1(VAR_0 + VAR_4) != VAR_3 << 16) ||
      (FUNC_1(VAR_1 + VAR_5) != VAR_3 << 16)) {
   FUNC_0 ("YUV filter table not found in firmware.\n");
   return -1;
  }
 }
 return 0;
}
