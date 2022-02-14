
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_wait; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (unsigned char,struct tty_struct*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct tty_struct *VAR_0,
           unsigned char VAR_1)
{
 if (FUNC_0(VAR_0))
  return;
 if (FUNC_2(VAR_0)) {
  FUNC_3('\377', VAR_0);
  FUNC_3('\0', VAR_0);
  FUNC_3(VAR_1, VAR_0);
 } else if (FUNC_1(VAR_0))
  FUNC_3('\0', VAR_0);
 else
  FUNC_3(VAR_1, VAR_0);
 FUNC_4(&VAR_0->read_wait);
}
