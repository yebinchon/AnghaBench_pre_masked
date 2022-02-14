
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cnic_sock {int state; int flags; struct cnic_dev* dev; } ;
struct cnic_local {int dummy; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_sock*) ;
 int FUNC_2 (struct cnic_local*,struct cnic_sock*,int ) ;

__attribute__((used)) static void FUNC_3(struct cnic_sock *VAR_2, u32 VAR_3)
{
 struct cnic_dev *VAR_4 = VAR_2->dev;
 struct cnic_local *VAR_5 = VAR_4->cnic_priv;

 if (VAR_3 == VAR_0) {
  FUNC_2(VAR_5, VAR_2, VAR_3);
  return;
 }

 FUNC_0(VAR_1, &VAR_2->flags);
 FUNC_1(VAR_2);
 VAR_2->state = VAR_3;
 FUNC_2(VAR_5, VAR_2, VAR_3);
}
