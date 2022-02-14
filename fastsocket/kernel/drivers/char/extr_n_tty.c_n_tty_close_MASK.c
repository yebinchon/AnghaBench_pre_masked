
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int * echo_buf; int * read_buf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 FUNC_1(VAR_0);
 if (VAR_0->read_buf) {
  FUNC_0(VAR_0->read_buf);
  VAR_0->read_buf = ((void*)0);
 }
 if (VAR_0->echo_buf) {
  FUNC_0(VAR_0->echo_buf);
  VAR_0->echo_buf = ((void*)0);
 }
}
