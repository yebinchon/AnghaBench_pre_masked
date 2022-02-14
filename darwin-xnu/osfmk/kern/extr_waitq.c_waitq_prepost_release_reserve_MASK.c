
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct wq_prepost {int dummy; } ;


 int FUNC_0 (struct wq_prepost*) ;
 struct wq_prepost* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(uint64_t VAR_0)
{
 struct wq_prepost *VAR_1;

 FUNC_2("releasing reserved preposts starting at: 0x%llx", VAR_0);

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
}
