
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;


 int FUNC_0 (struct tty*) ;
 int FUNC_1 (char,struct tty*) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);

 while (VAR_1-- > 0) {
  (void)FUNC_1('\b', VAR_0);
  (void)FUNC_1(' ', VAR_0);
  (void)FUNC_1('\b', VAR_0);
 }
}
