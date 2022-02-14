
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 char const VAR_5 ;
 int FUNC_4 (int ) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(void)
{
 UWORD VAR_9;
 const char *VAR_10;

 if (VAR_7)
  FUNC_1("To Absolute Path Command");

 if (FUNC_0(VAR_4) == 0)
  return;



 if (!FUNC_4(VAR_8)) {
  VAR_2 = 150;
  VAR_1;
  return;
 }

 VAR_9 = FUNC_3(VAR_3);
 if (VAR_6[0] != '\0') {
  FUNC_2(VAR_9, '>');
  VAR_9++;
  for (VAR_10 = VAR_6; *VAR_10 != '\0'; VAR_10++) {
   if (*VAR_10 == VAR_5) {
    if (VAR_10[1] == '\0')
     break;
    FUNC_2(VAR_9, '>');
   }
   else
    FUNC_2(VAR_9, (UBYTE) *VAR_10);
   VAR_9++;
  }
 }
 FUNC_2(VAR_9, 0x00);

 VAR_2 = 1;
 VAR_0;
}
