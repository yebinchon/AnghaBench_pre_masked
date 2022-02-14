
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ buffer; } ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_2 ;

void
FUNC_1(void * VAR_3)
{
 FUNC_0((uintptr_t)VAR_3 > (uintptr_t)VAR_2.buffer);
 FUNC_0((uintptr_t)VAR_3 < (uintptr_t)VAR_2.buffer + VAR_1);
 if (VAR_3 != ((void*)0))
  *(uint32_t *)VAR_3 = VAR_0;
}
