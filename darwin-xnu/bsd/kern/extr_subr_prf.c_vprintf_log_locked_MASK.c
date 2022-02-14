
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct putchar_args {int * tty; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int ,struct putchar_args*,int,int ) ;
 int VAR_2 ;

int
FUNC_1(const char *VAR_3, va_list VAR_4)
{
 struct putchar_args VAR_5;

 VAR_5.flags = VAR_0;
 VAR_5.tty = ((void*)0);
 FUNC_0(VAR_3, VAR_4, VAR_2, &VAR_5, 10, VAR_1);
 return 0;
}
