
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int cmdcnt; unsigned char* cmdbuf; int flags; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct ps2dev *VAR_2, unsigned char VAR_3)
{
 if (VAR_2->cmdcnt)
  VAR_2->cmdbuf[--VAR_2->cmdcnt] = VAR_3;

 if (VAR_2->flags & VAR_1) {
  VAR_2->flags &= ~VAR_1;
  if (VAR_2->cmdcnt)
   FUNC_0(&VAR_2->wait);
 }

 if (!VAR_2->cmdcnt) {
  VAR_2->flags &= ~VAR_0;
  FUNC_0(&VAR_2->wait);
 }

 return 1;
}
