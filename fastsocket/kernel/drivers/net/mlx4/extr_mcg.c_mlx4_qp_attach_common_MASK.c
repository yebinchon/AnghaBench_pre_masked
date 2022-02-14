
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_qp {unsigned int qpn; } ;
struct TYPE_4__ {int mutex; int bitmap; } ;
struct mlx4_priv {TYPE_2__ mcg_table; } ;
struct mlx4_mgm {void* next_gid_index; void* members_count; void** qp; int gid; } ;
struct TYPE_3__ {int num_mgms; int num_qp_per_mgm; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {struct mlx4_mgm* buf; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 unsigned int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct mlx4_dev*,int,int,int,unsigned int) ;
 int FUNC_5 (struct mlx4_dev*,int,int*,int,struct mlx4_cmd_mailbox*,int*,int*) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (struct mlx4_mgm*,int ,int) ;
 int FUNC_8 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*) ;
 int FUNC_9 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct mlx4_dev*,char*,unsigned int) ;
 int FUNC_14 (struct mlx4_dev*,char*,...) ;
 int FUNC_15 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 struct mlx4_priv* FUNC_16 (struct mlx4_dev*) ;
 int FUNC_17 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct mlx4_dev*,int,int,int,unsigned int) ;

int FUNC_21(struct mlx4_dev *VAR_4, struct mlx4_qp *VAR_5, u8 VAR_6[16],
     int VAR_7, enum mlx4_protocol VAR_8,
     enum mlx4_steer_type VAR_9)
{
 struct mlx4_priv *VAR_10 = FUNC_16(VAR_4);
 struct mlx4_cmd_mailbox *VAR_11;
 struct mlx4_mgm *VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18;
 u8 VAR_19 = VAR_6[5];
 u8 VAR_20 = 0;

 VAR_11 = FUNC_10(VAR_4);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);
 VAR_12 = VAR_11->buf;

 FUNC_18(&VAR_10->mcg_table.mutex);
 VAR_18 = FUNC_5(VAR_4, VAR_19, VAR_6, VAR_8,
    VAR_11, &VAR_15, &VAR_14);
 if (VAR_18)
  goto out;

 if (VAR_14 != -1) {
  if (!(FUNC_2(VAR_12->members_count) & 0xffffff)) {
   VAR_20 = 1;
   FUNC_6(VAR_12->gid, VAR_6, 16);
  }
 } else {
  VAR_16 = 1;

  VAR_14 = FUNC_11(&VAR_10->mcg_table.bitmap);
  if (VAR_14 == -1) {
   FUNC_14(VAR_4, "No AMGM entries left\n");
   VAR_18 = -VAR_0;
   goto out;
  }
  VAR_14 += VAR_4->caps.num_mgms;

  VAR_20 = 1;
  FUNC_7(VAR_12, 0, sizeof *VAR_12);
  FUNC_6(VAR_12->gid, VAR_6, 16);
 }

 VAR_13 = FUNC_2(VAR_12->members_count) & 0xffffff;
 if (VAR_13 == VAR_4->caps.num_qp_per_mgm) {
  FUNC_14(VAR_4, "MGM at index %x is full.\n", VAR_14);
  VAR_18 = -VAR_0;
  goto out;
 }

 for (VAR_17 = 0; VAR_17 < VAR_13; ++VAR_17)
  if ((FUNC_2(VAR_12->qp[VAR_17]) & VAR_2) == VAR_5->qpn) {
   FUNC_13(VAR_4, "QP %06x already a member of MGM\n", VAR_5->qpn);
   VAR_18 = 0;
   goto out;
  }

 if (VAR_7)
  VAR_12->qp[VAR_13++] = FUNC_3((VAR_5->qpn & VAR_2) |
             (1U << VAR_1));
 else
  VAR_12->qp[VAR_13++] = FUNC_3(VAR_5->qpn & VAR_2);

 VAR_12->members_count = FUNC_3(VAR_13 | (u32) VAR_8 << 30);

 VAR_18 = FUNC_9(VAR_4, VAR_14, VAR_11);
 if (VAR_18)
  goto out;

 if (!VAR_16)
  goto out;

 VAR_18 = FUNC_8(VAR_4, VAR_15, VAR_11);
 if (VAR_18)
  goto out;

 VAR_12->next_gid_index = FUNC_3(VAR_14 << 6);

 VAR_18 = FUNC_9(VAR_4, VAR_15, VAR_11);
 if (VAR_18)
  goto out;

out:
 if (VAR_8 == VAR_3) {

  if (VAR_20)
   FUNC_20(VAR_4, VAR_19, VAR_9, VAR_14, VAR_5->qpn);
  else
   FUNC_4(VAR_4, VAR_19, VAR_9,
      VAR_14, VAR_5->qpn);
 }
 if (VAR_18 && VAR_16 && VAR_14 != -1) {
  if (VAR_14 < VAR_4->caps.num_mgms)
   FUNC_17(VAR_4, "Got AMGM index %d < %d",
      VAR_14, VAR_4->caps.num_mgms);
  else
   FUNC_12(&VAR_10->mcg_table.bitmap,
      VAR_14 - VAR_4->caps.num_mgms);
 }
 FUNC_19(&VAR_10->mcg_table.mutex);

 FUNC_15(VAR_4, VAR_11);
 return VAR_18;
}
