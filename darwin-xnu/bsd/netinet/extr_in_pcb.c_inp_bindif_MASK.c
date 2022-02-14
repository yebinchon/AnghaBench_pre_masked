
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_route; int inp_flags; struct ifnet* inp_boundifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 struct ifnet** VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int
FUNC_4(struct inpcb *VAR_5, unsigned int VAR_6, struct ifnet **VAR_7)
{
 struct ifnet *VAR_8 = ((void*)0);

 FUNC_3();
 if ((VAR_6 > (unsigned)VAR_3) || (VAR_6 != VAR_1 &&
     (VAR_8 = VAR_4[VAR_6]) == ((void*)0))) {
  FUNC_2();
  return (VAR_0);
 }
 FUNC_2();

 FUNC_1(VAR_8 != ((void*)0) || VAR_6 == VAR_1);
 VAR_5->inp_boundifp = VAR_8;
 if (VAR_5->inp_boundifp == ((void*)0))
  VAR_5->inp_flags &= ~VAR_2;
 else
  VAR_5->inp_flags |= VAR_2;


 FUNC_0(&VAR_5->inp_route);

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_8;

 return (0);
}
