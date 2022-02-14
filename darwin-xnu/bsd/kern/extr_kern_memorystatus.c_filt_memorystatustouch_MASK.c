
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_sfflags; scalar_t__ kn_fflags; } ;
struct kevent_internal_s {int fflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_7, struct kevent_internal_s *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;

 FUNC_0();






 VAR_10 = VAR_7->kn_sfflags;
 VAR_7->kn_sfflags = (VAR_8->fflags & VAR_0);






 if (VAR_7->kn_sfflags & VAR_4) {



  if (VAR_10 & VAR_4) {




   if (VAR_10 & VAR_5) {
    VAR_7->kn_sfflags |= VAR_5;
   }
   if (VAR_10 & VAR_6) {
    VAR_7->kn_sfflags |= VAR_6;
   }
  } else {




   VAR_7->kn_sfflags |= VAR_5;
   VAR_7->kn_sfflags |= VAR_6;
  }
 }

 if (VAR_7->kn_sfflags & VAR_1) {



  if (VAR_10 & VAR_1) {




   if (VAR_10 & VAR_2) {
    VAR_7->kn_sfflags |= VAR_2;
   }
   if (VAR_10 & VAR_3) {
    VAR_7->kn_sfflags |= VAR_3;
   }
  } else {




   VAR_7->kn_sfflags |= VAR_2;
   VAR_7->kn_sfflags |= VAR_3;
  }
 }
 VAR_9 = (VAR_7->kn_fflags != 0);

 FUNC_1();

 return VAR_9;
}
