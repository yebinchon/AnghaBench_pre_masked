
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_6__ {scalar_t__ rsp; } ;
struct TYPE_7__ {TYPE_1__ isf; int rdi; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_8__ {scalar_t__ uesp; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef scalar_t__ user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;

__attribute__((used)) static uint64_t
FUNC_7(x86_saved_state_t *VAR_4, int VAR_5, int VAR_6)
{
 uint64_t VAR_7;
 int VAR_8 = VAR_5 ? 1 : 0;

 x86_saved_state64_t *VAR_9;
 x86_saved_state32_t *VAR_10;
 unsigned int VAR_11;

        if (FUNC_4(VAR_4)) {
                VAR_9 = FUNC_6(VAR_4);
  VAR_10 = ((void*)0);
  VAR_11 = VAR_3;
        } else {
  VAR_9 = ((void*)0);
                VAR_10 = FUNC_5(VAR_4);
  VAR_11 = VAR_2;
        }

 if (VAR_11 == VAR_3) {
  user_addr_t VAR_12;





  if (VAR_6 < 6)
   return ((&VAR_9->rdi)[VAR_6]);

  VAR_12 = VAR_9->isf.rsp + sizeof(uint64_t) * (VAR_6 - 6 + VAR_8);
  FUNC_1(VAR_1);
  VAR_7 = FUNC_3(VAR_12);
  FUNC_0(VAR_1 | VAR_0);
 } else {
  uint32_t *VAR_13 = (uint32_t *)(uintptr_t)(VAR_10->uesp);
  FUNC_1(VAR_1);
  VAR_7 = FUNC_2((user_addr_t)(unsigned long)&VAR_13[VAR_6 + VAR_8]);
  FUNC_0(VAR_1 | VAR_0);
 }

 return (VAR_7);
}
