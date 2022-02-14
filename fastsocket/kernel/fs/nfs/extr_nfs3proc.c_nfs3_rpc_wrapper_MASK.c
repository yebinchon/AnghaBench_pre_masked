
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int dummy; } ;
struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_clnt*,struct rpc_message*,int) ;

__attribute__((used)) static int
FUNC_3(struct rpc_clnt *VAR_5, struct rpc_message *VAR_6, int VAR_7)
{
 int VAR_8;
 do {
  VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
  if (VAR_8 != -VAR_0 && VAR_8 != -VAR_1)
   break;
  FUNC_1(VAR_3);
  VAR_8 = -VAR_2;
 } while (!FUNC_0(VAR_4));
 return VAR_8;
}
