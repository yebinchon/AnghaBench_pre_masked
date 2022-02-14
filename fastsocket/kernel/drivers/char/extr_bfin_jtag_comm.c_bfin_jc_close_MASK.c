
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct tty_struct *VAR_4, struct file *VAR_5)
{
 FUNC_0(&VAR_3);
 FUNC_2("close %lu\n", VAR_0);
 if (--VAR_0 == 0)
  VAR_2 = ((void*)0);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_3);
}
