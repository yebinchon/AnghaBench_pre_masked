
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vmcs {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct vmcs*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_6(struct vmcs *VAR_2)
{
 u64 VAR_3 = FUNC_0(FUNC_3(VAR_1, FUNC_4()));

 if (!VAR_0)
  FUNC_2(VAR_3);

 FUNC_5(VAR_2);

 if (!VAR_0)
  FUNC_1();
}
