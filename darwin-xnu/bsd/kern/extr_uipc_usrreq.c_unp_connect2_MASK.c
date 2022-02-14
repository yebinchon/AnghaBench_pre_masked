
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_flags; int unp_mtx; struct unpcb* unp_conn; int unp_peercred; int unp_refs; } ;
struct socket {int so_type; scalar_t__ so_usecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct unpcb*,int ) ;


 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct socket*,int ) ;
 int FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (struct socket*) ;
 struct unpcb* FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*,struct socket*) ;
 int VAR_4 ;

int
FUNC_11(struct socket *VAR_5, struct socket *VAR_6)
{
 struct unpcb *VAR_7 = FUNC_9(VAR_5);
 struct unpcb *VAR_8;

 if (VAR_6->so_type != VAR_5->so_type)
  return (VAR_1);

 VAR_8 = FUNC_9(VAR_6);

 FUNC_0(&VAR_7->unp_mtx, VAR_2);
 FUNC_0(&VAR_8->unp_mtx, VAR_2);


 if (VAR_7 == 0 || VAR_8 == 0)
  return (VAR_0);

 VAR_7->unp_conn = VAR_8;
 VAR_6->so_usecount++;

 switch (VAR_5->so_type) {

 case 129:
  FUNC_1(&VAR_8->unp_refs, VAR_7, VAR_4);

  if (VAR_5 != VAR_6) {




   FUNC_7(VAR_6, 0);
   FUNC_8(VAR_5);
   FUNC_10(VAR_5, VAR_6);
   FUNC_2(VAR_6->so_usecount > 0);
   VAR_6->so_usecount--;
  } else {
   FUNC_8(VAR_5);
  }

  break;

 case 128:

  if (!(VAR_7->unp_flags & VAR_3) &&
      !(VAR_8->unp_flags & VAR_3)) {
   FUNC_3(FUNC_4(), &VAR_7->unp_peercred);
   VAR_7->unp_flags |= VAR_3;

   FUNC_3(FUNC_4(), &VAR_8->unp_peercred);
   VAR_8->unp_flags |= VAR_3;
  }
  VAR_8->unp_conn = VAR_7;
  VAR_5->so_usecount++;


  FUNC_7(VAR_5, 0);
  FUNC_8(VAR_6);




  FUNC_7(VAR_6, 0);

  FUNC_6(VAR_5, 0);
  FUNC_8(VAR_5);

  FUNC_10(VAR_5, VAR_6);

  FUNC_2(VAR_6->so_usecount > 0);
  VAR_6->so_usecount--;
  break;

 default:
  FUNC_5("unknown socket type %d in unp_connect2", VAR_5->so_type);
 }
 FUNC_0(&VAR_7->unp_mtx, VAR_2);
 FUNC_0(&VAR_8->unp_mtx, VAR_2);
 return (0);
}
