
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Command ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static Command FUNC_3(const char* VAR_2) {

  const char* VAR_3 = "unbrotli";
  size_t VAR_4 = FUNC_1(VAR_3);
  VAR_2 = FUNC_0(VAR_2);

  if (FUNC_2(VAR_2, VAR_3, VAR_4) == 0) {
    char VAR_5 = VAR_2[VAR_4];
    if (VAR_5 == 0 || VAR_5 == '.') return VAR_1;
  }
  return VAR_0;
}
