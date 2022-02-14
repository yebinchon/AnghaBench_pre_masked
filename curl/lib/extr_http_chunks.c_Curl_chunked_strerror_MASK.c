
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CHUNKcode ;
 int FUNC_0 (int ) ;

const char *FUNC_1(CHUNKcode VAR_0)
{
  switch(VAR_0) {
  default:
    return "OK";
  case 128:
    return "Too long hexadecimal number";
  case 131:
    return "Illegal or missing hexadecimal sequence";
  case 133:
    return "Malformed encoding found";
  case 129:
    FUNC_0(0);
    return "";
  case 132:
    return "Bad content-encoding found";
  case 130:
    return "Out of memory";
  }
}
