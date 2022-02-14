
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = VAR_1;

 do {
  VAR_6 = FUNC_1(VAR_5,
           VAR_2);
  if ((VAR_6 & VAR_3) ==
      VAR_3)
   break;

  FUNC_0(VAR_4);
 } while (--VAR_7);

 if (!VAR_7)
  return -VAR_0;

 return 0;
}
