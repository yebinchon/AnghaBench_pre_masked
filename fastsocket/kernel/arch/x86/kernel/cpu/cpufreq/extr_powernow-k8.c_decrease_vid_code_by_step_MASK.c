
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct powernow_k8_data {scalar_t__ currvid; } ;


 int FUNC_0 (struct powernow_k8_data*) ;
 scalar_t__ FUNC_1 (struct powernow_k8_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct powernow_k8_data *VAR_0,
  u32 VAR_1, u32 VAR_2)
{
 if ((VAR_0->currvid - VAR_1) > VAR_2)
  VAR_1 = VAR_0->currvid - VAR_2;

 if (FUNC_1(VAR_0, VAR_1))
  return 1;

 FUNC_0(VAR_0);

 return 0;
}
