
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int NumInStreams; int NumOutStreams; scalar_t__ MethodID; } ;
typedef TYPE_1__ CSzCoderInfo ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const CSzCoderInfo *VAR_0)
{
  return
      VAR_0->NumInStreams == 1 &&
      VAR_0->NumOutStreams == 1 &&
      VAR_0->MethodID <= (uint32_t)0xFFFFFFFF &&
      FUNC_0((uint32_t)VAR_0->MethodID);
}
