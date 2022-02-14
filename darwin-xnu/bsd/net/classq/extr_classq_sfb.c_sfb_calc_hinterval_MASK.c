
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct timespec {int dummy; } ;
struct sfb {int sfb_nextreset; int sfb_hinterval; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sfb*) ;
 int FUNC_1 (struct timespec*) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (struct timespec*,int *,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct sfb *VAR_2, u_int64_t *VAR_3)
{
 u_int64_t VAR_4 = 0;
 struct timespec VAR_5;

 if (VAR_3 != ((void*)0)) {



  VAR_4 = *VAR_3;
 }

 if (VAR_1 != 0)
  VAR_4 = VAR_1;
 else if (VAR_3 == ((void*)0) || VAR_4 == 0)
  VAR_4 = ((u_int64_t)FUNC_0(VAR_2) * VAR_0);

 FUNC_2(&VAR_4, &VAR_2->sfb_hinterval);

 FUNC_1(&VAR_5);
 FUNC_3(&VAR_5, &VAR_2->sfb_hinterval, &VAR_2->sfb_nextreset);
}
