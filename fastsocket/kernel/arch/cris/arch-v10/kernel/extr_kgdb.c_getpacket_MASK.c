
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char FUNC_1 () ;
 unsigned char FUNC_2 (char) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_1)
{
 unsigned char VAR_2;
 unsigned char VAR_3;
 int VAR_4;
 int VAR_5;
 char VAR_6;
 do {
  while ((VAR_6 = FUNC_1 ()) != '$')
                                                                       ;
  VAR_2 = 0;
  VAR_3 = -1;
  VAR_5 = 0;

  while (VAR_5 < VAR_0) {
   VAR_6 = FUNC_1 ();
   if (VAR_6 == '#')
    break;
   VAR_2 = VAR_2 + VAR_6;
   VAR_1[VAR_5] = VAR_6;
   VAR_5 = VAR_5 + 1;
  }
  VAR_1[VAR_5] = '\0';

  if (VAR_6 == '#') {
   VAR_3 = FUNC_2 (FUNC_1 ()) << 4;
   VAR_3 += FUNC_2 (FUNC_1 ());
   if (VAR_2 != VAR_3) {

    FUNC_3 ('-');
   }
   else {

    FUNC_3 ('+');

    if (VAR_1[2] == ':') {
     FUNC_3 (VAR_1[0]);
     FUNC_3 (VAR_1[1]);

     VAR_5 = FUNC_0 (VAR_1);
     for (VAR_4 = 3; VAR_4 <= VAR_5; VAR_4++)
      VAR_1[VAR_4 - 3] = VAR_1[VAR_4];
    }
   }
  }
 } while (VAR_2 != VAR_3);
}
