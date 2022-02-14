
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {unsigned int kn_sfflags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,struct knote*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int
FUNC_3(struct knote *VAR_9) {
 int VAR_10 = 0;

 FUNC_1();




    if ((VAR_9->kn_sfflags & VAR_1) == (unsigned int) VAR_9->kn_sfflags) {


  if (VAR_9->kn_sfflags & VAR_5) {
   VAR_9->kn_sfflags |= VAR_6;
   VAR_9->kn_sfflags |= VAR_7;
  }

  if (VAR_9->kn_sfflags & VAR_2) {
   VAR_9->kn_sfflags |= VAR_3;
   VAR_9->kn_sfflags |= VAR_4;
  }


  FUNC_0(&VAR_8, VAR_9);

 } else {
  VAR_10 = VAR_0;
 }

 FUNC_2();

 return VAR_10;
}
