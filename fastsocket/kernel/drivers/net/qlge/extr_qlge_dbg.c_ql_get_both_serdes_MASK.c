
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 unsigned int FUNC_0 (struct ql_adapter*,int,int*) ;
 unsigned int FUNC_1 (struct ql_adapter*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_0, u32 VAR_1,
   u32 *VAR_2, u32 *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = 1;
 if (VAR_4)
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_6)
  *VAR_2 = 0xDEADBEEF;

 VAR_6 = 1;
 if (VAR_5)
  VAR_6 = FUNC_0(
      VAR_0, VAR_1, VAR_3);

 if (VAR_6)
  *VAR_3 = 0xDEADBEEF;
}
