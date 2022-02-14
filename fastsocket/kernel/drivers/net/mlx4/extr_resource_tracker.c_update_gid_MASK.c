
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int mgid_index; } ;
struct TYPE_3__ {int mgid_index; } ;
struct mlx4_qp_context {TYPE_2__ alt_path; TYPE_1__ pri_path; int flags; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_qp_context* buf; } ;
typedef enum mlx4_qp_optpar { ____Placeholder_mlx4_qp_optpar } mlx4_qp_optpar ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_dev *VAR_5, struct mlx4_cmd_mailbox *VAR_6,
         u8 VAR_7)
{
 struct mlx4_qp_context *VAR_8 = VAR_6->buf + 8;
 enum mlx4_qp_optpar VAR_9 = FUNC_0(*(__be32 *) VAR_6->buf);
 u32 VAR_10 = (FUNC_0(VAR_8->flags) >> 16) & 0xff;

 if (VAR_4 == VAR_10)
  VAR_8->pri_path.mgid_index = 0x80 | VAR_7;

 if (VAR_2 == VAR_10 || VAR_3 == VAR_10) {
  if (VAR_9 & VAR_1)
   VAR_8->pri_path.mgid_index = VAR_7 & 0x7F;
  if (VAR_9 & VAR_0)
   VAR_8->alt_path.mgid_index = VAR_7 & 0x7F;
 }
}
