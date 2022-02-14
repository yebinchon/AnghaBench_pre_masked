
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {int state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct cnic_sock *VAR_4)
{
 FUNC_0(VAR_1, &VAR_4->flags);
 FUNC_2();

 while (FUNC_4(VAR_3, &VAR_4->flags))
  FUNC_1(1);

 if (FUNC_3(VAR_2, &VAR_4->flags)) {
  VAR_4->state = VAR_0;
  return 1;
 }

 return 0;
}
