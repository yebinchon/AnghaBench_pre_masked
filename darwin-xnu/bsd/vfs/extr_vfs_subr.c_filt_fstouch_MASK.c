
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_fflags; int kn_sfflags; } ;
struct kevent_internal_s {int fflags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_1, struct kevent_internal_s *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);

 VAR_1->kn_sfflags = VAR_2->fflags;
 VAR_3 = (VAR_1->kn_fflags != 0);

 FUNC_1(VAR_0);

 return VAR_3;
}
