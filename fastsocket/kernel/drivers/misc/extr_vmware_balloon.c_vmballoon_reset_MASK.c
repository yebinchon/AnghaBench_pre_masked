
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int reset_required; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct vmballoon*) ;
 int FUNC_2 (struct vmballoon*) ;
 scalar_t__ FUNC_3 (struct vmballoon*) ;

__attribute__((used)) static void FUNC_4(struct vmballoon *VAR_0)
{

 FUNC_1(VAR_0);

 if (FUNC_3(VAR_0)) {
  VAR_0->reset_required = 0;
  if (!FUNC_2(VAR_0))
   FUNC_0("failed to send guest ID to the host\n");
 }
}
