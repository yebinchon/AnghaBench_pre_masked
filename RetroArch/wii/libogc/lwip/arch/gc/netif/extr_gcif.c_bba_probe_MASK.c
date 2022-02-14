
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netif {int dummy; } ;
typedef int err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct netif*) ;

__attribute__((used)) static err_t FUNC_2(struct netif *VAR_2)
{
 u32 VAR_3;
 err_t VAR_4;

 VAR_3 = FUNC_0();
 if(VAR_3!=VAR_0) return VAR_1;

 VAR_4 = FUNC_1(VAR_2);
 return VAR_4;
}
