
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int (* Skip ) (int ,scalar_t__) ;} ;
struct TYPE_5__ {int matchFinderObj; TYPE_1__ matchFinder; int additionalOffset; } ;
typedef TYPE_2__ CLzmaEnc ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(CLzmaEnc *VAR_0, uint32_t VAR_1)
{
  if (VAR_1 != 0)
  {
    VAR_0->additionalOffset += VAR_1;
    VAR_0->matchFinder.Skip(VAR_0->matchFinderObj, VAR_1);
  }
}
