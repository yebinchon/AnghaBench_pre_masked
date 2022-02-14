
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curlioerr ;
typedef int curliocmd ;
typedef int CURL ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static curlioerr FUNC_1(CURL *VAR_4, curliocmd VAR_5, void *VAR_6)
{
  int *VAR_7 = (int *)VAR_6;
  int VAR_8 = *VAR_7;

  (void)VAR_4;

  switch(VAR_5) {
  case 128:

    if(-1 == FUNC_0(VAR_8, 0, VAR_3))

      return VAR_0;

    break;

  default:
    return VAR_2;
  }
  return VAR_1;
}
