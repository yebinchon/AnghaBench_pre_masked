
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct tty {int dummy; } ;
struct putchar_args {int flags; struct tty* tty; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ,struct putchar_args*,int,int ) ;
 int VAR_1 ;

int
FUNC_1(const char *VAR_2, va_list VAR_3, int VAR_4, struct tty *VAR_5)
{
 struct putchar_args VAR_6;

 VAR_6.flags = VAR_4;
 VAR_6.tty = VAR_5;

 FUNC_0(VAR_2, VAR_3, VAR_1, &VAR_6, 10, VAR_0);

 return 0;
}
