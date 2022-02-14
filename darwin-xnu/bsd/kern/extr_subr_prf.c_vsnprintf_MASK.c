
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct snprintf_arg {char* str; size_t remain; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ,struct snprintf_arg*,int,int ) ;
 int VAR_1 ;

int
FUNC_1(char *VAR_2, size_t VAR_3, const char *VAR_4, va_list VAR_5)
{
 struct snprintf_arg VAR_6;
 int VAR_7;

 VAR_6.str = VAR_2;
 VAR_6.remain = VAR_3;
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_1, &VAR_6, 10, VAR_0);
 if (VAR_6.remain >= 1)
  *VAR_6.str++ = '\0';
 return VAR_7;
}
