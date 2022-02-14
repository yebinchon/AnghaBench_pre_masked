
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_waiters; int sb_cc; } ;
typedef int caddr_t ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct sockbuf *VAR_0)
{
 if (VAR_0->sb_waiters > 0)
  FUNC_0((caddr_t)&VAR_0->sb_cc);
}
