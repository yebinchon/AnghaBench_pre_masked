
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_fflags; int kn_sfflags; } ;
struct kevent_internal_s {int fflags; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_0, struct kevent_internal_s *VAR_1)
{
 int VAR_2;

 FUNC_0();


 VAR_0->kn_sfflags = VAR_1->fflags;
 VAR_2 = (VAR_0->kn_fflags != 0);

 FUNC_1();

 return VAR_2;
}
