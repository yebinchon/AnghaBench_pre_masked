
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct e1000_adapter {int dummy; } ;


 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_0, u64 *VAR_1)
{
 *VAR_1 = FUNC_3(VAR_0);
 if (*VAR_1)
  goto out;
 *VAR_1 = FUNC_4(VAR_0);
 if (*VAR_1)
  goto err_loopback;
 *VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_0);

err_loopback:
 FUNC_0(VAR_0);
out:
 return *VAR_1;
}
