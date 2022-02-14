
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ql_adapter {int dummy; } ;


 int FUNC_0 (struct ql_adapter*,scalar_t__,scalar_t__*) ;

int FUNC_1(struct ql_adapter *VAR_0, u32 VAR_1, u64 *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_3)
  goto exit;

 VAR_3 = FUNC_0(VAR_0, VAR_1 + 4, &VAR_4);
 if (VAR_3)
  goto exit;

 *VAR_2 = (u64) VAR_5 | ((u64) VAR_4 << 32);

exit:
 return VAR_3;
}
