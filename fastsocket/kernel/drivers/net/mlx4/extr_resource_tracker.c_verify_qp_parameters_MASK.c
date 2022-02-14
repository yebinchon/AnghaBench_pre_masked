
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int mgid_index; } ;
struct TYPE_3__ {int mgid_index; } ;
struct mlx4_qp_context {TYPE_2__ alt_path; TYPE_1__ pri_path; int flags; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_qp_context* buf; } ;
typedef enum qp_transition { ____Placeholder_qp_transition } qp_transition ;
typedef enum mlx4_qp_optpar { ____Placeholder_mlx4_qp_optpar } mlx4_qp_optpar ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_3,
    struct mlx4_cmd_mailbox *VAR_4,
    enum qp_transition VAR_5, u8 VAR_6)
{
 u32 VAR_7;
 struct mlx4_qp_context *VAR_8;
 enum mlx4_qp_optpar VAR_9;

 VAR_8 = VAR_4->buf + 8;
 VAR_7 = (FUNC_0(VAR_8->flags) >> 16) & 0xff;
 VAR_9 = FUNC_0(*(__be32 *) VAR_4->buf);

 switch (VAR_7) {
 case 134:
 case 133:
  switch (VAR_5) {
  case 132:
  case 131:
  case 130:
  case 128:
  case 129:
   if (VAR_6 != FUNC_1(VAR_3))

    if (VAR_9 & VAR_2)
     if (VAR_8->pri_path.mgid_index)
      return -VAR_0;
    if (VAR_9 & VAR_1)
     if (VAR_8->alt_path.mgid_index)
      return -VAR_0;
   break;
  default:
   break;
  }

  break;
 default:
  break;
 }

 return 0;
}
