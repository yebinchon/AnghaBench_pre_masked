
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,size_t) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, size_t VAR_1,
                                   const char **VAR_2, const char **VAR_3)
{
  size_t VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1);
  VAR_4++;

  if(VAR_4 >= VAR_1)
    return ((void*)0);
  *VAR_2 = VAR_0;

  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1-VAR_4);
  VAR_4++;

  if(VAR_4 > VAR_1)
    return ((void*)0);
  *VAR_3 = &VAR_0[FUNC_1(*VAR_2) + 1];

  return &VAR_0[VAR_4];
}
