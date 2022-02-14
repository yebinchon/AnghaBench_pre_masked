
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_3, struct file * VAR_4,
    unsigned int VAR_5, unsigned long VAR_6)
{
 if (VAR_3->flags & (1 << VAR_2))
  return -VAR_0;

 switch (VAR_5) {
 default:
  return -VAR_1;
 }
 return 0;
}
