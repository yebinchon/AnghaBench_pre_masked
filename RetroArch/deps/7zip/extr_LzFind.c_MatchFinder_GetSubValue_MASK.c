
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pos; int historySize; } ;
typedef TYPE_1__ CMatchFinder ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(CMatchFinder *VAR_1)
{
  return (VAR_1->pos - VAR_1->historySize - 1) & VAR_0;
}
