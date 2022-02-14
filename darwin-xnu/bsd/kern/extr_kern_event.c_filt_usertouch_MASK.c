
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct knote {int kn_sfflags; scalar_t__ kn_hookid; int kn_sdata; } ;
struct kevent_internal_s {int fflags; int data; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct knote *VAR_4, struct kevent_internal_s *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->fflags & VAR_1;
 VAR_7 = VAR_5->fflags & VAR_2;
 switch (VAR_6) {
 case 129:
  break;
 case 131:
  VAR_4->kn_sfflags &= VAR_7;
  break;
 case 128:
  VAR_4->kn_sfflags |= VAR_7;
  break;
 case 130:
  VAR_4->kn_sfflags = VAR_7;
  break;
 }
 VAR_4->kn_sdata = VAR_5->data;

 if (VAR_5->fflags & VAR_3) {
  VAR_4->kn_hookid = VAR_0;
 }
 return (int)VAR_4->kn_hookid;
}
