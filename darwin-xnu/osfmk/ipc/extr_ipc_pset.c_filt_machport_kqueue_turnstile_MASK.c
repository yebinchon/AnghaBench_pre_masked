
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int dummy; } ;
struct knote {int kn_sfflags; int kn_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct turnstile* VAR_2 ;
 int FUNC_0 (struct knote*) ;
 struct turnstile* FUNC_1 (int ) ;

struct turnstile *
FUNC_2(struct knote *VAR_3)
{
 if ((VAR_3->kn_sfflags & VAR_1) && (VAR_3->kn_status & VAR_0)) {
  return FUNC_1(FUNC_0(VAR_3));
 }
 return VAR_2;
}
