
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l4_kwq_update_pg {int flags; int pg_valids; int pg_host_opaque; int da5; int da4; int da3; int da2; int da1; int da0; int pg_cid; int opcode; } ;
struct kwqe {int dummy; } ;
struct cnic_sock {int l5_cid; int * ha; int pg_cid; int kwqe1; struct cnic_dev* dev; } ;
struct cnic_dev {int (* submit_kwqes ) (struct cnic_dev*,struct kwqe**,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct l4_kwq_update_pg*,int ,int) ;
 int FUNC_1 (struct cnic_dev*,struct kwqe**,int) ;

__attribute__((used)) static int FUNC_2(struct cnic_sock *VAR_4)
{
 struct cnic_dev *VAR_5 = VAR_4->dev;
 struct l4_kwq_update_pg *VAR_6;
 struct kwqe *VAR_7[1];

 VAR_6 = (struct l4_kwq_update_pg *) &VAR_4->kwqe1;
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 VAR_7[0] = (struct kwqe *) VAR_6;

 VAR_6->opcode = VAR_0;
 VAR_6->flags =
  VAR_3 << VAR_1;
 VAR_6->pg_cid = VAR_4->pg_cid;

 VAR_6->da0 = VAR_4->ha[0];
 VAR_6->da1 = VAR_4->ha[1];
 VAR_6->da2 = VAR_4->ha[2];
 VAR_6->da3 = VAR_4->ha[3];
 VAR_6->da4 = VAR_4->ha[4];
 VAR_6->da5 = VAR_4->ha[5];

 VAR_6->pg_host_opaque = VAR_4->l5_cid;
 VAR_6->pg_valids = VAR_2;

 return VAR_5->submit_kwqes(VAR_5, VAR_7, 1);
}
