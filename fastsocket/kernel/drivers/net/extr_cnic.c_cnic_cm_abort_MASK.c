
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cnic_sock {scalar_t__ state; int flags; TYPE_1__* dev; } ;
struct cnic_local {int (* close_conn ) (struct cnic_sock*,scalar_t__) ;} ;
struct TYPE_2__ {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cnic_sock*) ;
 int FUNC_1 (struct cnic_sock*) ;
 int FUNC_2 (struct cnic_sock*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cnic_sock*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct cnic_sock *VAR_4)
{
 struct cnic_local *VAR_5 = VAR_4->dev->cnic_priv;
 u32 VAR_6 = VAR_2;

 if (!FUNC_2(VAR_4))
  return -VAR_1;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);





 VAR_5->close_conn(VAR_4, VAR_6);
 if (VAR_4->state != VAR_6) {

  while (FUNC_5(VAR_3, &VAR_4->flags))
   FUNC_3(1);

  return -VAR_0;
 }

 return 0;
}
