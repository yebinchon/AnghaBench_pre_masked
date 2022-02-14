
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*,int) ;

char *FUNC_8(const char *VAR_0)
{
  size_t VAR_1 = FUNC_6(VAR_0);
  char *VAR_2;
  size_t VAR_3 = VAR_1;
  char *VAR_4 = FUNC_1(VAR_1 + 1);
  char *VAR_5;
  char *VAR_6;
  char *VAR_7;
  if(!VAR_4)
    return ((void*)0);

  *VAR_4 = 0;


  VAR_2 = FUNC_5(VAR_0);
  if(!VAR_2) {
    FUNC_0(VAR_4);
    return ((void*)0);
  }
  VAR_6 = VAR_2;
  VAR_5 = VAR_4;

  if(!*VAR_2) {

    FUNC_0(VAR_4);
    return VAR_2;
  }






  VAR_7 = FUNC_3(VAR_2, '?');
  if(VAR_7)
    *VAR_7 = 0;

  do {




    if(!FUNC_7("./", VAR_2, 2)) {
      VAR_2 += 2;
      VAR_3 -= 2;
    }
    else if(!FUNC_7("../", VAR_2, 3)) {
      VAR_2 += 3;
      VAR_3 -= 3;
    }




    else if(!FUNC_7("/./", VAR_2, 3)) {
      VAR_2 += 2;
      VAR_3 -= 2;
    }
    else if(!FUNC_4("/.", VAR_2)) {
      VAR_2[1]='/';
      VAR_2++;
      VAR_3 -= 1;
    }






    else if(!FUNC_7("/../", VAR_2, 4)) {
      VAR_2 += 3;
      VAR_3 -= 3;

      while(VAR_5 > VAR_4) {
        VAR_5--;
        if(*VAR_5 == '/')
          break;
      }
      *VAR_5 = 0;
    }
    else if(!FUNC_4("/..", VAR_2)) {
      VAR_2[2]='/';
      VAR_2 += 2;
      VAR_3 -= 2;

      while(VAR_5 > VAR_4) {
        VAR_5--;
        if(*VAR_5 == '/')
          break;
      }
      *VAR_5 = 0;
    }




    else if(!FUNC_4(".", VAR_2) || !FUNC_4("..", VAR_2)) {
      *VAR_2 = 0;
      *VAR_4 = 0;
    }

    else {





      do {
        *VAR_5++ = *VAR_2++;
        VAR_3--;
      } while(*VAR_2 && (*VAR_2 != '/'));
      *VAR_5 = 0;
    }

  } while(*VAR_2);

  if(VAR_7) {
    size_t VAR_8;



    size_t VAR_9 = VAR_7 - VAR_6;
    VAR_8 = FUNC_6(&VAR_0[VAR_9]);
    FUNC_2(VAR_5, &VAR_0[VAR_9], VAR_8 + 1);
  }

  FUNC_0(VAR_6);
  return VAR_4;
}
