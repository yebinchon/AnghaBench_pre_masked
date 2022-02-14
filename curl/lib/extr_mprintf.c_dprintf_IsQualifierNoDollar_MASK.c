
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_2)
{






  switch(*VAR_2) {
  case '-': case '+': case ' ': case '#': case '.':
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
  case 'h': case 'l': case 'L': case 'z': case 'q':
  case '*': case 'O':



    return VAR_1;

  default:
    return VAR_0;
  }
}
