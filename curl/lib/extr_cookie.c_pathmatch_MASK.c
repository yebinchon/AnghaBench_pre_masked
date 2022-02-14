
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char const*) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,size_t) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_2, const char *VAR_3)
{
  size_t VAR_4;
  size_t VAR_5;
  char *VAR_6 = ((void*)0);
  char *VAR_7;
  bool VAR_8 = VAR_0;


  VAR_4 = FUNC_3(VAR_2);
  if(1 == VAR_4) {

    return VAR_1;
  }

  VAR_6 = FUNC_2(VAR_3);
  if(!VAR_6)
    return VAR_0;
  VAR_7 = FUNC_1(VAR_6, '?');
  if(VAR_7)
    *VAR_7 = 0x0;


  if(0 == FUNC_3(VAR_6) || VAR_6[0] != '/') {
    FUNC_0(VAR_6);
    VAR_6 = FUNC_2("/");
    if(!VAR_6)
      return VAR_0;
  }
  VAR_5 = FUNC_3(VAR_6);

  if(VAR_5 < VAR_4) {
    VAR_8 = VAR_0;
    goto pathmatched;
  }


  if(FUNC_4(VAR_2, VAR_6, VAR_4)) {
    VAR_8 = VAR_0;
    goto pathmatched;
  }


  if(VAR_4 == VAR_5) {
    VAR_8 = VAR_1;
    goto pathmatched;
  }


  if(VAR_6[VAR_4] == '/') {
    VAR_8 = VAR_1;
    goto pathmatched;
  }

  VAR_8 = VAR_0;

pathmatched:
  FUNC_0(VAR_6);
  return VAR_8;
}
