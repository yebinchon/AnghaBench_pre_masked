
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,size_t*,char**,size_t*) ;

__attribute__((used)) static CURLcode FUNC_1(char *VAR_3, size_t VAR_4)
{
  char *VAR_5, *VAR_6;
  size_t VAR_7 = VAR_4;
  int VAR_8;
  VAR_5 = VAR_6 = VAR_3;
  VAR_8 = FUNC_0(&VAR_5, &VAR_7, &VAR_6, &VAR_7);
  if(VAR_8 == VAR_2) {
    return VAR_1;
  }
  else {
    return VAR_0;
  }
}
