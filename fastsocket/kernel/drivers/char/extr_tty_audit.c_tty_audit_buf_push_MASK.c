
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct tty_audit_buf {scalar_t__ valid; int data; int minor; int major; } ;
struct task_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct task_struct*,int ,unsigned int,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_1, uid_t VAR_2,
          unsigned int VAR_3,
          struct tty_audit_buf *VAR_4)
{
 if (VAR_4->valid == 0)
  return;
 if (VAR_0 == 0) {
  VAR_4->valid = 0;
  return;
 }
 FUNC_0("tty", VAR_1, VAR_2, VAR_3, VAR_4->major, VAR_4->minor,
        VAR_4->data, VAR_4->valid);
 VAR_4->valid = 0;
}
