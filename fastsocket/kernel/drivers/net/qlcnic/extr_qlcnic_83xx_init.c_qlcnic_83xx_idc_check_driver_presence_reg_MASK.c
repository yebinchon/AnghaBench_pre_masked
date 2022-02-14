
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int ahw; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct qlcnic_adapter *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1->ahw, VAR_0);
 if ((VAR_2 & 0xFFFF))
  return 1;
 else
  return 0;
}
