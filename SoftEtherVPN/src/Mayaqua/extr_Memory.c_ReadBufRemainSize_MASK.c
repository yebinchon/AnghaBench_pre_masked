
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ Size; scalar_t__ Current; } ;
typedef TYPE_1__ BUF ;



UINT FUNC_0(BUF *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->Size < VAR_0->Current)
 {
  return 0;
 }

 return VAR_0->Size - VAR_0->Current;
}
