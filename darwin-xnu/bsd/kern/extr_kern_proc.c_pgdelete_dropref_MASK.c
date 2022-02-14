
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {struct session* t_session; struct session* t_pgrp; } ;
struct session {scalar_t__ pg_membercnt; scalar_t__ pg_refcount; int s_listflags; scalar_t__ s_count; int pg_mlock; int s_mlock; struct session* pg_session; int s_ttypgrpid; int pg_listflags; } ;
struct pgrp {scalar_t__ pg_membercnt; scalar_t__ pg_refcount; int s_listflags; scalar_t__ s_count; int pg_mlock; int s_mlock; struct pgrp* pg_session; int s_ttypgrpid; int pg_listflags; } ;


 int FUNC_0 (struct session*,int,int ) ;
 int FUNC_1 (struct session*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tty* FUNC_2 (struct session*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct tty* VAR_7 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 int FUNC_5 (struct session*) ;
 int FUNC_6 (struct session*) ;
 int VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct tty*) ;
 int FUNC_10 (struct tty*) ;

__attribute__((used)) static void
FUNC_11(struct pgrp *VAR_12)
{
 struct tty *VAR_13;
 int VAR_14 = 1;
 struct session *VAR_15;


 FUNC_5(VAR_12);
 if (VAR_12->pg_membercnt != 0) {
  VAR_14 = 0;
 }
 FUNC_6(VAR_12);

 FUNC_7();
 VAR_12->pg_refcount--;
 if ((VAR_14 == 0) || (VAR_12->pg_membercnt != 0)) {
  FUNC_8();
  return;
 }

 VAR_12->pg_listflags |= VAR_4;

 if (VAR_12->pg_refcount > 0) {
  FUNC_8();
  return;
 }

 VAR_12->pg_listflags |= VAR_3;
 FUNC_1(VAR_12, VAR_8);

 FUNC_8();

 VAR_13 = FUNC_2(VAR_12->pg_session);
 if (VAR_13 != VAR_7) {
  if (VAR_13->t_pgrp == VAR_12) {
   FUNC_9(VAR_13);

   if (VAR_13->t_pgrp == VAR_12) {
    VAR_13->t_pgrp = ((void*)0);
    VAR_12->pg_session->s_ttypgrpid = VAR_2;
   }
   FUNC_10(VAR_13);
  }
 }

 FUNC_7();

 VAR_15 = VAR_12->pg_session;
 if ((VAR_15->s_listflags & (VAR_6 | VAR_5)) != 0)
   FUNC_4("pg_deleteref: manipulating refs of already terminating session");
 if (--VAR_15->s_count == 0) {
  if ((VAR_15->s_listflags & (VAR_6 | VAR_5)) != 0)
   FUNC_4("pg_deleteref: terminating already terminated session");
  VAR_15->s_listflags |= VAR_6;
  VAR_13 = FUNC_2(VAR_15);
  FUNC_1(VAR_15, VAR_11);
  FUNC_8();
  if (VAR_13 != VAR_7) {
   FUNC_9(VAR_13);
   if (VAR_13->t_session == VAR_15)
    VAR_13->t_session = ((void*)0);
   FUNC_10(VAR_13);
  }
  FUNC_7();
  VAR_15->s_listflags |= VAR_5;
  if (VAR_15->s_count != 0)
   FUNC_4("pg_deleteref: freeing session in use");
  FUNC_8();



  FUNC_3(&VAR_15->s_mlock, VAR_9);

  FUNC_0(VAR_15, sizeof(struct session), VAR_1);
 } else
  FUNC_8();



 FUNC_3(&VAR_12->pg_mlock, VAR_9);

 FUNC_0(VAR_12, sizeof(*VAR_12), VAR_0);
}
