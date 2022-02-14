
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curlioerr ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static curlioerr FUNC_1(CURL *VAR_4, int VAR_5, void *VAR_6)
{
  (void)VAR_6;
  if(VAR_5 == VAR_0) {
    FUNC_0("APPLICATION: received a CURLIOCMD_RESTARTREAD request\n");
    FUNC_0("APPLICATION: ** REWINDING! **\n");
    VAR_3 = 0;
    return VAR_1;
  }
  (void)VAR_4;
  return VAR_2;
}
