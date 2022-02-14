
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,int,char const*,int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(int VAR_2, const char *VAR_3, int VAR_4, int VAR_5)

{
  char *VAR_6;
  char *VAR_7;
  size_t VAR_8;
  int VAR_9;
  static const char VAR_10 = 0;



  VAR_8 = (size_t) (VAR_4 < 0? FUNC_4(VAR_3): VAR_4) + 1;
  VAR_8 *= VAR_1;
  VAR_6 = FUNC_2(VAR_8);

  if(!VAR_6)
    return (char *) ((void*)0);

  VAR_9 = FUNC_0(VAR_6, VAR_8, VAR_2, VAR_3, VAR_4, VAR_5);

  if(VAR_9 < 0) {
    FUNC_1(VAR_6);
    return (char *) ((void*)0);
    }

  if(VAR_4 < 0) {




    int VAR_11 = FUNC_0(VAR_6 + VAR_9, VAR_8 - VAR_9, VAR_2, &VAR_10, -1, VAR_0);

    if(VAR_11 < 0) {
      FUNC_1(VAR_6);
      return (char *) ((void*)0);
      }

    VAR_9 += VAR_11;
    }

  if((size_t) VAR_9 < VAR_8) {
    VAR_7 = FUNC_3(VAR_6, VAR_9);

    if(VAR_7)
      VAR_6 = VAR_7;
    }

  return VAR_6;
}
