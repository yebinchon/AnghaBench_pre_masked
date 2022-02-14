
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {size_t dicSize; } ;
struct TYPE_5__ {scalar_t__ checkDicSize; size_t processedPos; TYPE_1__ prop; scalar_t__ dicPos; scalar_t__ dic; } ;
typedef TYPE_2__ CLzmaDec ;


 int FUNC_0 (scalar_t__,int const*,size_t) ;

__attribute__((used)) static void FUNC_1(CLzmaDec *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
   FUNC_0(VAR_0->dic + VAR_0->dicPos, VAR_1, VAR_2);
   VAR_0->dicPos += VAR_2;
   if (VAR_0->checkDicSize == 0 && VAR_0->prop.dicSize - VAR_0->processedPos <= VAR_2)
      VAR_0->checkDicSize = VAR_0->prop.dicSize;
   VAR_0->processedPos += (uint32_t)VAR_2;
}
