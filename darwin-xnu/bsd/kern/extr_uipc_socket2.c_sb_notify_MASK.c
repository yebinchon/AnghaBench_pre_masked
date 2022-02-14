
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_waiters; int sb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(struct sockbuf *VAR_4)
{
 return (VAR_4->sb_waiters > 0 ||
     (VAR_4->sb_flags & (VAR_2|VAR_0|VAR_3|VAR_1)));
}
