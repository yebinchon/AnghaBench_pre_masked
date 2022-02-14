
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct kqueue {int dummy; } ;
struct knote {int dummy; } ;
struct kevent_internal_s {int dummy; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 struct knote* FUNC_2 (struct kqueue*,struct kevent_internal_s*,int,struct proc*) ;
 int FUNC_3 (struct kqueue*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;

__attribute__((used)) static struct knote *
FUNC_6(struct kqueue *VAR_0, struct kevent_internal_s *VAR_1,
  bool VAR_2, struct proc *VAR_3)
{
 struct knote * VAR_4;

 if (VAR_2)
  FUNC_4(VAR_3);
 else
  FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4) {
  FUNC_3(VAR_0);
 }

 if (VAR_2)
  FUNC_5(VAR_3);
 else
  FUNC_1(VAR_3);

 return VAR_4;
}
