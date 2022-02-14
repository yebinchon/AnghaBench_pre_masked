
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_4, void (*VAR_5)(void))
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 const char *VAR_11;

 VAR_11 = VAR_4;
 for (VAR_8 = 1, VAR_9 = 0; *VAR_11 != 0; VAR_8++) {
  for (VAR_10 = 0; *VAR_11 != 0 && *VAR_11 != '\n'; VAR_11++)
   VAR_10++;

  if (VAR_10 > VAR_9)
   VAR_9 = VAR_10;
  if (*VAR_11 == 0)
   break;
  VAR_11++;
 }

 VAR_6 = VAR_1 / 2 - VAR_9 * VAR_3 / 2;
 VAR_7 = VAR_0 / 2 - VAR_8 * VAR_2 / 2;
 if (VAR_6 < 0) VAR_6 = 0;
 if (VAR_7 < 0) VAR_7 = 0;

 FUNC_0(1, 0);

 for (VAR_11 = VAR_4; *VAR_11 != 0 && VAR_7 <= VAR_0 - VAR_2; VAR_7 += VAR_2) {
  FUNC_3(VAR_6, VAR_7, VAR_11);

  for (; *VAR_11 != 0 && *VAR_11 != '\n'; VAR_11++)
   ;
  if (*VAR_11 != 0)
   VAR_11++;
 }

 FUNC_2();

 if (VAR_5 != ((void*)0))
  VAR_5();

 FUNC_1();
}
