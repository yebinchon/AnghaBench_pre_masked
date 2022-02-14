
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef scalar_t__ CURLSHcode ;
typedef scalar_t__ CURLMcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,char*) ;

int FUNC_4(char *VAR_7)
{
  int VAR_8 = 0;
  CURLcode VAR_9;
  CURLMcode VAR_10;
  CURLSHcode VAR_11;
  (void)VAR_7;

  FUNC_0(VAR_6);
  FUNC_1(VAR_6);
  FUNC_2(VAR_6);
  FUNC_0(-VAR_6);
  FUNC_1(-VAR_6);
  FUNC_2(-VAR_6);
  for(VAR_9 = VAR_0; VAR_9 <= VAR_5; VAR_9++) {
    FUNC_3("e%d: %s\n", (int)VAR_9, FUNC_0(VAR_9));
  }
  for(VAR_10 = VAR_1; VAR_10 <= VAR_2;
      VAR_10++) {
    FUNC_3("m%d: %s\n", (int)VAR_10, FUNC_1(VAR_10));
  }
  for(VAR_11 = VAR_4; VAR_11 <= VAR_3; VAR_11++) {
    FUNC_3("s%d: %s\n", (int)VAR_11, FUNC_2(VAR_11));
  }

  return (int)VAR_8;
}
