
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_state; int t_dev; } ;
struct ptmx_ioctl {int pt_flags; int pt_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tty*,int ) ;
 struct ptmx_ioctl* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_4)
{
 struct ptmx_ioctl *VAR_5 = FUNC_1(VAR_4->t_dev, 0, ((void*)0));
 if (VAR_5 == ((void*)0))
  goto out;
 if (VAR_4->t_state & VAR_3)
         goto out;
 if (VAR_5->pt_flags & VAR_1) {
  VAR_5->pt_flags &= ~VAR_1;
  VAR_5->pt_send = VAR_2;
 }
 FUNC_0(VAR_4, VAR_0);
out:
 return;
}
