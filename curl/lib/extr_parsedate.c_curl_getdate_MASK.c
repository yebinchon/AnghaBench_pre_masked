
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*) ;

time_t FUNC_1(const char *VAR_1, const time_t *VAR_2)
{
  time_t VAR_3 = -1;
  int VAR_4 = FUNC_0(VAR_1, &VAR_3);
  (void)VAR_2;

  if(VAR_4 == VAR_0) {
    if(VAR_3 == -1)

      VAR_3++;
    return VAR_3;
  }

  return -1;
}
