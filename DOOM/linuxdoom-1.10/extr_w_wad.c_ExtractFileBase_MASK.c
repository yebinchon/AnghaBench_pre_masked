
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

void
FUNC_4
( char* VAR_0,
  char* VAR_1 )
{
    char* VAR_2;
    int VAR_3;

    VAR_2 = VAR_0 + FUNC_2(VAR_0) - 1;


    while (VAR_2 != VAR_0
    && *(VAR_2-1) != '\\'
    && *(VAR_2-1) != '/')
    {
 VAR_2--;
    }


    FUNC_1 (VAR_1,0,8);
    VAR_3 = 0;

    while (*VAR_2 && *VAR_2 != '.')
    {
 if (++VAR_3 == 9)
     FUNC_0 ("Filename base of %s >8 chars",VAR_0);

 *VAR_1++ = FUNC_3((int)*VAR_2++);
    }
}
