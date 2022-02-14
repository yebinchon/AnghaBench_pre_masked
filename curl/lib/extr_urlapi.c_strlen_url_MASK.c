
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (unsigned char const) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_2, bool VAR_3)
{
  const unsigned char *VAR_4;
  size_t VAR_5 = 0;
  bool VAR_6 = VAR_1;
  const unsigned char *VAR_7 = (const unsigned char *) VAR_2;

  if(!VAR_3)
    VAR_7 = (const unsigned char *) FUNC_0(VAR_2);

  for(VAR_4 = (unsigned char *)VAR_2; *VAR_4; VAR_4++) {

    if(VAR_4 < VAR_7) {
      ++VAR_5;
      continue;
    }

    switch(*VAR_4) {
    case '?':
      VAR_6 = VAR_0;

    default:
      if(FUNC_1(*VAR_4))
        VAR_5 += 2;
      VAR_5++;
      break;
    case ' ':
      if(VAR_6)
        VAR_5 += 3;
      else
        VAR_5++;
      break;
    }
  }
  return VAR_5;
}
