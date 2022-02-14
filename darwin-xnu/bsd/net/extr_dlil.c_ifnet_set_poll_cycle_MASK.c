
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; } ;
struct ifnet {struct timespec if_poll_cycle; } ;


 int FUNC_0 (struct timespec*,int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;

void
FUNC_3(struct ifnet *VAR_1, struct timespec *VAR_2)
{
 if (VAR_2 == ((void*)0))
  FUNC_0(&VAR_1->if_poll_cycle, sizeof (VAR_1->if_poll_cycle));
 else
  *(&VAR_1->if_poll_cycle) = *VAR_2;

 if (VAR_2 != ((void*)0) && VAR_2->tv_nsec != 0 && VAR_0)
  FUNC_2("%s: poll interval set to %lu nsec\n",
      FUNC_1(VAR_1), VAR_2->tv_nsec);
}
