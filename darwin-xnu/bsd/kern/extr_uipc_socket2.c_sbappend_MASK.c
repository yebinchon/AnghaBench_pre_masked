
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockbuf {int sb_flags; TYPE_1__* sb_mbtail; struct mbuf* sb_lastrecord; struct socket* sb_so; } ;
struct mbuf {int m_flags; } ;
struct TYPE_2__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockbuf*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct socket*,int *,struct mbuf*,int *,int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct sockbuf*,struct mbuf*) ;
 int FUNC_4 (struct sockbuf*,struct mbuf*,TYPE_1__*) ;
 int FUNC_5 (struct socket*,int *,struct mbuf**,int *,int ) ;

int
FUNC_6(struct sockbuf *VAR_5, struct mbuf *VAR_6)
{
 struct socket *VAR_7 = VAR_5->sb_so;

 if (VAR_6 == ((void*)0) || (VAR_5->sb_flags & VAR_3)) {
  if (VAR_6 != ((void*)0))
   FUNC_2(VAR_6);
  return (0);
 }

 FUNC_0(VAR_5, "sbappend 1");

 if (VAR_5->sb_lastrecord != ((void*)0) && (VAR_5->sb_mbtail->m_flags & VAR_1))
  return (FUNC_3(VAR_5, VAR_6));

 if (VAR_5->sb_flags & VAR_4 && !(VAR_6 && VAR_6->m_flags & VAR_2)) {
  int VAR_8 = FUNC_5(VAR_7, ((void*)0), &VAR_6, ((void*)0), 0);
  FUNC_0(VAR_5, "sbappend 2");






  if (VAR_8 != 0) {
   if (VAR_8 != VAR_0)
    FUNC_2(VAR_6);
   return (0);
  }
 } else if (VAR_6) {
  VAR_6->m_flags &= ~VAR_2;
 }


 if (VAR_5->sb_lastrecord == ((void*)0))
  VAR_5->sb_lastrecord = VAR_6;

 FUNC_4(VAR_5, VAR_6, VAR_5->sb_mbtail);
 FUNC_0(VAR_5, "sbappend 3");
 return (1);
}
