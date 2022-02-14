
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int portnum; int ahw; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->ahw, VAR_1);
 VAR_3 = VAR_3 & ~(0x3 << (VAR_2->portnum * 2));
 VAR_3 = VAR_3 | (VAR_0 << (VAR_2->portnum * 2));
 FUNC_1(VAR_2->ahw, VAR_1, VAR_3);
}
