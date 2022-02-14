
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int func; int alt_func; } ;


 int VAR_0 ;
 int FUNC_0 (struct ql_adapter*,int ) ;

int FUNC_1(struct ql_adapter *VAR_1)
{
 u32 VAR_2;





 if (VAR_1->func < VAR_1->alt_func)
  return 1;






 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!(VAR_2 & (1 << (8 + VAR_1->alt_func))))
  return 1;

 return 0;

}
