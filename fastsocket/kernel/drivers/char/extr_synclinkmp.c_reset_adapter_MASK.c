
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* port_array; } ;
typedef TYPE_1__ SLMP_INFO ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(SLMP_INFO *VAR_1)
{
 int VAR_2;

 for ( VAR_2=0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1->port_array[VAR_2])
   FUNC_0(VAR_1->port_array[VAR_2]);
 }
}
