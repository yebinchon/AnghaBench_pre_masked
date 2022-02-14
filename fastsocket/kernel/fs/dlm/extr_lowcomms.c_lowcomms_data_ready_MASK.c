
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct connection {int rwork; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 struct connection* FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2, int VAR_3)
{
 struct connection *VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 && !FUNC_2(VAR_0, &VAR_4->flags))
  FUNC_0(VAR_1, &VAR_4->rwork);
}
