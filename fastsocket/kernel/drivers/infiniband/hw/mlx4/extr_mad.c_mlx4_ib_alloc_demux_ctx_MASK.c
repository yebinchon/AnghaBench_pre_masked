
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; int ib_dev; } ;
struct mlx4_ib_demux_pv_ctx {int dummy; } ;
struct mlx4_ib_demux_ctx {int port; int * tun; int * wq; void* ud_wq; int * ib_dev; struct mlx4_ib_dev* dev; } ;
struct TYPE_3__ {int sqp_demux; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_ib_dev*,int,int,int *) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_ib_dev*,int,int) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx4_ib_demux_ctx*,int) ;
 int FUNC_7 (struct mlx4_ib_demux_ctx*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_10(struct mlx4_ib_dev *VAR_2,
           struct mlx4_ib_demux_ctx *VAR_3,
           int VAR_4)
{
 char VAR_5[12];
 int VAR_6 = 0;
 int VAR_7;

 VAR_3->tun = FUNC_4(VAR_2->dev->caps.sqp_demux,
      sizeof (struct mlx4_ib_demux_pv_ctx *), VAR_1);
 if (!VAR_3->tun)
  return -VAR_0;

 VAR_3->dev = VAR_2;
 VAR_3->port = VAR_4;
 VAR_3->ib_dev = &VAR_2->ib_dev;

 for (VAR_7 = 0; VAR_7 < VAR_2->dev->caps.sqp_demux; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2, VAR_7, VAR_4, &VAR_3->tun[VAR_7]);
  if (VAR_6) {
   VAR_6 = -VAR_0;
   goto err_mcg;
  }
 }

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6) {
  FUNC_8("Failed initializing mcg para-virt (%d)\n", VAR_6);
  goto err_mcg;
 }

 FUNC_9(VAR_5, sizeof VAR_5, "mlx4_ibt%d", VAR_4);
 VAR_3->wq = FUNC_1(VAR_5);
 if (!VAR_3->wq) {
  FUNC_8("Failed to create tunnelling WQ for port %d\n", VAR_4);
  VAR_6 = -VAR_0;
  goto err_wq;
 }

 FUNC_9(VAR_5, sizeof VAR_5, "mlx4_ibud%d", VAR_4);
 VAR_3->ud_wq = FUNC_1(VAR_5);
 if (!VAR_3->ud_wq) {
  FUNC_8("Failed to create up/down WQ for port %d\n", VAR_4);
  VAR_6 = -VAR_0;
  goto err_udwq;
 }

 return 0;

err_udwq:
 FUNC_2(VAR_3->wq);
 VAR_3->wq = ((void*)0);

err_wq:
 FUNC_6(VAR_3, 1);
err_mcg:
 for (VAR_7 = 0; VAR_7 < VAR_2->dev->caps.sqp_demux; VAR_7++)
  FUNC_3(VAR_2, VAR_7, VAR_4);
 FUNC_5(VAR_3->tun);
 VAR_3->tun = ((void*)0);
 return VAR_6;
}
