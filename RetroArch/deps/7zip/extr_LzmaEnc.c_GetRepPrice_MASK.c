
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t** prices; } ;
struct TYPE_6__ {TYPE_1__ repLenEnc; } ;
typedef TYPE_2__ CLzmaEnc ;


 size_t FUNC_0 (TYPE_2__*,size_t,size_t,size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static uint32_t FUNC_1(CLzmaEnc *VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
  return VAR_1->repLenEnc.prices[VAR_5][VAR_3 - VAR_0] +
    FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
}
