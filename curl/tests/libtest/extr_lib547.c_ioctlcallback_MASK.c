
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curlioerr ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static curlioerr FUNC_1(CURL *VAR_3,
                               int VAR_4,
                               void *VAR_5)
{
  int *VAR_6 = (int *)VAR_5;
  (void)VAR_3;
  if(VAR_4 == VAR_0) {
    FUNC_0(VAR_2, "REWIND!\n");
    *VAR_6 = 0;
  }
  return VAR_1;
}
