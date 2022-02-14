
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_audit_buf {scalar_t__ valid; struct tty_audit_buf* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tty_audit_buf*) ;

__attribute__((used)) static void FUNC_2(struct tty_audit_buf *VAR_0)
{
 FUNC_0(VAR_0->valid != 0);
 FUNC_1(VAR_0->data);
 FUNC_1(VAR_0);
}
