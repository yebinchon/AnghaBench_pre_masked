
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_2, u32 *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++, VAR_3++) {
  FUNC_1(VAR_2, VAR_1, VAR_5 << 29 | 0x08000000);
  *VAR_3 = FUNC_0(VAR_2, VAR_1);
 }

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++, VAR_3++) {
  FUNC_1(VAR_2, VAR_0, VAR_5 << 29 | 0x08000000);
  *VAR_3 = FUNC_0(VAR_2, VAR_0);
 }

 return VAR_4;
}
