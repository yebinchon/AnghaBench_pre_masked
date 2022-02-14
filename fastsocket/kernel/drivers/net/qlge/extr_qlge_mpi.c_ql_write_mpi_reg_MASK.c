
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int ) ;

int FUNC_2(struct ql_adapter *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_2, VAR_1);
 if (VAR_7)
  goto exit;

 FUNC_1(VAR_4, VAR_3, VAR_6);

 FUNC_1(VAR_4, VAR_0, VAR_5);

 VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_2, VAR_1);
 if (VAR_7)
  goto exit;
exit:
 return VAR_7;
}
