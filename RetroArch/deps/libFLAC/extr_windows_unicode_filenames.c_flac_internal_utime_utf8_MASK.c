
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct utimbuf {int modtime; int actime; } ;
struct __utimbuf64 {int modtime; int actime; } ;


 int FUNC_0 (int *,struct __utimbuf64*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char const*,struct utimbuf*) ;
 int * FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_1, struct utimbuf *VAR_2)
{
 if (!VAR_0) {
  return FUNC_2(VAR_1, VAR_2);
 } else {
  wchar_t *VAR_3;
  struct __utimbuf64 VAR_4;
  int VAR_5;

  if (!(VAR_3 = FUNC_3(VAR_1))) return -1;
  VAR_4.actime = VAR_2->actime;
  VAR_4.modtime = VAR_2->modtime;
  VAR_5 = FUNC_0(VAR_3, &VAR_4);
  FUNC_1(VAR_3);

  return VAR_5;
 }
}
