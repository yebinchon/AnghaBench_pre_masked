
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct alias {unsigned int encoding_index; } ;


 int VAR_0 ;
 struct alias* FUNC_0 (char*) ;
 struct alias* FUNC_1 (char*,int) ;
 int* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* VAR_7 ;
 char* VAR_8 ;

const char * FUNC_4 (const char * VAR_9)
{
  const char* VAR_10;
  char VAR_11[VAR_0+10+1];
  const char* VAR_12;
  char* VAR_13;
  const struct alias * VAR_14;
  unsigned int VAR_15;
  unsigned int VAR_16;
  const char* VAR_17;






  for (VAR_10 = VAR_9;;) {

    for (VAR_12 = VAR_10, VAR_13 = VAR_11, VAR_15 = VAR_0+10+1; ; VAR_12++, VAR_13++) {
      unsigned char VAR_18 = * (unsigned char *) VAR_12;
      if (VAR_18 >= 0x80)
        goto invalid;
      if (VAR_18 >= 'a' && VAR_18 <= 'z')
        VAR_18 -= 'a'-'A';
      *VAR_13 = VAR_18;
      if (VAR_18 == '\0')
        break;
      if (--VAR_15 == 0)
        goto invalid;
    }
    for (;;) {
      if (VAR_13-VAR_11 >= 10 && FUNC_3(VAR_13-10,"//TRANSLIT",10)==0) {
        VAR_13 -= 10;
        *VAR_13 = '\0';
        continue;
      }
      if (VAR_13-VAR_11 >= 8 && FUNC_3(VAR_13-8,"//IGNORE",8)==0) {
        VAR_13 -= 8;
        *VAR_13 = '\0';
        continue;
      }
      break;
    }
    if (VAR_11[0] == '\0') {
      VAR_10 = FUNC_2();


      if (VAR_10[0] == '\0')
        goto invalid;
      continue;
    }
    VAR_17 = VAR_7;
    VAR_14 = FUNC_1(VAR_11,VAR_13-VAR_11);
    if (VAR_14 == ((void*)0)) {
      VAR_17 = VAR_8;
      VAR_14 = FUNC_0(VAR_11);
      if (VAR_14 == ((void*)0))
        goto invalid;
    }
    if (VAR_14->encoding_index == VAR_3) {
      VAR_10 = FUNC_2();


      if (VAR_10[0] == '\0')
        goto invalid;
      continue;
    }
    if (VAR_14->encoding_index == VAR_4) {
    }
    VAR_16 = VAR_14->encoding_index;
    break;
  }
  return VAR_1[VAR_16] + VAR_17;
 invalid:
  return VAR_9;
}
