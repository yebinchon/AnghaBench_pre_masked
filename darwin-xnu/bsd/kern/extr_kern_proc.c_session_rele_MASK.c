
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {scalar_t__ s_count; int s_listflags; int s_mlock; } ;


 int FUNC_0 (struct session*,int,int ) ;
 int FUNC_1 (struct session*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_6(struct session *VAR_6)
{
 FUNC_4();
 if (--VAR_6->s_count == 0) {
  if ((VAR_6->s_listflags & (VAR_2 | VAR_1)) != 0)
   FUNC_3("session_rele: terminating already terminated session");
  VAR_6->s_listflags |= VAR_2;
  FUNC_1(VAR_6, VAR_5);
  VAR_6->s_listflags |= VAR_1;
  if (VAR_6->s_count != 0)
   FUNC_3("session_rele: freeing session in use");
  FUNC_5();



  FUNC_2(&VAR_6->s_mlock, VAR_3);

  FUNC_0(VAR_6, sizeof(struct session), VAR_0);
 } else
  FUNC_5();
}
