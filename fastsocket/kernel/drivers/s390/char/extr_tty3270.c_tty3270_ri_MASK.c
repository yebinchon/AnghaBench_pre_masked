
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {scalar_t__ cy; } ;


 int FUNC_0 (struct tty3270*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct tty3270 *VAR_0)
{
 if (VAR_0->cy > 0) {
     FUNC_0(VAR_0, VAR_0->cy);
     VAR_0->cy--;
 }
}
