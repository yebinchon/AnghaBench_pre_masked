
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;



 int FUNC_5 (char const*) ;

void FUNC_6 (int VAR_1, const char *VAR_2)
{
 switch (VAR_1)
 {
 case 128:
  if (VAR_2 && FUNC_5(VAR_2) > 0) {
   FUNC_3 (VAR_2);
  } else {
   FUNC_1();
  }
  break;
 case 129:
  FUNC_2 (VAR_2);
  break;
 case 130:
  FUNC_0 (VAR_2);
  break;
 default:
  FUNC_4 (VAR_0, "Cbuf_ExecuteText: bad exec_when");
 }
}
