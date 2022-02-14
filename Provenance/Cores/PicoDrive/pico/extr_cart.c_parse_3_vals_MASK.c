
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
  char *VAR_4;
  *VAR_1 = FUNC_1(VAR_0, &VAR_4, 0);
  if (VAR_4 == VAR_0)
    goto bad;
  VAR_0 = FUNC_0(VAR_4);
  if (*VAR_0++ != ',')
    goto bad;
  *VAR_2 = FUNC_1(VAR_0, &VAR_4, 0);
  if (VAR_4 == VAR_0)
    goto bad;
  VAR_0 = FUNC_0(VAR_4);
  if (*VAR_0++ != ',')
    goto bad;
  *VAR_3 = FUNC_1(VAR_0, &VAR_4, 0);
  if (VAR_4 == VAR_0)
    goto bad;

  return 1;
bad:
  return 0;
}
