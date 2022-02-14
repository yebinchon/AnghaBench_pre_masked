
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int portnum; int ahw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_2,
           int VAR_3, int VAR_4)
{
 u32 VAR_5;

 if (VAR_4) {
  if (FUNC_2(VAR_2))
   return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_2->ahw, VAR_1);
 if (VAR_3)
  VAR_5 = VAR_5 | (1 << VAR_2->portnum);
 else
  VAR_5 = VAR_5 & ~(1 << VAR_2->portnum);
 FUNC_1(VAR_2->ahw, VAR_1, VAR_5);

 if (VAR_4)
  FUNC_3(VAR_2);

 return 0;
}
