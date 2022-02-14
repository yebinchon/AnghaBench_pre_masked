
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_sfflags; int kn_sdata; } ;
struct kevent_internal_s {int flags; int fflags; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_1, struct kevent_internal_s *VAR_2)
{
 VAR_1->kn_sdata = VAR_2->data;
 VAR_1->kn_sfflags = VAR_2->fflags;

 if (VAR_2->flags & VAR_0) {
  return FUNC_0(VAR_1);
 }

 return 0;
}
