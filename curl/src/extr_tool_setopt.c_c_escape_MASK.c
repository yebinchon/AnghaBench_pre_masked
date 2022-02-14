
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (unsigned char) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_1, size_t VAR_2)
{
  const char *VAR_3;
  unsigned char VAR_4;
  char *VAR_5, *VAR_6;

  if(VAR_2 == VAR_0)
    VAR_2 = FUNC_4(VAR_1);


  if(VAR_2 > (~(size_t) 0) / 4)
    return ((void*)0);


  VAR_5 = FUNC_1(4 * VAR_2 + 1);
  if(!VAR_5)
    return ((void*)0);

  VAR_6 = VAR_5;
  for(VAR_3 = VAR_1; (VAR_4 = *VAR_3) != '\0'; VAR_3++) {
    if(VAR_4 == '\n') {
      FUNC_3(VAR_6, "\\n");
      VAR_6 += 2;
    }
    else if(VAR_4 == '\r') {
      FUNC_3(VAR_6, "\\r");
      VAR_6 += 2;
    }
    else if(VAR_4 == '\t') {
      FUNC_3(VAR_6, "\\t");
      VAR_6 += 2;
    }
    else if(VAR_4 == '\\') {
      FUNC_3(VAR_6, "\\\\");
      VAR_6 += 2;
    }
    else if(VAR_4 == '"') {
      FUNC_3(VAR_6, "\\\"");
      VAR_6 += 2;
    }
    else if(! FUNC_0(VAR_4)) {
      FUNC_2(VAR_6, 5, "\\%03o", (unsigned)VAR_4);
      VAR_6 += 4;
    }
    else
      *VAR_6++ = VAR_4;
  }
  *VAR_6 = '\0';
  return VAR_5;
}
