
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sockaddr {int dummy; } ;
struct cnic_sock {struct cnic_dev* dev; } ;
struct cnic_local {int dummy; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_local*,int ,struct cnic_sock*) ;

__attribute__((used)) static int FUNC_1(struct cnic_sock *VAR_1, struct cnic_sockaddr *VAR_2)
{
 struct cnic_dev *VAR_3 = VAR_1->dev;
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;

 return FUNC_0(VAR_4, VAR_0, VAR_1);
}
