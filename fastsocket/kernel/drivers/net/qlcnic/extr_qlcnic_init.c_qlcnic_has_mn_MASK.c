
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static int
FUNC_1(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3;
 VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 & VAR_1)
  return 1;

 return 0;
}
