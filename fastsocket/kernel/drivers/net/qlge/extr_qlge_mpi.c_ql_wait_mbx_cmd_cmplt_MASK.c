
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ql_adapter*,int ) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_4)
{
 int VAR_5 = 100;
 u32 VAR_6;

 do {
  VAR_6 = FUNC_1(VAR_4, VAR_1);
  if (VAR_6 & VAR_2)
   return 0;
  FUNC_0(VAR_3);
 } while (--VAR_5);
 return -VAR_0;
}
