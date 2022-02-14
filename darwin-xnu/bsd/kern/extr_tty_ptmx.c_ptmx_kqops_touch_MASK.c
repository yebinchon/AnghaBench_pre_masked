
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct ptmx_ioctl {int dummy; } ;
struct knote {int kn_sdata; int kn_sfflags; } ;
struct kevent_internal_s {int data; int fflags; } ;


 struct ptmx_ioctl* FUNC_0 (struct knote*) ;
 struct tty* FUNC_1 (struct knote*) ;
 int FUNC_2 (struct knote*,struct ptmx_ioctl*,struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_0, struct kevent_internal_s *VAR_1)
{
 struct ptmx_ioctl *VAR_2 = FUNC_0(VAR_0);
 struct tty *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_3(VAR_3);


 VAR_0->kn_sfflags = VAR_1->fflags;
 VAR_0->kn_sdata = VAR_1->data;


 VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);

 FUNC_4(VAR_3);

 return VAR_4;
}
