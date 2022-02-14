
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct knote {scalar_t__ kn_vnode_kqok; int kn_sfflags; int kn_sdata; } ;
struct kevent_internal_s {int fflags; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*,struct tty*) ;
 int FUNC_1 (struct knote*,int ) ;
 struct tty* FUNC_2 (struct knote*) ;
 int FUNC_3 (struct tty*) ;

__attribute__((used)) static int
FUNC_4(struct knote *VAR_1, struct kevent_internal_s *VAR_2)
{
 struct tty *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3) {
  FUNC_1(VAR_1, VAR_0);
  return 0;
 }

 VAR_1->kn_sdata = VAR_2->data;
 VAR_1->kn_sfflags = VAR_2->fflags;

 if (VAR_1->kn_vnode_kqok) {
  VAR_4 = FUNC_0(VAR_1, VAR_3);
 }

 FUNC_3(VAR_3);

 return VAR_4;
}
