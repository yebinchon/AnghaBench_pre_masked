
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,int,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char const*,int ) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3, va_list VAR_4)
{
 char VAR_5[VAR_0+1];

 FUNC_2(VAR_5, sizeof(VAR_5), VAR_3, VAR_4);
 if (VAR_1) {
  if (!VAR_2)
   FUNC_0("%s", VAR_5);
 } else {
  FUNC_1(((void*)0), VAR_5, 6, 60);
 }
}
