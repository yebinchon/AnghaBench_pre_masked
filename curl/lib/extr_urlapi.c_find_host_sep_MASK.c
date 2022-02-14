
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0)
{
  const char *VAR_1;
  const char *VAR_2;


  VAR_1 = FUNC_2(VAR_0, "//");
  if(!VAR_1)
    VAR_1 = VAR_0;
  else
    VAR_1 += 2;

  VAR_2 = FUNC_0(VAR_1, '?');
  VAR_1 = FUNC_0(VAR_1, '/');

  if(!VAR_1)
    VAR_1 = VAR_0 + FUNC_1(VAR_0);

  if(!VAR_2)
    VAR_2 = VAR_0 + FUNC_1(VAR_0);

  return VAR_1 < VAR_2 ? VAR_1 : VAR_2;
}
