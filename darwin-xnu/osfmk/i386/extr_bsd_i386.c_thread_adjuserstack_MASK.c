
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rsp; } ;
struct TYPE_7__ {TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_8__ {int uesp; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef int uint64_t ;
typedef int thread_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

uint64_t
FUNC_5(
 thread_t VAR_1,
 int VAR_2)
{
 FUNC_3(VAR_1, VAR_0);
 if (FUNC_4(VAR_1)) {
  x86_saved_state64_t *VAR_3;

  VAR_3 = FUNC_2(VAR_1);

  VAR_3->isf.rsp += VAR_2;

  return VAR_3->isf.rsp;
 } else {
  x86_saved_state32_t *VAR_4;

  VAR_4 = FUNC_1(VAR_1);

  VAR_4->uesp += VAR_2;

  return FUNC_0(VAR_4->uesp);
 }
}
