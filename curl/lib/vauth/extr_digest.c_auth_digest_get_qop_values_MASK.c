
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*,char**) ;

__attribute__((used)) static CURLcode FUNC_4(const char *VAR_8, int *VAR_9)
{
  char *VAR_10;
  char *VAR_11;
  char *VAR_12 = ((void*)0);


  *VAR_9 = 0;



  VAR_10 = FUNC_2(VAR_8);
  if(!VAR_10)
    return VAR_1;

  VAR_11 = FUNC_3(VAR_10, ",", &VAR_12);
  while(VAR_11 != ((void*)0)) {
    if(FUNC_1(VAR_11, VAR_5))
      *VAR_9 |= VAR_2;
    else if(FUNC_1(VAR_11, VAR_7))
      *VAR_9 |= VAR_4;
    else if(FUNC_1(VAR_11, VAR_6))
      *VAR_9 |= VAR_3;

    VAR_11 = FUNC_3(((void*)0), ",", &VAR_12);
  }

  FUNC_0(VAR_10);

  return VAR_0;
}
