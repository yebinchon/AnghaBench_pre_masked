
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int directInput; unsigned char* bufferBase; size_t directInputRem; } ;
struct TYPE_5__ {TYPE_1__ matchFinderBase; } ;
typedef TYPE_2__ CLzmaEnc ;



__attribute__((used)) static void FUNC_0(CLzmaEnc *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
  VAR_0->matchFinderBase.directInput = 1;
  VAR_0->matchFinderBase.bufferBase = (unsigned char *)VAR_1;
  VAR_0->matchFinderBase.directInputRem = VAR_2;
}
