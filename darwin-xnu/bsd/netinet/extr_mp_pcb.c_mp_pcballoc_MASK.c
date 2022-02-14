
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct mppcb* so_pcb; } ;
struct mppcbinfo {int mppi_lock; int mppi_count; int mppi_pcbs; int mppi_zone; int mppi_lock_grp; int mppi_lock_attr; int mppi_size; } ;
struct mppcb {int mpp_flags; int mpp_lock; struct socket* mpp_socket; int mpp_state; struct mppcbinfo* mpp_pcbinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct mppcb*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mppcb*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int * FUNC_7 (struct socket*) ;
 int FUNC_8 (struct mppcb*) ;
 struct mppcb* FUNC_9 (int ) ;
 int FUNC_10 (int ,struct mppcb*) ;

int
FUNC_11(struct socket *VAR_4, struct mppcbinfo *VAR_5)
{
 struct mppcb *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_1(FUNC_7(VAR_4) == ((void*)0));

 VAR_6 = FUNC_9(VAR_5->mppi_zone);
 if (VAR_6 == ((void*)0)) {
  return (VAR_0);
 }

 FUNC_2(VAR_6, VAR_5->mppi_size);
 FUNC_4(&VAR_6->mpp_lock, VAR_5->mppi_lock_grp, VAR_5->mppi_lock_attr);
 VAR_6->mpp_pcbinfo = VAR_5;
 VAR_6->mpp_state = VAR_1;
 VAR_6->mpp_socket = VAR_4;
 VAR_4->so_pcb = VAR_6;

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7) {
  FUNC_3(&VAR_6->mpp_lock, VAR_5->mppi_lock_grp);
  FUNC_10(VAR_5->mppi_zone, VAR_6);
  return (VAR_7);
 }

 FUNC_5(&VAR_5->mppi_lock);
 VAR_6->mpp_flags |= VAR_2;
 FUNC_0(&VAR_5->mppi_pcbs, VAR_6, VAR_3);
 VAR_5->mppi_count++;
 FUNC_6(&VAR_5->mppi_lock);

 return (0);
}
