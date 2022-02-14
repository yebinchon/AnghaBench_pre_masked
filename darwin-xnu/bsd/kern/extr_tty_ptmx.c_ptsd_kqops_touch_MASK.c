
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct knote {int kn_sdata; int kn_sfflags; struct tty* kn_hook; } ;
struct kevent_internal_s {int data; int fflags; } ;


 int FUNC_0 (struct knote*,struct tty*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_0, struct kevent_internal_s *VAR_1)
{
 struct tty *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->kn_hook;

 FUNC_1(VAR_2);


 VAR_0->kn_sfflags = VAR_1->fflags;
 VAR_0->kn_sdata = VAR_1->data;


 VAR_3 = FUNC_0(VAR_0, VAR_2);

 FUNC_2(VAR_2);

 return VAR_3;
}
