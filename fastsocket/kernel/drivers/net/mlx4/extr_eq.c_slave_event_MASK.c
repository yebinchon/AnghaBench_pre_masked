
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_slave_event_eq {int prod; int event_lock; struct mlx4_eqe* event_eqe; } ;
struct TYPE_5__ {int slave_event_work; int comm_wq; struct mlx4_slave_event_eq slave_eq; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_eqe {int owner; int slave_id; } ;
struct TYPE_4__ {scalar_t__ eqe_size; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_eqe*,struct mlx4_eqe*,scalar_t__) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,char*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct mlx4_dev *VAR_1, u8 VAR_2, struct mlx4_eqe *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_1(VAR_1);
 struct mlx4_slave_event_eq *VAR_5 = &VAR_4->mfunc.master.slave_eq;
 struct mlx4_eqe *VAR_6;
 unsigned long VAR_7;

 FUNC_4(&VAR_5->event_lock, VAR_7);
 VAR_6 = &VAR_5->event_eqe[VAR_5->prod & (VAR_0 - 1)];
 if ((!!(VAR_6->owner & 0x80)) ^
     (!!(VAR_5->prod & VAR_0))) {
  FUNC_2(VAR_1, "Master failed to generate an EQE for slave: %d. "
     "No free EQE on slave events queue\n", VAR_2);
  FUNC_5(&VAR_5->event_lock, VAR_7);
  return;
 }

 FUNC_0(VAR_6, VAR_3, VAR_1->caps.eqe_size - 1);
 VAR_6->slave_id = VAR_2;

 FUNC_6();
 VAR_6->owner = !!(VAR_5->prod & VAR_0) ? 0x0 : 0x80;
 ++VAR_5->prod;

 FUNC_3(VAR_4->mfunc.master.comm_wq,
     &VAR_4->mfunc.master.slave_event_work);
 FUNC_5(&VAR_5->event_lock, VAR_7);
}
