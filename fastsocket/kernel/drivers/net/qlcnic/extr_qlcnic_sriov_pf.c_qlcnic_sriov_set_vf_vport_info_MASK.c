
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_info {int dummy; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_1,
       u16 VAR_2)
{
 struct qlcnic_info VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3, VAR_2);
 if (VAR_4)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 return 0;
}
