
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (long) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct rpc_clnt *VAR_4, long *VAR_5)
{
 int VAR_6 = 0;

 FUNC_2();

 if (*VAR_5 <= 0)
  *VAR_5 = VAR_2;
 if (*VAR_5 > VAR_1)
  *VAR_5 = VAR_1;
 FUNC_1(*VAR_5);
 if (FUNC_0(VAR_3))
  VAR_6 = -VAR_0;
 *VAR_5 <<= 1;
 return VAR_6;
}
