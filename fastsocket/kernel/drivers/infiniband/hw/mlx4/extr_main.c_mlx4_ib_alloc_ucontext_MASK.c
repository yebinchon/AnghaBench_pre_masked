
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_ucontext {int dummy; } ;
struct mlx4_ib_ucontext {struct ib_ucontext ibucontext; int uar; int db_page_mutex; int db_page_list; } ;
struct mlx4_ib_dev {TYPE_2__* dev; int ib_active; } ;
struct mlx4_ib_alloc_ucontext_resp_v3 {int cqe_size; int bf_regs_per_page; int bf_reg_size; int qp_tab_size; int dev_caps; } ;
struct mlx4_ib_alloc_ucontext_resp {int cqe_size; int bf_regs_per_page; int bf_reg_size; int qp_tab_size; int dev_caps; } ;
struct ib_udata {int dummy; } ;
struct ib_device {scalar_t__ uverbs_abi_ver; } ;
typedef int resp_v3 ;
typedef int resp ;
struct TYPE_4__ {int cqe_size; int bf_regs_per_page; int bf_reg_size; int num_qps; int userspace_caps; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_ucontext* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ib_udata*,struct mlx4_ib_alloc_ucontext_resp_v3*,int) ;
 int FUNC_3 (struct mlx4_ib_ucontext*) ;
 struct mlx4_ib_ucontext* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int *) ;
 struct mlx4_ib_dev* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static struct ib_ucontext *FUNC_9(struct ib_device *VAR_5,
        struct ib_udata *VAR_6)
{
 struct mlx4_ib_dev *VAR_7 = FUNC_8(VAR_5);
 struct mlx4_ib_ucontext *VAR_8;
 struct mlx4_ib_alloc_ucontext_resp_v3 VAR_9;
 struct mlx4_ib_alloc_ucontext_resp VAR_10;
 int VAR_11;

 if (!VAR_7->ib_active)
  return FUNC_0(-VAR_0);

 if (VAR_5->uverbs_abi_ver == VAR_4) {
  VAR_9 = VAR_7->dev->caps.num_qps;
  VAR_9 = VAR_7->dev->caps.bf_reg_size;
  VAR_9 = VAR_7->dev->caps.bf_regs_per_page;
 } else {
  VAR_10.dev_caps = VAR_7->dev->caps.userspace_caps;
  VAR_10.qp_tab_size = VAR_7->dev->caps.num_qps;
  VAR_10.bf_reg_size = VAR_7->dev->caps.bf_reg_size;
  VAR_10.bf_regs_per_page = VAR_7->dev->caps.bf_regs_per_page;
  VAR_10.cqe_size = VAR_7->dev->caps.cqe_size;
 }

 VAR_8 = FUNC_4(sizeof *VAR_8, VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_2);

 VAR_11 = FUNC_5(FUNC_8(VAR_5)->dev, &VAR_8->uar);
 if (VAR_11) {
  FUNC_3(VAR_8);
  return FUNC_0(VAR_11);
 }

 FUNC_1(&VAR_8->db_page_list);
 FUNC_7(&VAR_8->db_page_mutex);

 if (VAR_5->uverbs_abi_ver == VAR_4)
  VAR_11 = FUNC_2(VAR_6, &VAR_9, sizeof(VAR_9));
 else
  VAR_11 = FUNC_2(VAR_6, &VAR_10, sizeof(VAR_10));

 if (VAR_11) {
  FUNC_6(FUNC_8(VAR_5)->dev, &VAR_8->uar);
  FUNC_3(VAR_8);
  return FUNC_0(-VAR_1);
 }

 return &VAR_8->ibucontext;
}
