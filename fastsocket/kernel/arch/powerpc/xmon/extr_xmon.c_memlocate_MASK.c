
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (unsigned int,unsigned char*,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,unsigned int,int) ;
 int FUNC_3 (void*) ;
 char VAR_5 ;

__attribute__((used)) static void
FUNC_4(void)
{
 unsigned VAR_6, VAR_7;
 unsigned char VAR_8[4];

 VAR_0 = "ml";
 FUNC_3((void *)&VAR_2);
 if (VAR_5 != '\n') {
  VAR_5 = 0;
  FUNC_3((void *)&VAR_3);
  if (VAR_5 != '\n') {
   VAR_5 = 0;
   FUNC_3((void *)&VAR_4);
   VAR_1 = ~0;
   if (VAR_5 != '\n') VAR_5 = 0;
   FUNC_3((void *)&VAR_1);
  }
 }
 VAR_7 = 0;
 for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6 += 4) {
  if (FUNC_1(VAR_6, VAR_8, 4) == 4
   && ((FUNC_0(VAR_8) ^ VAR_4) & VAR_1) == 0) {
   FUNC_2("%.16x:  %.16x\n", VAR_6, FUNC_0(VAR_8));
   if (++VAR_7 >= 10)
    break;
  }
 }
}
