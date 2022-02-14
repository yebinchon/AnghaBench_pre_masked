
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; int * m_nextpkt; } ;
struct ifnet {int if_eflags; int if_flags; } ;
typedef int errno_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ifnet*,struct mbuf*,int ,int ,int *) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*) ;

errno_t
FUNC_4(struct ifnet *VAR_8, struct mbuf *VAR_9, boolean_t VAR_10,
    boolean_t *VAR_11)
{
 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || !(VAR_9->m_flags & VAR_5) ||
     VAR_9->m_nextpkt != ((void*)0)) {
  if (VAR_9 != ((void*)0)) {
   FUNC_3(VAR_9);
   *VAR_11 = VAR_7;
  }
  return (VAR_0);
 } else if (!(VAR_8->if_eflags & VAR_3) ||
     !FUNC_0(VAR_8)) {

  FUNC_2(VAR_9);
  *VAR_11 = VAR_7;
  return (VAR_2);
 } else if (!(VAR_8->if_flags & VAR_4)) {
  FUNC_2(VAR_9);
  *VAR_11 = VAR_7;
  return (VAR_1);
 }

 return (FUNC_1(VAR_8, VAR_9, VAR_6, VAR_10, VAR_11));
}
