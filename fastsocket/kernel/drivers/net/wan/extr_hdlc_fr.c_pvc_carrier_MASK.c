
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ether; scalar_t__ main; } ;
typedef TYPE_1__ pvc_device ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(int VAR_0, pvc_device *VAR_1)
{
 if (VAR_0) {
  if (VAR_1->main)
   if (!FUNC_1(VAR_1->main))
    FUNC_2(VAR_1->main);
  if (VAR_1->ether)
   if (!FUNC_1(VAR_1->ether))
    FUNC_2(VAR_1->ether);
 } else {
  if (VAR_1->main)
   if (FUNC_1(VAR_1->main))
    FUNC_0(VAR_1->main);
  if (VAR_1->ether)
   if (FUNC_1(VAR_1->ether))
    FUNC_0(VAR_1->ether);
 }
}
