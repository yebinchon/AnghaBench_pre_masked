
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void) {
 int VAR_2, VAR_3 = 0;

 while ((VAR_2 = FUNC_0(VAR_1)) != VAR_0 && (VAR_2 == ' ' || VAR_2 == '\n' || VAR_2 == '\t'))
  ;
 if (VAR_2 >= '0' && VAR_2 <= '9') {
  do
   VAR_3 = 10*VAR_3 + (VAR_2 - '0');
  while ((VAR_2 = FUNC_0(VAR_1)) >= '0' && VAR_2 <= '9');
  return VAR_3;
 }
 return -1;
}
