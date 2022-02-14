
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int index; int count; } ;
struct file {int dummy; } ;
struct TYPE_4__ {unsigned long data; int function; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_7, struct file * VAR_8)
{
 int VAR_9 = VAR_7->index;

 if ((VAR_9 < 0) || (VAR_9 >= VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_6);

 if (VAR_7->count == 1) {
  FUNC_0(&VAR_5);
  VAR_5.data = (unsigned long) VAR_7;
  VAR_5.function = VAR_4;
  FUNC_1(&VAR_5, VAR_3 + VAR_2);
 }
 FUNC_3(&VAR_6);

 return 0;
}
