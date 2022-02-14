
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Size; scalar_t__ Current; } ;
typedef TYPE_1__ BUF ;


 TYPE_1__* FUNC_0 (TYPE_1__*,scalar_t__) ;

BUF *FUNC_1(BUF *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_0->Size < VAR_0->Current)
 {
  return ((void*)0);
 }

 VAR_1 = VAR_0->Size - VAR_0->Current;

 return FUNC_0(VAR_0, VAR_1);
}
