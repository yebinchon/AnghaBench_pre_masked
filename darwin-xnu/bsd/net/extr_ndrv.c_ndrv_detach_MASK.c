
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct ndrv_cb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ndrv_cb*) ;
 struct ndrv_cb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1)
{
 struct ndrv_cb *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 == 0)
  return VAR_0;
 return FUNC_0(VAR_2);
}
