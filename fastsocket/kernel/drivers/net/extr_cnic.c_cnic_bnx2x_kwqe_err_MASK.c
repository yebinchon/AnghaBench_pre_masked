
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct l4_kcq {scalar_t__ conn_id; scalar_t__ cid; int status; } ;
struct kwqe {scalar_t__ kwqe_op_flag; scalar_t__ kwqe_info0; scalar_t__ kwqe_info1; } ;
struct kcqe {scalar_t__ kcqe_op_flag; scalar_t__ kcqe_info0; scalar_t__ kcqe_info2; int kcqe_info1; } ;
struct fcoe_kwqe_conn_enable_disable {scalar_t__ context_id; scalar_t__ conn_id; } ;
struct cnic_local {int dummy; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
typedef int kcqe ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (struct cnic_local*,int ,scalar_t__*) ;
 int FUNC_3 (struct cnic_dev*,int,struct kcqe**,int) ;
 int FUNC_4 (struct kcqe*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct cnic_dev *VAR_25, struct kwqe *VAR_26)
{
 struct cnic_local *VAR_27 = VAR_25->cnic_priv;
 struct kcqe VAR_28;
 struct kcqe *VAR_29[1];
 u32 VAR_30;
 u32 VAR_31 = FUNC_1(VAR_26->kwqe_op_flag);
 u32 VAR_32 = VAR_26->kwqe_op_flag & VAR_17;
 u32 VAR_33;
 int VAR_34;

 VAR_30 = VAR_26->kwqe_info0;
 FUNC_4(&VAR_28, 0, sizeof(VAR_28));

 if (VAR_32 == VAR_15) {
  u32 VAR_35 = 0;

  VAR_34 = VAR_0;
  if (VAR_31 == VAR_7) {
   struct fcoe_kwqe_conn_enable_disable *VAR_36;

   VAR_36 = (struct fcoe_kwqe_conn_enable_disable *) VAR_26;
   VAR_33 = VAR_5;
   VAR_30 = VAR_36->context_id;
   VAR_35 = VAR_36->conn_id;
  } else if (VAR_31 == VAR_6) {
   VAR_33 = VAR_4;
  } else {
   return;
  }
  VAR_28.kcqe_op_flag = VAR_33 << VAR_13;
  VAR_28.kcqe_op_flag |= VAR_11;
  VAR_28.kcqe_info1 = VAR_3;
  VAR_28.kcqe_info2 = VAR_30;
  VAR_28.kcqe_info0 = VAR_35;

 } else if (VAR_32 == VAR_16) {
  VAR_34 = VAR_1;
  if (VAR_31 == VAR_9)
   VAR_30 = VAR_26->kwqe_info1;

  VAR_28.kcqe_op_flag = (VAR_31 + 0x10) << VAR_13;
  VAR_28.kcqe_op_flag |= VAR_12;
  VAR_28.kcqe_info1 = VAR_8;
  VAR_28.kcqe_info2 = VAR_30;
  FUNC_2(VAR_27, FUNC_0(VAR_30), &VAR_28.kcqe_info0);

 } else if (VAR_32 == VAR_14) {
  struct l4_kcq *VAR_37 = (struct l4_kcq *) &VAR_28;

  VAR_34 = VAR_2;
  if (VAR_31 == VAR_23)
   VAR_33 = VAR_20;
  else if (VAR_31 == VAR_24)
   VAR_33 = VAR_21;
  else if (VAR_31 == VAR_22)
   VAR_33 = VAR_19;
  else
   return;

  VAR_28.kcqe_op_flag = (VAR_33 << VAR_13) |
        VAR_10;
  VAR_37->status = VAR_18;
  VAR_37->cid = VAR_30;
  FUNC_2(VAR_27, FUNC_0(VAR_30), &VAR_37->conn_id);
 } else {
  return;
 }

 VAR_29[0] = &VAR_28;
 FUNC_3(VAR_25, VAR_34, VAR_29, 1);
}
