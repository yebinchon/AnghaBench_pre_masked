
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static CURLcode FUNC_4(void)
{
  int VAR_4;
  VAR_2 = FUNC_2();
  if(!VAR_2)
    return VAR_1;

  VAR_4 = FUNC_0(&VAR_3);
  if(VAR_4) {
    FUNC_1(VAR_2);
    FUNC_3();
    return VAR_1;
  }
  return VAR_0;
}
