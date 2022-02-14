
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_6 == VAR_5) {
  if (FUNC_1(VAR_4,
       VAR_2))
   FUNC_0("Execute protection active, "
    "mvcos available\n");
  else
   FUNC_0("Execute protection active, "
    "mvcos not available\n");
 } else if (VAR_6 == VAR_0) {
  if (FUNC_1(VAR_3, VAR_1))
   FUNC_0("Address spaces switched, "
    "mvcos available\n");
  else
   FUNC_0("Address spaces switched, "
    "mvcos not available\n");
 }
}
