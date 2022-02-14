
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port; } ;
struct TYPE_3__ {int time; int info; TYPE_2__ adr; } ;


 int FUNC_0 (TYPE_2__,int ,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1( int VAR_1 )
{
 if (!VAR_0[VAR_1].adr.port)
 {
  return;
 }

 FUNC_0(VAR_0[VAR_1].adr, VAR_0[VAR_1].info, VAR_0[VAR_1].time );
}
