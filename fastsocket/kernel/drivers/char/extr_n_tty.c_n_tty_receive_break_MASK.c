
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_wait; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct tty_struct*,int) ;
 int FUNC_4 (char,struct tty_struct*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct tty_struct *VAR_1)
{
 if (FUNC_1(VAR_1))
  return;
 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_0, VAR_1, 1);
  return;
 }
 if (FUNC_2(VAR_1)) {
  FUNC_4('\377', VAR_1);
  FUNC_4('\0', VAR_1);
 }
 FUNC_4('\0', VAR_1);
 FUNC_5(&VAR_1->read_wait);
}
