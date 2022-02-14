
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32
FUNC_3(struct qlcnic_adapter *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;

 do {

  FUNC_2(1);

  if (++VAR_5 > VAR_2)
   return VAR_1;

  VAR_4 = FUNC_1(VAR_3, VAR_0);
 } while (!FUNC_0(VAR_4));

 return VAR_4;
}
