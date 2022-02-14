
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_cnt; scalar_t__ canon_data; scalar_t__ icanon; } ;


 int FUNC_0 (struct tty_struct*) ;

__attribute__((used)) static inline int FUNC_1(struct tty_struct *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);
 if (VAR_0->icanon) {
  if (VAR_0->canon_data)
   return 1;
 } else if (VAR_0->read_cnt >= (VAR_1 ? VAR_1 : 1))
  return 1;

 return 0;
}
