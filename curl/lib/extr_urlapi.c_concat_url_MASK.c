
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char const*) ;
 size_t FUNC_6 (char*) ;
 size_t FUNC_7 (char const*,int) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*,char*) ;

__attribute__((used)) static char *FUNC_10(const char *VAR_2, const char *VAR_3)
{





  char *VAR_4;
  char *VAR_5;
  char *VAR_6;
  size_t VAR_7;
  bool VAR_8 = VAR_0;

  const char *VAR_9 = VAR_3;
  size_t VAR_10;



  char *VAR_11 = FUNC_5(VAR_2);

  if(!VAR_11)
    return ((void*)0);


  VAR_5 = FUNC_9(VAR_11, "//");
  if(!VAR_5)
    VAR_5 = VAR_11;
  else
    VAR_5 += 2;

  if('/' != VAR_3[0]) {
    int VAR_12 = 0;



    VAR_6 = FUNC_3(VAR_5, '?');
    if(VAR_6)
      *VAR_6 = 0;





    if(VAR_9[0] != '?') {
      VAR_6 = FUNC_8(VAR_5, '/');
      if(VAR_6)
        *VAR_6 = 0;
    }



    VAR_6 = FUNC_3(VAR_5, '/');
    if(VAR_6)
      VAR_5 = VAR_6 + 1;
    else
      VAR_5 = ((void*)0);




    if((VAR_9[0] == '.') && (VAR_9[1] == '/'))
      VAR_9 += 2;

    while((VAR_9[0] == '.') &&
          (VAR_9[1] == '.') &&
          (VAR_9[2] == '/')) {
      VAR_12++;
      VAR_9 += 3;
    }

    if(VAR_5) {
      while(VAR_12--) {

        VAR_6 = FUNC_8(VAR_5, '/');
        if(VAR_6)
          *VAR_6 = 0;
        else {
          *VAR_5 = 0;
          break;
        }
      }
    }
  }
  else {


    if(VAR_3[1] == '/') {


      *VAR_5 = 0;
      VAR_9 = &VAR_3[2];

      VAR_8 = VAR_1;
    }
    else {


      VAR_6 = FUNC_3(VAR_5, '/');
      if(VAR_6) {



        char *VAR_13 = FUNC_3(VAR_5, '?');
        if(VAR_13 && (VAR_13 < VAR_6))
          VAR_6 = VAR_13;
        *VAR_6 = 0;
      }
      else {




        VAR_6 = FUNC_3(VAR_5, '?');
        if(VAR_6)
          *VAR_6 = 0;
      }
    }
  }






  VAR_7 = FUNC_7(VAR_9, !VAR_8);

  VAR_10 = FUNC_6(VAR_11);

  VAR_4 = FUNC_1(VAR_10 + 1 +
                  VAR_7 + 1 );

  if(!VAR_4) {
    FUNC_0(VAR_11);
    return ((void*)0);
  }


  FUNC_2(VAR_4, VAR_11, VAR_10);


  if(('/' == VAR_9[0]) || (VAR_5 && !*VAR_5) || ('?' == VAR_9[0]))
    ;
  else
    VAR_4[VAR_10++]='/';


  FUNC_4(&VAR_4[VAR_10], VAR_9, !VAR_8);

  FUNC_0(VAR_11);

  return VAR_4;
}
