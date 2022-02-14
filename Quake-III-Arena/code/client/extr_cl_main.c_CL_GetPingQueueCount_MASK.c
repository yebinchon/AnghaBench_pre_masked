
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ port; } ;
struct TYPE_5__ {TYPE_1__ adr; } ;
typedef TYPE_2__ ping_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_0( void )
{
 int VAR_2;
 int VAR_3;
 ping_t* VAR_4;

 VAR_3 = 0;
 VAR_4 = VAR_1;

 for (VAR_2=0; VAR_2<VAR_0; VAR_2++, VAR_4++ ) {
  if (VAR_4->adr.port) {
   VAR_3++;
  }
 }

 return (VAR_3);
}
