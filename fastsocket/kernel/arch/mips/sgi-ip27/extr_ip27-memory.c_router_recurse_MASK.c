
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ brd_type; int * brd_compts; } ;
typedef TYPE_2__ lboard_t ;
struct TYPE_9__ {int rou_rflag; TYPE_1__* rou_port; } ;
typedef TYPE_3__ klrou_t ;
struct TYPE_7__ {scalar_t__ port_nasid; int port_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(klrou_t *VAR_4, klrou_t *VAR_5, int VAR_6)
{
 klrou_t *VAR_7;
 lboard_t *VAR_8;
 int VAR_9;

 if (VAR_4->rou_rflag == 1)
  return;

 if (VAR_6 >= VAR_3)
  return;

 VAR_4->rou_rflag = 1;

 for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {
  if (VAR_4->rou_port[VAR_9].port_nasid == VAR_0)
   continue;

  VAR_8 = (lboard_t *)FUNC_1(
   VAR_4->rou_port[VAR_9].port_nasid,
   VAR_4->rou_port[VAR_9].port_offset);

  if (VAR_8->brd_type == VAR_1) {
   VAR_7 = (klrou_t *)FUNC_1(FUNC_0(VAR_8), VAR_8->brd_compts[0]);
   if (VAR_7 == VAR_5) {
    if (VAR_6 < VAR_3)
     VAR_3 = VAR_6;
   }
   else
    FUNC_2(VAR_7, VAR_5, VAR_6 + 1);
  }
 }

 VAR_4->rou_rflag = 0;
}
