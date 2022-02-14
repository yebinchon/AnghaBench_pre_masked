
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_data; int kn_ext; int kn_fflags; } ;
struct kevent_internal_s {int ext; int fflags; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct knote *VAR_0, struct kevent_internal_s *VAR_1,
  int VAR_2)
{
 VAR_0->kn_fflags = VAR_1->fflags;
 VAR_0->kn_data = VAR_2;
 FUNC_0(VAR_0->kn_ext, VAR_1->ext, sizeof(VAR_1->ext));
}
