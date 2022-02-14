
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int status; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_1__** VAR_1 ;
 int * VAR_2 ;

void FUNC_3(uint16_t VAR_3)
{
 int VAR_4;
 FUNC_2(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  if (VAR_3 & (1 << VAR_4))
   VAR_1[FUNC_0(VAR_4)]->status |= VAR_2[VAR_4];
 FUNC_1();
}
