
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_sock*) ;
 int FUNC_1 (struct cnic_sock*) ;
 scalar_t__ FUNC_2 (struct cnic_sock*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cnic_sock *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  if (FUNC_3(VAR_0, &VAR_1->flags))
   FUNC_1(VAR_1);
  else
   FUNC_0(VAR_1);
 }
 return 0;
}
