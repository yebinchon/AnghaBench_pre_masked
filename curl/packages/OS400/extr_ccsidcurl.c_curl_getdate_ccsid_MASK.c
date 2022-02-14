
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int const*) ;
 char* FUNC_1 (int ,char const*,int,unsigned int) ;
 int FUNC_2 (char*) ;

time_t
FUNC_3(const char *VAR_1, const time_t * VAR_2, unsigned int VAR_3)

{
  char *VAR_4;
  time_t VAR_5;

  if(!VAR_1)
    return FUNC_0(VAR_1, VAR_2);

  VAR_4 = FUNC_1(VAR_0, VAR_1, -1, VAR_3);

  if(!VAR_4)
    return (time_t) -1;

  VAR_5 = FUNC_0(VAR_4, VAR_2);
  FUNC_2(VAR_4);
  return VAR_5;
}
