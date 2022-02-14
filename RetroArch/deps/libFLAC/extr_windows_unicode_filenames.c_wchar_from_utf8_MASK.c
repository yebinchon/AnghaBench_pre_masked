
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static wchar_t *FUNC_3(const char *VAR_1)
{
 wchar_t *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return ((void*)0);
 if ((VAR_3 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0)) == 0)
  return ((void*)0);
 if ((VAR_2 = (wchar_t *)FUNC_2(VAR_3*sizeof(wchar_t))) == ((void*)0))
  return ((void*)0);
 if (FUNC_0(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3) == 0) {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
