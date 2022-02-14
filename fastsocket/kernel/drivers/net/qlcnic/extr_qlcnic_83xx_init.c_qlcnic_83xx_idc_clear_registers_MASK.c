
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int ahw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_4,
        int VAR_5)
{
 u32 VAR_6;

 if (VAR_5) {
  if (FUNC_2(VAR_4))
   return -VAR_0;
 }

 FUNC_1(VAR_4->ahw, VAR_2, 0);

 VAR_6 = FUNC_0(VAR_4->ahw, VAR_1);
 VAR_6 &= ~VAR_3;
 FUNC_1(VAR_4->ahw, VAR_1, VAR_6);

 if (VAR_5)
  FUNC_3(VAR_4);

 return 0;
}
