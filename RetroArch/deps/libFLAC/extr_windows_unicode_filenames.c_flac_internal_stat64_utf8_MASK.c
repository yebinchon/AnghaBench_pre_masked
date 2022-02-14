
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct __stat64 {int dummy; } ;


 int FUNC_0 (char const*,struct __stat64*) ;
 int FUNC_1 (int *,struct __stat64*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_1, struct __stat64 *VAR_2)
{
 if (!VAR_0) {
  return FUNC_0(VAR_1, VAR_2);
 } else {
  wchar_t *VAR_3;
  int VAR_4;

  if (!(VAR_3 = FUNC_3(VAR_1))) return -1;
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  FUNC_2(VAR_3);

  return VAR_4;
 }
}
