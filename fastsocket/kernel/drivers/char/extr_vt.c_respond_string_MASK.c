
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*,char const,int ) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, struct tty_struct *VAR_1)
{
 while (*VAR_0) {
  FUNC_1(VAR_1, *VAR_0, 0);
  VAR_0++;
 }
 FUNC_0(VAR_1);
}
