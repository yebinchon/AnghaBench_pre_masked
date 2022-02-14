
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int timer; scalar_t__ next_heartbeat; int open; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct inode*,struct file*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_6, struct file *VAR_7)
{
 if (FUNC_2(0, &VAR_3.open))
  return -VAR_0;

 VAR_3.next_heartbeat = VAR_5 + VAR_4 * VAR_1;
 FUNC_0(&VAR_3.timer, VAR_5 + VAR_2);

 return FUNC_1(VAR_6, VAR_7);
}
