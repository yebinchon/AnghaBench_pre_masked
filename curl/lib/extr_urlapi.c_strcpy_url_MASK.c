
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,int,char*,unsigned char const) ;
 int FUNC_2 (unsigned char const) ;

__attribute__((used)) static void FUNC_3(char *VAR_2, const char *VAR_3, bool VAR_4)
{

  bool VAR_5 = VAR_1;
  const unsigned char *VAR_6;
  char *VAR_7 = VAR_2;
  const unsigned char *VAR_8 = (const unsigned char *) VAR_3;

  if(!VAR_4)
    VAR_8 = (const unsigned char *) FUNC_0(VAR_3);

  for(VAR_6 = (unsigned char *)VAR_3;
      *VAR_6;
      VAR_6++) {

    if(VAR_6 < VAR_8) {
      *VAR_7++ = *VAR_6;
      continue;
    }

    switch(*VAR_6) {
    case '?':
      VAR_5 = VAR_0;

    default:
      if(FUNC_2(*VAR_6)) {
        FUNC_1(VAR_7, 4, "%%%02x", *VAR_6);
        VAR_7 += 3;
      }
      else
        *VAR_7++=*VAR_6;
      break;
    case ' ':
      if(VAR_5) {
        *VAR_7++='%';
        *VAR_7++='2';
        *VAR_7++='0';
      }
      else
        *VAR_7++='+';
      break;
    }
  }
  *VAR_7 = 0;

}
