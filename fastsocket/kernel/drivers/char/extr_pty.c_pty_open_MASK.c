
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* link; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int count; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_5, struct file *VAR_6)
{
 int VAR_7 = -VAR_1;

 if (!VAR_5 || !VAR_5->link)
  goto out;

 VAR_7 = -VAR_0;
 if (FUNC_2(VAR_2, &VAR_5->flags))
  goto out;
 if (FUNC_2(VAR_3, &VAR_5->link->flags))
  goto out;
 if (VAR_5->link->count != 1)
  goto out;

 FUNC_0(VAR_2, &VAR_5->link->flags);
 FUNC_1(VAR_4, &VAR_5->flags);
 VAR_7 = 0;
out:
 return VAR_7;
}
