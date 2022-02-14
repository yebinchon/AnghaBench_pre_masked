
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mppcbinfo {scalar_t__ mppi_count; int mppi_zone; int mppi_lock_grp; int mppi_pcbs; int mppi_lock; } ;
struct mppcb {scalar_t__ mpp_state; int mpp_flags; TYPE_1__* mpp_socket; int mpp_lock; struct mppcbinfo* mpp_pcbinfo; } ;
struct TYPE_2__ {scalar_t__ so_usecount; int * so_pcb; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct mppcb*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct mppcb*) ;
 int FUNC_5 (struct mppcb*) ;
 int FUNC_6 (struct mppcb*) ;
 int FUNC_7 (int ,struct mppcb*) ;

void
FUNC_8(struct mppcb *VAR_4)
{
 struct mppcbinfo *VAR_5 = VAR_4->mpp_pcbinfo;

 FUNC_2(VAR_5 != ((void*)0));

 FUNC_0(&VAR_5->mppi_lock, VAR_0);
 FUNC_4(VAR_4);

 FUNC_2(VAR_4->mpp_state == VAR_1);
 FUNC_2(VAR_4->mpp_flags & VAR_2);

 VAR_4->mpp_flags &= ~VAR_2;
 FUNC_1(&VAR_5->mppi_pcbs, VAR_4, VAR_3);
 FUNC_2(VAR_5->mppi_count != 0);
 VAR_5->mppi_count--;

 FUNC_5(VAR_4);





 FUNC_3(&VAR_4->mpp_lock, VAR_5->mppi_lock_grp);

 FUNC_2(VAR_4->mpp_socket != ((void*)0));
 FUNC_2(VAR_4->mpp_socket->so_usecount == 0);
 VAR_4->mpp_socket->so_pcb = ((void*)0);
 VAR_4->mpp_socket = ((void*)0);

 FUNC_7(VAR_5->mppi_zone, VAR_4);
}
